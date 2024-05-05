#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>

int countParagraphs(const std::string& text) {
    std::istringstream iss(text);
    std::string line;
    int count = 0;
    while (std::getline(iss, line)) {
        if (!line.empty()) {
            count++;
        }
    }
    return count;
}


bool containsWord(const std::string& text, const std::string& word) {
    return text.find(word) != std::string::npos;
}

int main() {
    setlocale(LC_ALL, "ukr");

    std::string authorName = "��'� �� �������";
    std::string organization = "����� ��������/����������";
    std::string city = "̳���";
    std::string country = "�����";
    std::string year = "г�";


    std::ifstream inputFile("input.txt");
    std::stringstream buffer;
    buffer << inputFile.rdbuf();
    std::string inputText = buffer.str();

    std::vector<std::string> wordsToCheck = {"������", "����������",};


    int paragraphCount = countParagraphs(inputText);


    std::vector<bool> wordPresent;
    for (const auto& word : wordsToCheck) {
        wordPresent.push_back(containsWord(inputText, word));
    }


    std::ofstream outputFile("output.txt");
    outputFile << "��������� ����������:\n"
                << "��'� �� �������: " << authorName << "\n"
                << "��������/����������: " << organization << "\n"
                << "̳���: " << city << "\n"
                << "�����: " << country << "\n"
                << "г�: " << year << "\n\n"
                << "ʳ������ ������� � �����: " << paragraphCount << "\n\n"
                << "�������� ��� � �����:\n";
    for (size_t i = 0; i < wordsToCheck.size(); ++i) {
        outputFile << wordsToCheck[i] << ": " << (wordPresent[i] ? "���" : "�") << "\n";
    }

    outputFile.close();

    return 0;
}

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

    std::string authorName = "Ім'я та прізвище";
    std::string organization = "Назва установи/організації";
    std::string city = "Місто";
    std::string country = "Країна";
    std::string year = "Рік";


    std::ifstream inputFile("input.txt");
    std::stringstream buffer;
    buffer << inputFile.rdbuf();
    std::string inputText = buffer.str();

    std::vector<std::string> wordsToCheck = {"Україна", "університет",};


    int paragraphCount = countParagraphs(inputText);


    std::vector<bool> wordPresent;
    for (const auto& word : wordsToCheck) {
        wordPresent.push_back(containsWord(inputText, word));
    }


    std::ofstream outputFile("output.txt");
    outputFile << "Авторська інформація:\n"
                << "Ім'я та прізвище: " << authorName << "\n"
                << "Установа/організація: " << organization << "\n"
                << "Місто: " << city << "\n"
                << "Країна: " << country << "\n"
                << "Рік: " << year << "\n\n"
                << "Кількість абзаців у тексті: " << paragraphCount << "\n\n"
                << "Наявність слів у тексті:\n";
    for (size_t i = 0; i < wordsToCheck.size(); ++i) {
        outputFile << wordsToCheck[i] << ": " << (wordPresent[i] ? "так" : "ні") << "\n";
    }

    outputFile.close();

    return 0;
}

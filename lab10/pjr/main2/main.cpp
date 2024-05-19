
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int countPunctuation(const std::string& text) {
    int count = 0;
    for (char c : text) {
        if (ispunct(c)) {
            count++;
        }
    }
    return count;
}

void userInput() {
    std::string inputText;
    std::cout << "������ �����: ";
    std::cin.ignore(); // �������� ����� �����
    std::getline(std::cin, inputText);

    int punctuationCount = countPunctuation(inputText);

    std::time_t currentTime = std::time(nullptr);
    std::string dateTime = std::asctime(std::localtime(&currentTime));

    std::ofstream outputFile("input.txt", std::ios_base::app);
    if (outputFile.is_open()) {
        outputFile << "\n\nʳ������ ����� ���������� � �����: " << punctuationCount << "\n"
                   << "���� �� ��� �������� ����������: " << dateTime << "\n";
        outputFile.close();
        std::cout << "���������� ������ ������� � ����.\n";
    }
else {
        std::cerr << "�������: ��������� ������� ���� ��� ������ ����������.\n";
    }
}

int main() {
    setlocale(LC_ALL, "ukr");
    int choice;
    std::cout << "������� ����� ������:\n";
    std::cout << "1. �������� ����� ������������\n";
    std::cin >> choice;

    if (choice == 1) {
        userInput();
    } else {
        std::cerr << "������������ ����. ��������� �����.\n";
    }

    return 0;
}


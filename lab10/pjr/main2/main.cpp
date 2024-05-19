
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
    std::cout << "Введіть текст: ";
    std::cin.ignore(); // Очистити буфер вводу
    std::getline(std::cin, inputText);

    int punctuationCount = countPunctuation(inputText);

    std::time_t currentTime = std::time(nullptr);
    std::string dateTime = std::asctime(std::localtime(&currentTime));

    std::ofstream outputFile("input.txt", std::ios_base::app);
    if (outputFile.is_open()) {
        outputFile << "\n\nКількість знаків пунктуації у тексті: " << punctuationCount << "\n"
                   << "Дата та час дозапису інформації: " << dateTime << "\n";
        outputFile.close();
        std::cout << "Результати успішно записані у файл.\n";
    }
else {
        std::cerr << "Помилка: Неможливо відкрити файл для запису результатів.\n";
    }
}

int main() {
    setlocale(LC_ALL, "ukr");
    int choice;
    std::cout << "Виберіть режим роботи:\n";
    std::cout << "1. Введення даних користувачем\n";
    std::cin >> choice;

    if (choice == 1) {
        userInput();
    } else {
        std::cerr << "Неправильний вибір. Спробуйте знову.\n";
    }

    return 0;
}


#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

int countPunctuation(const std::string& text) {
    int count = 0;
    for (char c : text) {
        if (ispunct(c)) {
            count++;
        }
    }
    return count;
}

int main() {

    std::ifstream inputFile("input.txt");
    std::string inputText((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());


    int punctuationCount = countPunctuation(inputText);

    std::time_t currentTime = std::time(nullptr);
    std::string dateTime = std::asctime(std::localtime(&currentTime));

    std::ofstream outputFile("input.txt", std::ios_base::app);
    outputFile << "\n\nКількість знаків пунктуації у тексті: " << punctuationCount << "\n"
               << "Дата та час дозапису інформації: " << dateTime << "\n";

    outputFile.close();

    return 0;
}

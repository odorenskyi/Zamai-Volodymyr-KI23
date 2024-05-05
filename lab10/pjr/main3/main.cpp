#include <iostream>
#include <fstream>
#include <string>
#include <bitset>


double s_calculation(double x, double y, double z) {

    return x + y * z;
}

int main() {

    double x = 10.5, y = 20.3, z = 5.2;
    int b = 123;


    double result = s_calculation(x, y, z);


    std::string binaryB = std::bitset<sizeof(int) * 8>(b).to_string();

    std::ofstream outputFile("output.txt", std::ios_base::app);
    outputFile << "Результати виконання функції s_calculation з аргументами х, у, z: " << result << "\n"
               << "Число b у двійковому коді: " << binaryB << "\n";

    outputFile.close();

    return 0;
}

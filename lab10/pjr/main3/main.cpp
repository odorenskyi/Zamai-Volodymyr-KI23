
#include <iostream>
#include <fstream>
#include <string>
#include <bitset>
#include <cmath>

double s_calculation(double x) {
    double delta = 1e-5;
    auto f = [](double x) {
        return 3 * sin(sqrt(12 * x) + log(x - 3));
    };
    double derivative = (f(x + delta) - f(x)) / delta;
    return derivative + x;
}

void runTest(double x, int b) {
    double result = s_calculation(x);
    std::string binaryB = std::bitset<sizeof(int) * 8>(b).to_string();

    std::ofstream outputFile("output.txt", std::ios_base::app);
    if (outputFile.is_open()) {
        outputFile << "���������� ��������� ������� s_calculation � ����������� x: " << result << "\n"
                   << "����� b � ��������� ���: " << binaryB << "\n";
        outputFile.close();
        std::cout << "���� ��� x=" << x << " �� b=" << b << " ������ ���������.\n";
    } else {
        std::cerr << "�������: ��������� ������� ���� ��� ������ ����������.\n";
    }
}

int main() {
setlocale(LC_ALL, "ukr");

    double x;
    int b;

    std::cout << "������ �������� x: ";
    std::cin >> x;
    std::cout << "������ ���� ����� b: ";
    std::cin >> b;

    runTest(x, b);

    return 0;
}

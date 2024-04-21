#include <iostream>
#include <map>

using namespace std;

map<int, pair<string, string>> getSockSizeChart() {
    map<int, pair<string, string>> sockSizeChart = {
        {2, {"37/38", "37/38"}},
        {3, {"39/40", "39/40"}},
        {4, {"41/42", "41/42"}},
        {5, {"43/44", "43/44"}},
        {6, {"45/46", "45/46"}}
    };
    return sockSizeChart;
}

void printSockSizeConversion(int size, const pair<string, string>& conversion) {
    cout << "����� " << size << " (������) ������� ������� " << conversion.first << " (���) �� " << conversion.second << " (��)" << endl;
}

int main() {
    setlocale(LC_ALL, "ukr");
    map<int, pair<string, string>> sockSizeChart = getSockSizeChart();

    cout << "������� ���������� ������ ��������� (���.):" << endl;
    cout << "������\t���\t\t\t��" << endl;
    for (const auto& pair : sockSizeChart) {
        cout << pair.first << "\t" << pair.second.first << "\t\t" << pair.second.second << endl;
    }

    int userInput;
    cout << "������ ����� ��������� �� ���������� ��������: ";
    cin >> userInput;

    auto it = sockSizeChart.find(userInput);
    if (it != sockSizeChart.end()) {
        printSockSizeConversion(userInput, it->second);
    } else {
        cout << "�������� ����� �� �������� � �������." << endl;
    }

    system("pause");
    return 0;
}

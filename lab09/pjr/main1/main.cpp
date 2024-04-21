#include <iostream>
#include <iomanip>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ukr");

    const double hourly_rate = 40.0;
    const double bonus_per_extra_hour = 300.0;

    int hours_worked;
    std::cout << "������ ������� ������������� �����: ";
    std::cin >> hours_worked;

    double base_salary = 5 * 8 * hourly_rate;
    double extra_hours_pay = (hours_worked > 40) ? (hours_worked - 40) * bonus_per_extra_hour : 0;
    double total_salary = base_salary + extra_hours_pay;

    double income_tax = total_salary * 0.15;
    double pension_fund = total_salary * 0.02;
    double social_insurance = total_salary * 0.006;
    double temporary_disability_insurance = total_salary * 0.01;
    double total_taxes = income_tax + pension_fund + social_insurance + temporary_disability_insurance;

    double net_salary = total_salary - total_taxes;

    std::cout << "���������� ���� ��������: " << total_salary << " ���." << std::endl;
    std::cout << "����� ����������� �������:" << std::endl;
    std::cout << "������� �� ��������: " << income_tax << " ���." << std::endl;
    std::cout << "������ �� ��������� �����: " << pension_fund << " ���." << std::endl;
    std::cout << "������ �� ����� ������������'�������� ���������� ����������� ����������� �� ������� ���������: "
              << social_insurance << " ���." << std::endl;
    std::cout << "������ �� ������������'�������� ���������� ����������� ����������� � ��'���� � ���������� ������� �������������: "
              << temporary_disability_insurance << " ���." << std::endl;
    std::cout << "���� �� ������ ����������� (� ������������ ���������): " << net_salary << " ���." << std::endl;

    std::cout << "�������� ����-��� ������ �� Enter ��� ���������� ��������...";
    char any_key;
    std::cin >> any_key;

    return 0;
}

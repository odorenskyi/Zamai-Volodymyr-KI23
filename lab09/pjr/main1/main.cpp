#include <iostream>
#include <iomanip>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ukr");

    const double hourly_rate = 40.0;
    const double bonus_per_extra_hour = 300.0;

    int hours_worked;
    std::cout << "Введіть кількість відпрацьованих годин: ";
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

    std::cout << "Нарахована сума зарплати: " << total_salary << " грн." << std::endl;
    std::cout << "Розмір вирахованих податків:" << std::endl;
    std::cout << "Податок на прибуток: " << income_tax << " грн." << std::endl;
    std::cout << "Внесок до Пенсійного фонду: " << pension_fund << " грн." << std::endl;
    std::cout << "Внесок до Фонду загальнообов'язкового державного соціального страхування на випадок безробіття: "
              << social_insurance << " грн." << std::endl;
    std::cout << "Внесок до загальнообов'язкового державного соціального страхування у зв'язку з тимчасовою втратою працездатності: "
              << temporary_disability_insurance << " грн." << std::endl;
    std::cout << "Сума до видачі працівникові (з вирахуваними податками): " << net_salary << " грн." << std::endl;

    std::cout << "Натисніть будь-яку клавішу та Enter для завершення програми...";
    char any_key;
    std::cin >> any_key;

    return 0;
}

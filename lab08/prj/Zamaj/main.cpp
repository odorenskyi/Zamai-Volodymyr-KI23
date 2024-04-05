#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calculate_S(double x, double y, double z) {
    return (3 * sin(sqrt(12 * x + log(x - 3)))) - y + z / x;
}

int main() {
    double x, y, z;
    char a, b;

    cout << "Enter the values of x, y, and z: ";
    cin >> x >> y >> z;

    cout << "Enter characters a and b: ";
    cin >> a >> b;

    double S = calculate_S(x, y, z);

    int x_hex = static_cast<int>(x);
    int y_hex = static_cast<int>(y);
    int z_hex = static_cast<int>(z);

    cout << boolalpha;
    cout << "Result of the logical expression (a+1 > |b-2|): " << (a + 1 > abs(b - 2)) << endl;
    cout << "Decimal values: x=" << x << ", y=" << y << ", z=" << z << endl;
    cout << "Hexadecimal values: x=" << hex << x_hex << ", y=" << y_hex << ", z=" << z_hex << endl;
    cout << "Value of S: " << scientific << setprecision(6) << S << endl;

    return 0;
}

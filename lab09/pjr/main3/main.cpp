#include <iostream>

using namespace std;


int countZeros(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 == 0) {
            count++;
        }
        n /= 2;
    }
    return count;
}


int countOnes(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            count++;
        }
        n /= 2;
    }
    return count;
}

int main() {
    setlocale(LC_ALL, "ukr");
    int N;
    cout << "¬вед≥ть натуральне число N в≥д 0 до 7483650: ";
    cin >> N;


    int D1 = (N & 2) >> 1;


    int result = D1 ? countZeros(N) : countOnes(N);

    cout << "–езультат: " << result << endl;

    system("pause");

    return 0;
}

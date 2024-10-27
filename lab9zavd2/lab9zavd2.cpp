#include <iostream>
#include <cmath>
#include <Windows.h>
#include<cstdlib>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a = 0, b = 5;
    int k;

    cout << "Введіть натуральне число k: ";
    cin >> k;

    if (k <= 0) {
        cout << "k має бути натуральним числом." << endl;
        return 1;
    }

    double h = (b - a) / k;
    double x = a;

    cout << " x\t y" << endl;
    for (int i = 0; i <= k; i++) {
        double y = sin(x * x + 4);
        cout << x << "\t" << y << endl;
        x += h;
    }

    return 0;
}

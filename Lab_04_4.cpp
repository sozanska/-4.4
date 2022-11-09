// Lab_04_4.cpp
// Прізвище та ім'я автора
// Лабораторна робота №4.4
// Табуляція функції, заданої графіком.
// Варіант 4

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x_start, x_end;  // початкове та кінцеве значення вхідного аргументу
    double dx;   // крок
    double R;    // вхідний параметр
    double y;    // результат обчислення виразу
    double x;    // змінна циклу

    cout << "R = "; cin >> R;
    cout << "x_start = "; cin >> x_start;
    cout << "x_end = "; cin >> x_end;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "\n   Function value" << endl;
    cout << "--------------------" << endl;
    cout << "|" << setw(7) << "x" << " |" << setw(8) << "y" << " |" << endl;
    cout << "--------------------" << endl;

    for (x = x_start; x <= x_end; x += dx) {
        if (x <= 0)
            y = -R * (x + 6) / 6;
        else
            if (x > 0 && x <= R)
                y = sqrt(R * R - x * x);
            else
                if (x > R && x <= 2 * R)
                    y = sqrt(R * R - pow(x - 2 * R, 2));
                else
                    y = R;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(8) << setprecision(3) << y
            << " |" << endl;
    }

    cout << "--------------------" << endl;

    cin.get();
    return 0;
}

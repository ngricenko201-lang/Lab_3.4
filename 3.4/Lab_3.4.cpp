// Lab_03_4.cpp
// < Гриценко Нікіта >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 4

#include <iostream>
using namespace std;

int main()
{
    double x;   // координата x точки
    double y;   // координата y точки
    double R;   // радіус

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалуження в повній формі
    if ((y >= 0 && x * x + y * y <= R * R)      // верхній півкруг
        || (x <= 0 && y >= -R && y <= x))   // нижній трикутник
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    cin.get();
    return 0;
}
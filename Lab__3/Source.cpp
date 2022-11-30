#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    int a, b, c;

    cout << "Ввеiдть число 1: ";
    cin >> a;

    cout << "Введiть число 2: ";
    cin >> b;

    cout << "Введiть число 3: ";
    cin >> c;

    cout << "Сума трьох чисел = " << a + b + c << endl ;

    cout << "Добуток трьох чисел = " << a * b * c << endl ;

    cout << "Середнє арифметичне трьох чисел = " << (double)(a + b + c) / 3 << endl ;

}
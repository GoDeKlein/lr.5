#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double L;
    cout << "Введіть довжину в метрах" << endl;
    cin >> L;
    L = static_cast<int> (L) / 1000;
    cout << "Довжина в кілометрах складає: " << L << endl;
    system("pause");
}


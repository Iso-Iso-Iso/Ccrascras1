#include <iostream>
#include <cstdlib>
using namespace std;
// 6.	Введіть з клавіатури число буфер програми - рядок С-стилю. Перетворіть рядок на ціле, довге і речове. Виведіть номери на екран.

int main()
{

    setlocale(LC_ALL, "ukr");

    char buffer[100];
    long longNumber;
    double doubleNumber;

    cout << "Введіть рядок: ";
    cin.getline(buffer, sizeof(buffer));

    longNumber = atol(buffer);

    doubleNumber = atof(buffer);

    cout << "Ціле число: " << longNumber << endl;
    cout << "Довге число: " << doubleNumber << endl;
    cout << "Речове число: " << doubleNumber << endl;

    return 0;
}
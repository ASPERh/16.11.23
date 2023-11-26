#include <iostream>
#include <windows.h>
using namespace std;

struct Check
{
    char name[100];
    int amount;
    double price;
    double discount;
};

void FCheck(Check& check)
{
    cout << "Продукт: ";
    cin.getline(check.name, sizeof(check.name));

    cout << "Кол-во: ";
    cin >> check.amount;

    cout << "Цена: ";
    cin >> check.price;

    cout << "Скидка: ";
    cin >> check.discount;
}

void PrintCheck(Check& check)
{


    cout << "Продукт: " << check.name << "\n";
    cout << "Кол-во: " << check.amount << "\n";
    cout << "Цена: $" << check.price << "\n";
    cout << "Скидка: $" << check.discount << "\n";
    cout << "Итого: $" << (check.amount * check.price - check.discount) << "\n";
}

    int main()
{
    setlocale(LC_ALL, "Russian");
    Check check;

    FCheck(check);

    PrintCheck(check);

    Sleep(INFINITE);
}
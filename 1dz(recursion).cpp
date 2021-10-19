#include <iostream>
using namespace std;

void printDigit(const int n)
{
    if (n > 9)
        printDigit(n / 10);

    cout << n % 10 << " "; // выводит последнюю цифру из n
}

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите число: ";
    int N;
    cin >> N;
    while (N < 1)
    {
        cout << "Введено не натуральное число. " << endl;
        cout << "Введите число: ";
        cin >> N;
    }

    printDigit(N);

    return 0;    
}


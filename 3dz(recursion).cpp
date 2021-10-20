#include <iostream>
using namespace std;

void printFactors(const int n, const int div)
{
    if (n == 1)
        return;     
    if (n % div == 0)
    {
        cout << " * " << div;
        printFactors(n / div, div);
    }
    else 
        printFactors(n, div + (div == 2 ? 1 : 2));
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

    cout << "N = " << N << " = 1";
    printFactors(N, 2);
 
    return 0;
}

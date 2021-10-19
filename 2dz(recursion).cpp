#include <iostream>
#include <cmath>
using namespace std;


int getDecimal(const string& bin)
{
    int result = 0;
    if (bin.length() > 1)
    {
        string substr = bin.substr(1);
        result += getDecimal(substr);
    }
    if (bin[0] == '1')
    {
        int rank = bin.length() - 1;
        result += pow(2, rank);
    }
    return result;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите двоичное число: ";
    string bin;
    cin >> bin;
    for (int i = 0; i < bin.length(); i++)
        if (bin[i] != '0' && bin[i] != '1')
        {
            cout << "Введено не двоичное число" << endl;
            return 0;
        }

    cout << getDecimal(bin) << endl;
  
    return 0;
}
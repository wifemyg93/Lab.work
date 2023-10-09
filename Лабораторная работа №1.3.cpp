#include <iostream>
using namespace std;

int main() 
{
    setlocale(0, "");

    int num1;
    int num2;
    int sum;

    cout << "Введите диапозон";
    cin >> num1;
    cin >> num2;

    for (int i = num1; i <= num2; i++) 
    {
        if (i % 2 == 0) 
        {
            sum = sum + i;
        }
    }

    cout << "Сумма всех чётных чисел:" << sum << endl;

    return 0;
}
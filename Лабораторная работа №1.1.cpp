#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int num;
    int num2;
    int num3;

    cout << "Введите любое число" << endl;
    cin >> num;

    num2 = num * num;
    num3 = num * num * num;

    cout << num2 << endl;
    cout << num3 << endl;

    return 0;
}
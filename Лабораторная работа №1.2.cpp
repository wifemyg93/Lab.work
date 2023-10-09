#include <iostream>
using namespace std;

int main() 
{
	setlocale(0, "");
	int num1;
	int num2;
	int res;

	cout << "Введите любые два  числа" << endl;
	cin >> num1;
	cin >> num2;

	res = (num1 + num2) / 2;
	cout << res;

	return 0;
}

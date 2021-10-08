#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Дано трехзначное число, введите его, чтобы программа поставила его левую цифру справа" << endl;
checka:
	cin >> a;
	if ((a <= 99) || (a >= 1000)) {
		cout << "A должно быть положительным трехзначным числом" << endl;
		goto checka;
	}
	a = a / 100 + a % 100 * 10;
	cout << a << endl;
	return 0;
}
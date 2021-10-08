#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Дано двузначное число, введите его, чтобы программа поменяла его цифры местами" << endl;
    checka:
	cin >> a;
	if ((a <= 9) || (a >= 100)) {
		cout << "A должно быть положительным двузначным числом" << endl;
		goto checka;
	}
	a=a/10+a%10*10;
	cout << a << endl;
	return 0;
}
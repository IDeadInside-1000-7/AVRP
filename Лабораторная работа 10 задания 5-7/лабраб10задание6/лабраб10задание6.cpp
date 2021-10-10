#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите три стороны треугольника: a, b, c, чтобы проверить истинность высказывания: треугольник со сторонами a, b, c является прямоугольным" << endl;
	cout << "введите a" << endl;
	cin >> a;
	cout << "введите b" << endl;
	cin >> b;
	cout << "введите c" << endl;
	cin >> c;
	if (a > b && a > c) {
		if (pow (a, 2) == pow(b, 2) + pow(c, 2)) {
			cout << "Высказывание верно" << endl;
		}
	else {
		cout << "Высказывание неверно" << endl;
	}
	}
	if (b > a && b > c) {
		if (pow(b, 2) == pow(a, 2) + pow(c, 2)) {
			cout << "Высказывание верно" << endl;
		}
		else {
			cout << "Высказывание неверно" << endl;
		}
	}
	if (c > a && c > b) {
		if (pow(c, 2) == pow(a, 2) + pow(b, 2)) {
			cout << "Высказывание верно" << endl;
		}
		else {
			cout << "Высказывание неверно" << endl;
		}
	}


	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите три стороны треугольника: a, b, c, чтобы проверить истинность высказывания: треугольник со сторонами a, b, c существует" << endl;
	cout << "введите a" << endl;
	cin >> a;
	cout << "введите b" << endl;
	cin >> b;
	cout << "введите c" << endl;
	cin >> c;
	if (a < b+c && c < a+b && b < a+c) {
		cout << "Высказывание верно" << endl;
	}
    else {
		cout << "Высказывание неверно" << endl;
	}
	return 0;
}
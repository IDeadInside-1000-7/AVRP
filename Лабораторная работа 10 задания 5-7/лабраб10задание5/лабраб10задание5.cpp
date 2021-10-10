#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A, a1, a2, a3, a4;
	cout << "Введите четырехзначное число, чтобы проверить истинность высказывания: Данное число читается одинаково слева направо и справа налево " << endl;
	cin >> A;
	a1 = A / 1000;
	a2 = (A - a1 * 1000) / 100;
	a3 = (A - a1 * 1000 - a2 * 100) / 10;
	a4 = (A - a1 * 1000 - a2 * 100 - a3 * 10);
	swap(a1, a2);
	if (a1 == a3 && a2 == a4) {
		cout << "Высказывание верно" << endl;
	}
	else {
		cout << "Высказывание неверно" << endl;
	}
	return 0;
}
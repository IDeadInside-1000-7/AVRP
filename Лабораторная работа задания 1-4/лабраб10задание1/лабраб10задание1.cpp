#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B;
	cout << "Введите два целых числа: A, B, чтобы проверить истинность высказывания: Справедливы неравенства A > 2 и B <= 3" << endl;
	cout << "введите A" << endl;
	cin >> A;
	cout << "введите B" << endl;
	cin >> B;
	if (A > 2 && B <= 3) {
		cout << "Высказывание верно" << endl;
	}
	else {
		cout << "Высказывание неверно" << endl;
	}
	return 0;
}
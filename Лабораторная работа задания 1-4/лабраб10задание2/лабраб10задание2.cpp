#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B, C;
	cout << "Введите три целых числа: A, B, С, чтобы проверить истинность высказывания: Справедливо двойное неравенство A < B < C" << endl;
	cout << "введите A" << endl;
	cin >> A;
	cout << "введите B" << endl;
	cin >> B;
	cout << "введите C" << endl;
	cin >> C;
	if (C > B && B > A) {
		cout << "Высказывание верно" << endl;
	}
	else {
		cout << "Высказывание неверно" << endl;
	}
	return 0;
}
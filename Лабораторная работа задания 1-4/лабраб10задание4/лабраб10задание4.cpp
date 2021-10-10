#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A,a1,a2,a3;
	cout << "Введите трехзначное число, чтобы проверить истинность высказывания: «Цифры данного числа образуют возрастающую или убывающую последовательность" << endl;
	cin >> A;
	a1 = A / 100;
	a2 = (A - a1*100) / 10;
	a3 = (A - a1*100 - a2*10);
	if ((a1 > a2 && a2 > a3) || (a1 < a2 && a2 < a3)) {
		cout << "Высказывание верно" << endl;
	}
	else {
		cout << "Высказывание неверно" << endl;
	}
	return 0;
}
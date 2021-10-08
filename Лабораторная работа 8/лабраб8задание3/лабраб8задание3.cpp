#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, d;
	cout << "Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Введите A и B, чтобы найти длину незанятой части отрезка A." << endl;
	cout << "Введите A" << endl;
	checka:
	cin >> a;
	if (a <= 0) {
		cout << "A должно быть меньше целым положительным числом" << endl;
		goto checka;
	}
	cout << "Введите B" << endl;
checkb:
	cin >> b;
	if (b <= 0) {
		cout << "B должно быть целым положительным числом" << endl;
		goto checkb;
	}
	if (b >= a) {
		cout << "B должно быть меньше A" << endl;
		goto checkb;
	}
	d = a % b;
	cout << "Незанятая часть отрезка A: " << d << endl;
	return 0;
}
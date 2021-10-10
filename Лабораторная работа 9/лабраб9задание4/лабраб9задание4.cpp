#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A,A1=0,B,B1=0,C,n,p;
	cout << "Даны целые положительные числа A, B, C. На прямоугольнике размера A × B размещено максимально возможное количество квадратов со стороной C (без наложений). Введите A, B и C, чтобы найти количество квадратов, размещенных на прямоугольнике, а также площадь незанятой части прямоугольника. " << endl;
	cout << "Введите A" << endl;
checkA:
	cin >> A;
	if (A < 1) {
		cout << "A должно быть целым положительным числом" << endl;
		goto checkA;
	}
	cout << "Введите B" << endl;
checkB:
	cin >> B;
	if (B < 1) {
		cout << "B должно быть целым положительным числом" << endl;
		goto checkB;
	}
	cout << "Введите C" << endl;
checkC:
	cin >> C;
	if (C < 1) {
		cout << "C должно быть целым положительным числом" << endl;
		goto checkC;
	}
	p = A * B;
	while (A >= C) {
		A1 = A1 + 1;
		A = A - C;
	}
	while (B >= C) {
		B1 = B1 + 1;
		B = B - C;
	}
	n = A1 * B1;
	p = p - (n*C*C);
	cout << "Число квадратов размещенных на прямоугольнике: " << n << endl;
	cout << "Незанятая площадь прямоугольника" << p << endl;
	return 0;
}
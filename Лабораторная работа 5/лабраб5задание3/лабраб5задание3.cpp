#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float A, B, C, AC, BC, S;
	cout << "введите три точки на числовой оси: A,B и C для расчета длины отрезков АС и ВС и их суммы, точка С должна располагаться между точками A и B" << endl;
	cout << "введите A" << endl;
	cin >> A;
	BCheck:
	cout << "введите B" << endl;
	cin >> B;
	if (B == A) {
		cout << "Точки B и A не должны совпадать, чтобы между ними поместилась точка C!!!" << endl;
		goto BCheck;
	}
	CCheck:
	cout << "введите C" << endl;
	cin >> C;
	if (C >= A && C >= B || C <= A && C <= B) {
		cout << "Точка С должна располагаться между точками A и B!!!" << endl;
		goto CCheck;
	}
	AC = abs(A - C);
	BC = abs(B - C);
	S = AC * BC;
	cout << "Произведение длин отрезков = " << S << endl;
	return 0;
}
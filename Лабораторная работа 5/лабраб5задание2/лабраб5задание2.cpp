#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float A, B, C, AC, BC, S;
	cout << "введите три точки на числовой оси: A,B и C для расчета длины отрезков АС и ВС и их суммы" << endl;
	cout << "введите A" << endl;
	cin >> A;
	cout << "введите B" << endl;
	cin >> B;
	cout << "введите C" << endl;
	cin >> C;
	AC = abs(A-C);
	cout << "AC = " << AC << endl;
	BC = abs(B-C);
	cout << "BC = " << BC << endl;
	S = AC + BC;
	cout << "Сумма отрезков = " << S << endl;
	return 0;
}
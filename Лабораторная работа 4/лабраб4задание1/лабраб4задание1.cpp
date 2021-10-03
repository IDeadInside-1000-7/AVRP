#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, S, P;
	cout << "введите стороны прямоугольника a и b, для расчета его площади S и периметра P" << endl;
	cout << "введите a" << endl;
	cin >> a;
	cout << "введите b" << endl;
	cin >> b;
	S = a * b;
	cout << "Площадь S=" << S << endl;
	P = (a + b) * 2;
	cout << "Периметр P=" << P << endl;
	return 0;
}


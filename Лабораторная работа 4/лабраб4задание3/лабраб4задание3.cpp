#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, s;
	cout << "введите два числа a и b, для расчета их среднего арифметического" << endl;
	cout << "введите a" << endl;
	cin >> a;
	cout << "введите b" << endl;
	cin >> b;
	s = (a + b) / 2;
	cout << "Среднее арифметическое a и b = " << s << endl;
	return 0;
}
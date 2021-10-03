#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, s, r, p, d;
	cout << "введите два ненулевых числа a и b, для расчета суммы, разности, произведения и частного их квадратов " << endl;
	cout << "введите a" << endl;
	cin >> a;
	cout << "введите b" << endl;
	cin >> b;
	s = pow(a,2) + pow(b,2);
	cout << "Сумма квадратов a и b = " << s << endl;
	r = pow(a,2) - pow(b,2);
	cout << "Разность квадратов a и b = " << r << endl;
	p = pow(a,2) * pow(b,2);
	cout << "Произведение квадратов a и b = " << p << endl;
	d = pow(a,2) / pow(b,2);
	cout << "Частное квадратов a и b = " << d << endl;
	return 0;
}
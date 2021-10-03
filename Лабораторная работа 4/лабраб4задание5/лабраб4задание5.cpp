#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, s, r, p, d;
	cout << "введите два ненулевых числа a и b, для расчета суммы, разности, произведения и частного их модулей" << endl;
	cout << "введите a" << endl;
	cin >> a;
	cout << "введите b" << endl;
	cin >> b;
	s = abs(a) + abs(b);
	cout << "Сумма модулей a и b = " << s << endl;
	r = abs(a) - abs(b);
	cout << "Разность модулей a и b = " << r << endl;
	p = abs(a) * abs(b);
	cout << "Произведение модулей a и b = " << p << endl;
	d = abs(a) / abs(b);
	cout << "Частное модулей a и b = " << d << endl;
	return 0;
}
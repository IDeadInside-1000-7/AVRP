#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, y1, x2, y2, s, p;
	cout << "введите координаты x1,y1 и x2,y2, двух противоположных углов прямоугольника для расчета его площади и периметра, cтороны прямоугольника параллельны осям координат" << endl;
	cout << "введите x1" << endl;
	cin >> x1;
	cout << "введите y1" << endl;
	cin >> y1;
	cout << "введите x2" << endl;
	cin >> x2;
	cout << "введите y2" << endl;
	cin >> y2;
	s = (pow(x1 - x2, 2) + pow(y1 - y2, 2))/2;
	cout << "Площадь прямоугольника = " << s << endl;
	p = (abs(x1 - x2) + abs(y1 - y2))*2;
	cout << "Периметр прямоугольника = " << p << endl;
	return 0;
}
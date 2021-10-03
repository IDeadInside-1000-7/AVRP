#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, y1, x2, y2, x3, y3, s, p;
	cout << "введите координаты x1,y1,x2,y2,x3,y3 трех вершин треугольника для расчета его площади и периметра" << endl;
	cout << "введите x1" << endl;
	cin >> x1;
	cout << "введите y1" << endl;
	cin >> y1;
	cout << "введите x2" << endl;
	cin >> x2;
	cout << "введите y2" << endl;
	cin >> y2;
	cout << "введите x3" << endl;
	cin >> x3;
	cout << "введите y3" << endl;
	cin >> y3;
	p = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) + sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)) + sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	cout << "Периметр треугольника = " << p << endl;
	s = sqrt(p/2*(p/2 - sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)))*(p/2 - sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)))*(p/2 - sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2))));
	cout << "Площадь треугольника = " << s << endl;
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, y1, x2, y2, l;
	cout << "введите координаты x1,y1 и x2,y2, для расчета расстояния между двумя точками" << endl;
	cout << "введите x1" << endl;
	cin >> x1;
	cout << "введите y1" << endl;
	cin >> y1;
	cout << "введите x2" << endl;
	cin >> x2;
	cout << "введите y2" << endl;
	cin >> y2;
	l=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	cout << "Расстояние между точками = " << l << endl;
	return 0;
}
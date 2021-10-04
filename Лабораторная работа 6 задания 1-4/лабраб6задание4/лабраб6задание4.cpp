#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float x, y;
	cout << "введите значение x, для расчета значения y = 3x^6 - 6x^2 - 7 " << endl;
	cout << "введите x" << endl;
	cin >> x;
	y = 3*pow(x,6)-6*pow(x,2)-7;
	cout << "y = " << y << endl;
	return 0;
}
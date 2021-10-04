#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float x, y;
	cout << "введите значение x, для расчета значения y = 4(x-3)^6 - 7(x-3)^3 + 2 " << endl;
	cout << "введите x" << endl;
	cin >> x;
	y = 4 * pow(x-3, 6) - 7 * pow(x-3, 3) + 2;
	cout << "y = " << y << endl;
	return 0;
}
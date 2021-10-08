#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float r, p;
	cout << "введите значение угла a в градусах (0<a<360), чтобы он конвертировал их в радианы" << endl;
	checkr:
	cin >> r;
	if (r <= 0 || r >= 360) {
		cout << "угол а должен быть больше 0 градусов и меньше 360" << endl;
		goto checkr;
	}
	p = r / 180;
	cout << "значение угла в радианах = " << p << "p" << endl;
	return 0;
}
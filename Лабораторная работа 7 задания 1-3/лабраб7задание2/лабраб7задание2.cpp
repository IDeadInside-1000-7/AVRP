#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float r, p;
	cout << "введите значение угла a в радианах (0<a<2p), чтобы он конвертировал их в градусы" << endl;
checkr:
	cin >> r;
	if (r <= 0 || r >= 2) {
		cout << "угол а должен быть больше 0 и меньше 2p" << endl;
		goto checkr;
	}
	p = r * 180;
	cout << "значение угла в градусах = " << p << "°" << endl;
	return 0;
}
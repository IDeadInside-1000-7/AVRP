#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float x, a, f, y;
	cout << "x кг конфет стоит a руб" << endl;
	cout << "введите x" << endl;
	cin >> x;
	cout << "введите a" << endl;
	cin >> a;
	cout << "введите y кг, чтобы программа рассчитала из стоимость" << endl;
	cin >> y;
	f = a / x;
	y = f * y;
	cout << "1 кг конфет стоит " << f << " руб" << endl;
	cout << "y кг конфет стоит " << y << " руб" << endl;
	return 0;
}
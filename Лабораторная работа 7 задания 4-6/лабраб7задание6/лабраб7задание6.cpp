#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float x, y, a1, b1, c1, a2, b2, c2;
	cout << "x*a1+y*b1=c1" << endl;
	cout << "x*a2+y*b2=c2" << endl;
	cout << "введите a1" << endl;
	cin >> a1;
	cout << "введите b1" << endl;
	cin >> b1;
	cout << "введите c1" << endl;
	cin >> c1;
	cout << "введите a2" << endl;
	cin >> a2;
	cout << "введите b2" << endl;
	cin >> b2;
	cout << "введите c2" << endl;
	cin >> c2;
	if ((a1 * b2 - a2 * b1) == 0) {
		cout << "Cистема не имеет решений";
		return 0;
	}
	x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
	cout << "x = " << x << endl;
	y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
	cout << "y = " << y << endl;
	return 0;
}
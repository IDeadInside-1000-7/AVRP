#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float x, a, b;
	cout << "x*a+b=0" << endl;
	cout << "введите a, a!=0" << endl;
acheck:
	cin >> a;
	if (a == 0) {
		cout << "a не должно быть равно нулю" << endl;
		goto acheck;
	}
	cout << "введите b" << endl;
	cin >> b;
	x = -b/a;
	cout << "x = " << x << endl;
	return 0;
}
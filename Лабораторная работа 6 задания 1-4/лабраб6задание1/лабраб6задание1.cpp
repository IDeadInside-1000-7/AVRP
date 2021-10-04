#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float A, B;
	cout << "введите две переменных A и B, а программа поменяет их значения местами" << endl;
	cout << "введите A" << endl;
	cin >> A;
	cout << "введите B" << endl;
	cin >> B;
	swap(A,B);
	cout << "Теперь А = " << A << endl;
	cout << "Теперь B = " << B << endl;
	return 0;
}
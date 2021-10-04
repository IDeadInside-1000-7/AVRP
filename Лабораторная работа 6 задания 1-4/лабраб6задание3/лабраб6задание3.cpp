#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float A, B, C;
	cout << "введите три переменных A, B  и С, а программа поменяет местами значения A и С, С и B, B и A" << endl;
	cout << "введите A" << endl;
	cin >> A;
	cout << "введите B" << endl;
	cin >> B;
	cout << "введите С" << endl;
	cin >> C;
	swap(A, C);
	swap(A, B);
	cout << "Теперь А = " << A << endl;
	cout << "Теперь B = " << B << endl;
	cout << "Теперь C = " << C << endl;
	return 0;
}
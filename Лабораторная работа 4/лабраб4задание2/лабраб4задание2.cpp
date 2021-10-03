#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float d,p=3.14, l;
	cout << "введите диаметр окружности d, для расчета ее длины L" << endl;
	cout << "введите d" << endl;
	cin >> d;
	l = p * d;
	cout << "Длина окружности L=" << l << endl;
	return 0;
}


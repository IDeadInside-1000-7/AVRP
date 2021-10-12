#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a,b;
	cout << "введите число байт, для расчета целого числа килобайт" << endl;
	cin >> a;
	b=a/1024;
	b= ceil (b);
	cout << "Целых килобайт: " << b << endl;
	return 0;
}

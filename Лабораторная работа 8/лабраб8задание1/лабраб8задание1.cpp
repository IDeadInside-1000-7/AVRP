#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a;
	cout << "введите число байт, для расчета целого числа килобайт" << endl;
	cin >> a;
	int b=a/1024;
	cout << "Целых килобайт: " << b << endl;
	return 0;
}
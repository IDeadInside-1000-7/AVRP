#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float A, A1, S;
	cout << "введите значение A, для возведения в 8-ую степень нестандартным путем" << endl;
	cout << "введите A" << endl;
	cin >> A;
	A1 = A * A * A;
	S = pow(A1, 2) * pow(A, 2);
	cout << "A^8 = " << S << endl;
	return 0;
}
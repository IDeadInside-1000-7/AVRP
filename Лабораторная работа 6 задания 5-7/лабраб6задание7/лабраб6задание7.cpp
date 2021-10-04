#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float A, A1, A2, S;
	cout << "введите значение A, для возведения в 15-ую степень нестандартным путем" << endl;
	cout << "введите A" << endl;
	cin >> A;
	A1 = pow(A, 2) * pow(A, 2) * pow(A, 2);
	A2 = pow(A, 3) * pow(A, 3) * pow(A, 3);
	S = A1 * A2;
	cout << "A^15 = " << S << endl;
	return 0;
}
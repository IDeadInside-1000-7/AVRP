#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "Дан номер некоторого года N (целое положительное число). Введите N, чтобы определить соответствующий ему номер столетия, учитывая, что, к примеру, началом 20 столетия был 1901 год" << endl;
checkN:
	cin >> N;
	if (N < 0) {
		cout << "N должно быть целым положительным числом" << endl;
		goto checkN;
	}

	int C = N/100+1;
	cout << "Век соответсвующий указанному году: " << C << endl;
	return 0;
}
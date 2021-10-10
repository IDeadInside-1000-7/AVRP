#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A;
	cout << "Введите целое положительное число, чтобы проверить истинность высказывания: Данное число является четным двузначным" << endl;
	cin >> A;
	if (A > 9 && A < 100 && A%2 == 0) {
		cout << "Высказывание верно" << endl;
	}
	else {
		cout << "Высказывание неверно" << endl;
	}
	return 0;
}
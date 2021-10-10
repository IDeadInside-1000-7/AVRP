#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "С начала суток прошло N секунд (N — целое). Введите N, чтобы найти количество секунд, прошедших с начала последней минуты." << endl;
checkN:
	cin >> N;
	if (N < 0) {
		cout << "N должно быть целым положительным числом" << endl;
		goto checkN;
	}
	
	N = N % 60;
	cout << "Количество секунд прошедших с последней минуты: " << N << endl;
	return 0;
}
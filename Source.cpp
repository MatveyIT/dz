//Лизогуб Матвей
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main() {
	/*1. Задан массив, содержащий 20 целых чисел в диапазоне от -20 до 20. Найти сумму элементов этого массива с нечетными номерами. 
	const int n = 5;
	const int m = 4;
	int sum = 0;
	int mas[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 21-20;
			if (mas[i][j] < 0) {
				sum += mas[i][j];
			}
			cout << sum << endl;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
	*/
	/*2. Задан массив, который содержит 15 целых чисел в диапазоне от -60 до 60. Найти произведение отрицательных элементов массива.
	const int n = 5;
	const int m = 3;
	int pr = 1;
	int mas[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 61-60;
			if (mas[i][j] < 0) {
				pr *= mas[i][j];
			}
			cout << pr << endl;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
	*/
	/*4. Дана матрица из n строк и m столбцов, которая содержит целые числа в диапазоне от -40 до 40 .
	Ввести с клавиатуры номер столбца и подсчитать, сколько в этом столбце положительных чисел.*/
	const int n = 5;
	const int m = 5;
	int mas[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 41-40;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		} cout << endl;
	}
	int k;
	cout << "Enter the column number: \ п";
	cin >> k;
	for (int p = 0; p < n; p++) {
		if (mas[p][k] > 0)k++;
		cout << mas[p][k] << ' ';
	}
	return 0;
}

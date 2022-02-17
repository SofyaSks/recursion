#include <iostream>

using namespace std;

int fact(int num) {
	if (num <= 1)
		return 1;
	return num * fact(num - 1);
}
int fib(int num);
template <typename T> void bubble(T arr[], int length, bool type = false ) {
	if (type) {
		for (int i = length - 1; i > 0; i--)
			for (int j = 0; j < i; j++) 
				if (arr[j] < arr[j + 1])
					swap(arr[j], arr[j + 1]);
			
	}
	else
		for (int i = length - 1; i > 0; i--)
			for (int j = 0; j < i; j++) 
				if (arr[j] > arr[j + 1])
					swap(arr[j], arr[j + 1]);
			

			 


}

int main() {
	setlocale(LC_ALL, "ru");
	int n;
	
	/*cout << "Введите число: ";
	cin >> n;
	cout << n << "! = " << fact(n) << endl;*/

	// Задача 1
	/*cout << "Первые 13 чисел Фибоначчи: \n";
	for (int i = 0; i < 13; i++)
		cout << i + 1 << ". " << fib(i) << endl;
	cout << endl;*/

	// Задача 2

	cout << "Изначальный массив:\n[";
	int z2[5]{ 3, 7, 6, 9, -3 };
	for (int i = 0; i < 5; i++)
		cout << z2[i] << ", ";
	cout << "\b\b]\n";

	bubble(z2, 5);
	cout << "Отсортированный массив: ";
	for (int i = 0; i < 5; i++)
		cout << z2[i] << ", ";
	cout << "\b\b]\n";


	return 0;
}

int fib(int num) {
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;
	return fib(num - 1) + fib(num - 2);
}
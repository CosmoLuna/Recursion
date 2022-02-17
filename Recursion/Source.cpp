// ������������ ������ ������� �++
#include <iostream>

using namespace std;

int fact(int num) {
	if (num <= 1)
		return 1;
	return num * fact(num - 1);
}
int fibonacci(int num) {
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);
}

template <typename T> void bubbleSort(T array[], int length, bool type = false) {
	if (type) {
		for (int i = length - 1; i > 0; i--)
			for (int j = 0; j < i; j++)
				if (array[j] < array[j + 1])
					swap(array[j], array[j + 1]);
	}
	else
		for (int i = length - 1; i > 0; i--)
			for (int j = 0; j < i; j++)
				if (array[j] > array[j + 1])
					swap(array[j], array[j + 1]);

}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	/*cout << "������� �����: ";
	cin >> n;
	cout << n << "! = " << fact(n) << endl;*/

	// ������ 1 ���������
	/*cout << "������ 1\n������ 13 ����� ���������: \n";
	for (int i = 0; i < 13; i++)
		cout << i + 1 << ". " << fibonacci(i) << endl;
	cout << endl;*/

	// ������ 2
	cout << "������ 2\n����������� ������: \n[";
	int z2[5] = { 4, 7, 11, 98, -5 };
	for (int i = 0; i < 5; i++)
		cout << z2[i] << ", ";
	cout << "\b\b]\n";

	bubbleSort(z2, 5);
	cout << "��������������� ������:\n[";
	for (int i = 0; i < 5; i++)
		cout << z2[i] << ", ";
	cout << "\b\b]\n";

	return 0;
}
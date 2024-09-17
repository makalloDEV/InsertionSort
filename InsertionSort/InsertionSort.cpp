#include <iostream>

using namespace std;

/*
Все очень просто: двигаем в начало массива элемент, который мы сравнием с предыдущим, и так пока не найдем нужное место, либо пока не дойдем до начала массива
*/

int main()
{
	setlocale(LC_ALL, "RU");

	int m[100];
	int n;

	cout << "Введите количество элементов массива (до 100): ";

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << m[i] << " ";
	}

	cout << endl;

	for (int i = 1; i < n; i++)
	{
		int j = i;
		while (j > 0 and m[j] < m[j - 1])
		{
			swap(m[j], m[j - 1]);
			j--;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << m[i] << " ";
	}
}

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int MaxSwap(int* a, const int size)
{
	int max = -1;
	int imax = -1;

	for (int i = 0; i < size; i++)
		if (a[i] > max && a[i] % 2 == 1)
		{
			max = a[i];
			imax = i;

			break;
		}

	for (int i = imax + 1; i < size; i++)
		if (a[i] > max && a[i] % 2 == 1)
		{
			max = a[i];
			imax = i;
		}

	int tmp = a[size - 1];
	a[size - 1] = a[imax];
	a[imax] = tmp;

	return max;
}

int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел

	int n;
	cout << "n = "; cin >> n;
	int* c = new int[n];

	int Low = -35;
	int High = 25;

	Create(c, n, Low, High);
	Print(c, n);
	MaxSwap(c, n);
	Print(c, n);

	delete[] c;

	return 0;
}

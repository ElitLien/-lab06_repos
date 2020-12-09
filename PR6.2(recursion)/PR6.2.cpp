#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}


void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}

int IFirst(int* a, const int size, int& max, int i)
{
	if (a[i] % 2 == 1)
		{
			max = a[i];
			return i;
		}
	if (i < size - 1)
		return IFirst(a, size, max, i + 1);
	else
		return -1;
}

int MaxSwap(int* a, const int size, int max, int i)
{
	int imax = IFirst(a, size, max, 0);

	if (a[i] > max && a[i] % 2 == 1)
		max = a[i];
	int tmp = a[size - 1];
	a[size - 1] = a[imax];
	a[imax] = tmp;

	if (i < size - 1)
		return MaxSwap(a, size, max, i + 1);
	else
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

	Create(c, n, Low, High, 0);
	Print(c, n, 0);

	int max;
	int imax = IFirst(c, n, max, 0);

	MaxSwap(c, n, -1, imax + 1);
	Print(c, n, 0);

	delete[] c;

	return 0;

}


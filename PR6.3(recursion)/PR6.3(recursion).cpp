#include <iostream>
#include <iomanip>

using namespace std;

void Print(int* a, const int n, int i)
{
	cout << setw(4) << a[i];
	if (i < n - 1)
		Print(a, n, i + 1);
	else
		cout << endl;
}

void Introduction(int* a, const int n, int i)
{
	cout << "a[" << i << "] = ";
	cin >> a[i];

	if (i < n - 1)
		Introduction(a, n, i + 1);
	else
		cout << endl;
}

void Non_Decrease_Masive(int* a, const int n, int i)
{
	int min = a[i];
	int imin = i;
	for (int j = i + 1; j < n; j++)
		if (min >= a[j])
		{
			min = a[j];
			imin = j;
		}
	a[imin] = a[i];
	a[i] = min;
	if (i < n - 2)
		Non_Decrease_Masive(a, n, i + 1);
	else
		cout << endl;
}

template <typename T>
void Print(T* a, const int n, int i)
{
	cout << setw(4) << a[i];
	if (i < n - 1)
		Print(a, n, i + 1);
	else
		cout << endl;
}

template <typename T>
void Introduction(T* a, const int n, int i)
{
	cout << "a[" << i << "] = ";
	cin >> a[i];

	if (i < n- 1)
		Introduction(a, n, i + 1);
	else
		cout << endl;
}

template <typename T>
void Non_Decrease_Masive(T* a, const int n, int i)
{
	T min = a[i];
	int imin = i;
	for (int j = i + 1; j < n; j++)
		if (min >= a[j])
		{
			min = a[j];
			imin = j;
		}
	a[imin] = a[i];
	a[i] = min;
	if (i < n - 2)
		Non_Decrease_Masive(a, n, i + 1);
	else
		cout << endl;
}
int main()
{
	const int n = 20;
	int a[n];

	Introduction(a, n, 0);
	Print(a, n, 0);

	cout << endl;

	Non_Decrease_Masive(a, n, 0);
	Print(a, n, 0);
	           
	cout << endl;

	Introduction<int>(a, n, 0);
	Print<int>(a, n, 0);

	cout << endl;

	Non_Decrease_Masive<int>(a, n, 0);
	Print<int>(a, n, 0);

	return 0;
}
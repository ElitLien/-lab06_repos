#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* c, const int size, const int Low, const int High, int i)
{
	c[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(c, size, Low, High, i + 1);
}

void Nulifier(int* c, const int size, const int Low, const int High, int i)
{
	if (i < size)
	{
		if ((c[i] % 2) == 1 || c[i] > 0)
			c[i] = 0;

		Nulifier(c, size, Low, High, i + 1);
	} 
}

void Copy(int* c, int size, int* arrmod, int i)
{
	if (i < size)
	{
		arrmod[i] = c[i];
		Copy(c, size, arrmod, i + 1);
	}
		
}

int Count(int* c, const int size, int i, int count)
{
	if (i < size)
	{
		if ((c[i] % 2) == 1 || c[i] > 0)
			count++;
		return Count(c, size, i + 1, count);
	}
	else
		return count;
}

void Print(int* c, const int size, int i)
{
	cout << setw(4) << c[i];
	if (i < size - 1)
		Print(c, size, i + 1);
	else
		cout << endl;
}

int Sum(int* c, const int size, int i, int S)
{
	if (i < size - 1)
	{
		if ((c[i] % 2) == 1 || c[i] > 0)
			S += c[i];
		return Sum(c, size, i + 1, S);
	}
	else
		return S;
}

int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел

	const int n = 27;
	int c[n], arrmod[n], S = 0, count = 0;
	int* pc = c;
	int* parrmod = arrmod;

	int Low = -35;
	int High = 25;

	Create(c, n, Low, High, 0);
	Print(c, n, 0);
	Copy(c, n, arrmod, 0);
	Nulifier(arrmod, n, Low, High, 0);
	Print(arrmod, n, 0);

	cout << "N = " << Count(c, n, 0, count) << endl;
	cout << "S = " << Sum(c, n, 0, S) << endl;


	return 0;
}

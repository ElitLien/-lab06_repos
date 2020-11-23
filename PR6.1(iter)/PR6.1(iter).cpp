#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* c, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		c[i] = Low + rand() % (High - Low + 1);
}

void Nulifier(int* c, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
	{
		if ((c[i] % 2) == 1 || c[i] > 0)
			c[i] = 0;
	}
}

void Copy(int* c, int size, int* arrmod)
{
	for (int i = 0; i < size; i++)
		arrmod[i] = c[i];
}

void Count(int* �, const int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if ((�[i] % 2) == 1 || �[i] > 0)
			count++;
	}
	cout << "N = " << count << endl;
}

void Print(int* c, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << c[i];
	cout << endl;
}int Sum(int* �, const int size)	
{
	int S = 0;
		for (int i = 0; i < size; i++)
		{
			if ((�[i] % 2) == 1 || �[i] > 0)
				S += �[i];
		}	
	return S;
}
int main()
{
	srand((unsigned)time(NULL)); // ����������� ���������� ���������� �����

	const int n = 27;
	int c[n], arrmod[n];
	int* pc = c; 
	int* parrmod = arrmod;
	int Low = -35;
	int High = 25;

	Create(c, n, Low, High);
	Print(c, n);
	Copy(c, n, arrmod);
	Nulifier(arrmod, n, Low, High);
	Print(arrmod, n);
	Count(c, n);

	cout << "S = " << Sum(c, n) << endl;
	

	return 0;
}
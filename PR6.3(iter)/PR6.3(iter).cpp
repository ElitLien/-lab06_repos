#include <iostream>

using namespace std;

void Print(int* a, const int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void Introduction(int* a, const int n)
{
    for (int i = 0; i < n; i++)
    { 
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
}

void Non_Decrease_Masive(int* a, const int n)
{
    for (int i = 0; i < n - 1; i++)
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
    }               
}

template <typename T>
void Print(T* a, const int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

template <typename T>
void Introduction(T* a, const int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
}

template <typename T>
void Non_Decrease_Masive(T* a, const int n)
{
    for (int i = 0; i < n - 1; i++)
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
    }
}

int main()
{
    const int n = 20;
    int a[n];

    Introduction(a, n);
    Print(a, n);

    cout << endl;

    Non_Decrease_Masive(a, n);
    Print(a, n);

    cout << endl;

    Introduction<int>(a, n);
    Print<int>(a, n);

    cout << endl;

    Non_Decrease_Masive<int>(a, n);
    Print<int>(a, n);

    return 0;
}

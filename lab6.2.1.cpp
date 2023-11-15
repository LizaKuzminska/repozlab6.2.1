// lab6.2.1.cpp 
// Кузьмінська Єлизавета
// Лабораторна робота № 6.2
// Опрацювання одновимірних масивів ітераційними та рекурсивними способами
// Варіант 10

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void Create(int* a, const int n, int Low, int High, int i)
{
	for (int i = 0; i < n; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Kil(int* a, const int n, int m, int S)
{
	for (int i = 0; i < n; i++)
		if (i % 2 == 1) {
			m++;
			S += a[i];
		}
	return S;

}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 10;
	int a[n];
	int S;
	int Low = 15;
	int High = 85;

	Create(a, n, Low, High, 0);
	S = Kil(a, n, 0, 0);
	Print(a, n);
	cout << "Result: " << 2. * S / n << endl;
}

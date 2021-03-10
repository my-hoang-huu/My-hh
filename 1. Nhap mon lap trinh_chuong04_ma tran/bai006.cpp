#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(double a[][50], int&, int&);
void Xuat(double a[][50], int, int);

int main()
{
	double a[20][50];
	int m, n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau: ";
	Xuat(a, m, n);
	return 1;
}
void Nhap(double a[][50], int& m, int& n)
{
	cout << "Nhap so dong m = ";
	cin >> m;
	cout << "Nhap so cot n = ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/*a[i][j] = rand() * 1.0 / RAND_MAX * 200 - 100;*/
			cout << setw(7) << "a[" << i << "]" << "[" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
void Xuat(double a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << "a[" << i << "][" << j << "] = " << fixed << setprecision(2) << a[i][j];
		}
	}
	cout << endl;
}

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
bool Kt(int);
void XuLy(int[][50], int, int);

int main()
{
	int a[20][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	cout << "\nCac gia tri nam tren bien trong ma tran: \n";
	XuLy(a, m, n);
	cout << endl;
	return 1;
}
void Nhap(int a[][50], int& m, int& n)
{
	cout << "Nhap so dong m = ";
	cin >> m;
	cout << "\nNhap so cot n = ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 201 - 100;
			/*	cout << setw(7) << "a[" << i << "]" << "[" << j << "] = ";
				cin >> a[i][j];*/
		}
	}
	cout << endl;
}
void Xuat(int a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << "a[" << i << "][" << j << "] = " << a[i][j];
		}
	}
	cout << endl;
}
bool Kt(int n)
{
	if (n == 1)
	{
		return true;
	}
	else
	{
		int t = 1;
		for (int i = 1; t <= n; i++)
		{
			t = t * 5;
			if (t == n)
			{
				return true;
			}
		}
	}
	return false;
}
void XuLy(int a[][50], int m, int n)
{
	for (int j = 0; j <= n - 2; j++)
	{
		cout << setw(8) << "a[" << 0 << "][" << j << "] = " << a[0][j];
	}
	for (int i = 0; i <= m - 2; i++)
	{
		cout << setw(8) << "a[" << i << "][" << n - 1 << "] = " << a[i][n - 1];
	}
	for (int j = n - 1; j >= 1; j--)
	{
		cout << setw(8) << "a[" << m - 1 << "][" << j << "] = " << a[m - 1][j];
	}
	for (int i = m - 1; i >= 1; i--)
	{
		cout << setw(8) << "a[" << i << "][" << 0 << "] = " << a[i][0];
	}
}

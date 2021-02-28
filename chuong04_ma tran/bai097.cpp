#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
bool Dong(float[][50], int, int, float);
bool Cot(float[][50], int, int, float);
bool DuongCheo(float[][50], int, int, int, int);
void XuLy(float[][50], int, int);
int main()
{
	float a[20][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	XuLy(a, m, n);
	return 1;
}
void Nhap(float a[][50], int& m, int& n)
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
			a[i][j] = rand() * 1.0 / RAND_MAX * 10;
			/*	cout << setw(7) << "a[" << i << "]" << "[" << j << "] = ";
				cin >> a[i][j];*/
		}
	}
	cout << endl;
}
void Xuat(float a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) /*<< "a[" << i << "][" << j << "] = " */<< fixed << setprecision(2) << a[i][j];
		}
	}
	cout << endl;
}
bool Dong(float a[][50], int k, int n, float x)
{
	for (int j = 0; j < n; j++)
	{
		if (a[k][j] > x)
		{
			return false;
		}
	}
	return true;
}
bool Cot(float a[][50], int m, int h, float x)
{
	for (int i = 0; i < m; i++)
	{
		if (a[i][h] > x)
			return false;
	}
	return true;
}
bool DuongCheo(float a[][50], int m, int n, int k, int h)
{
	int i = k;
	int j = h;
	for (; i <= m && j <= n; i++, j++)
		if (a[i][j] > a[k][h])
			return false;
	i = k;
	j = h;
	for (; i >= 0 && j >= 0; i--, j--)
		if (a[i][j] > a[k][h])
			return false;
	i = k;
	j = h;
	for (; i >= 0 && j <= n; i--, j++)
		if (a[i][j] > a[k][h])
			return false;
	i = k;
	j = h;
	for (; i <= m && j >= 0; i++, j--)
		if (a[i][j] > a[k][h])
			return false;
	return true;
}
void XuLy(float a[][50], int m, int n)
{
	cout << "\nCac gia tri Hoang Hau trong ma tran: ";
	float s = 0;
	for (int i = 0; i < m; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			if (Dong(a, i, n, a[i][j]) && Cot(a, m, j, a[i][j]) && DuongCheo(a, m, n, i, j))
			{
				cout << setw(8) << "a[" << i << "][" << j << "] = " << fixed << setprecision(2) << a[i][j];
			}
		}
	}
}
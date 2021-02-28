#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
int Kt(int[][50], int, int);
int ChanDau(int[][50], int, int);
void XuLy(int[][50], int, int);
int ChinhPhuong(int);
int main()
{
	int a[20][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	XuLy(a, m, n);
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
			a[i][j] = rand() % 21 - 10;
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
int ChinhPhuong(int n)
{
	for (int i = 0; i * i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}
int ChanDau(int a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				return a[i][j];
	return -1;
}
int Kt(int a[][50], int m, int n)
{
	if (ChanDau(a, m, n) == -1)
		return -1;
	else
	{
		int lc = ChanDau(a, m, n);
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				if (a[i][j] > lc && a[i][j] % 2 == 0)
					lc = a[i][j];
		return lc;
	}
}
void XuLy(int a[][50], int m, int n)
{
	if (Kt(a, m, n) == -1)
	{
		cout << "\nMa tran khong co so chan.";
		return;
	}
	else
	{
		cout << "\nCac vi tri co gia tri chan lon nhat trong ma tran: ";
		int dem = 0;
		int lc = Kt(a, m, n);
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				if (a[i][j] == lc)
				{
					dem++;
					cout << setw(8) << "a[" << i << "][" << j << "] = " << a[i][j];
				}
		cout << "\nSo luong gia tri chan nho nhat trong ma tran: " << setprecision(2) << dem << endl;
	}
}
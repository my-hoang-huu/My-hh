#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
bool DieuKien(int n);
bool Kt(int[][50], int, int);
void XuLy(int[][50], int, int);
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
			a[i][j] = rand() * 1.0 / RAND_MAX * 20 - 10;
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
			cout << setw(8) << "a[" << i << "][" << j << "] = " << fixed << setprecision(2) << a[i][j];
		}
	}
	cout << endl;
}
bool DieuKien(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
bool Kt(int a[][50], int d, int n)
{
	int flag1 = 0;
	int flag2 = 0;
	int flag3 = 0;
	for (int j = 0; j < n; j++)
	{
		if (a[d][j] > 0)
		{
			flag1 = 1;
		}
		if (a[d][j] < 0)
		{
			flag2 = 1;
		}
		if (a[d][j] == 0)
		{
			flag3 = 1;
		}
		if (flag1 == 1 && flag2 == 1 && flag3 == 1)
			return true;
	}
	return false;
}
void XuLy(int a[][50], int m, int n)
{
	cout << "\nCac dong vua chua gia tri am, duong va 0 trong ma tran: ";
	int flag = 0;
	for (int i = 0; i < m; i++)
	{
		if (Kt(a, i, n))
		{
			cout << "   Dong: ";
			cout << i << setw(5);
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "\nMa tran Khong co dong vua chua gia tri am, duong va 0. ";
}
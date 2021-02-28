#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
bool ChinhPhuong(int n);
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
			cout << setw(8) << "a[" << i << "][" << j << "] = " << fixed << setprecision(2) << a[i][j];
		}
	}
	cout << endl;
}
bool ChinhPhuong(int n)
{
	for (int i = 0; i * i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}
bool Kt(int a[][50], int m, int c)
{
	for (int i = 0; i < m; i++)
	{
		if (ChinhPhuong(a[i][c]))
		{
			cout << setw(8) << "a[" << i << "][" << c << "] = " << a[i][c];
			return true;
		}
	}
	return false;
}
void XuLy(int a[][50], int m, int n)
{
	cout << "\nCac cot co so chinh phuong: ";
	int flag = 0;
	for (int j = 0; j < n; j++)
	{
		if (Kt(a, m, j))
		{
			cout << "  Cot: ";
			cout << j << setw(5);
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "\nMa tran Khong co so chinh phuong. ";
}
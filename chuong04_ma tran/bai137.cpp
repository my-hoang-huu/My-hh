#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
void HoanVi(int&, int&);
void MangPhu(int[][50], int, int);
void TangMang(int[], int);
void XuatMang(int[], int);
bool DieuKien(int);
int main()
{
	int a[20][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	int t = m * n;
	cout << "\nCac gia tri nguyen to trong ma tran theo thu tu tang dan ";
	cout << "(dung mang phu): ";
	MangPhu(a, m, n);
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
void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void TangMang(int a[], int n)
{
	if (n < 2)
		return;
	for (int i = 0; i <= n - 2; i++)
	{
		if (a[n - 1] < a[i])
			HoanVi(a[n - 1], a[i]);
	}
	TangMang(a, n - 1);
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
void MangPhu(int a[][50], int m, int n)
{
	int b[1000];
	int k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (DieuKien(a[i][j]))
				b[k++] = a[i][j];
		}
	}
	TangMang(b, k);
	XuatMang(b, k);
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << fixed << setprecision(2) << a[i] << setw(8);
	}
}

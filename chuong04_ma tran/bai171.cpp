#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
void XuLy(float[][50], int, int);
bool Kt(float[][50], int, int, float[][50], int, int, int, int);
void HoanVi(int&, int&);
void XuatCon(float[][50], int, int, int, int);
int main()
{
	float a[20][50];
	int m;
	int n;
	cout << "Ma tran B: \n";
	Nhap(a, m, n);
	Xuat(a, m, n);
	XuLy(a, m, n);
	cout << endl;
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
			a[i][j] = rand() % 4;
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
bool Kt(float a[][50], int m, int n, float b[][50], int k, int l, int vtd, int vtc)
{
	for (int i = 0; i <= k - 1; i++)
	{
		for (int j = 0; j <= l - 1; j++)
		{
			if (b[i][j] != a[i + vtd][j + vtc])
				return false;
		}
	}
	return true;
}
void XuatCon(float a[][50], int vtd, int vtc, int k, int l)
{
	for (int i = vtd; i <= vtd + k - 1; i++)
	{
		cout << endl;
		for (int j = vtc; j <= vtc + l - 1; j++)
		{
			cout << setw(8) << "a[" << i << "][" << j << "] = " << fixed << setprecision(2) << a[i][j];
		}
	}
}
void XuLy(float a[][50], int m, int n)
{
	int dem = 0;
	int vtd, vtc;
	float b[50][50];
	int k;
	int l;
	cout << "Ma tran A: ";
	Nhap(b, k, l);
	Xuat(b, k, l);
	for (int vtd = 0; vtd <= m - k; vtd++)
	{
		for (int vtc = 0; vtc <= n - l; vtc++)
		{
			if (Kt(a, m, n, b, k, l, vtd, vtc))
			{
				dem++;
				cout << "\nVi tri A trong B: ";
				XuatCon(a, vtd, vtc, k, l);
			}
		}
	}
	if (dem == 0)
		cout << "\nA khong la ma tran con cua B";
	else
		cout << "\nSo lan xuat hien cua A trong B la: " << dem;
}

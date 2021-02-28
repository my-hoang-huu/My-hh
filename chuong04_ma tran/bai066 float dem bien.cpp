#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
bool Kt(float);
void XuLy(float[][50], int, int);

int main()
{
	float a[20][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	cout << "\nCac gia tri duong nam tren bien trong ma tran: \n";
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
			a[i][j] = rand() * 1.0 / RAND_MAX * 200 - 100;
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
			cout << setw(8) << "a[" << i << "][" << j << "] = " << a[i][j];
		}
	}
	cout << endl;
}
bool Kt(float n)
{
	if (n > 0)
		return true;
	return false;
}
void XuLy(float a[][50], int m, int n)
{
	int dem = 0;
	if (n == 1 && m == 1)
	{
		if (Kt(a[0][0]))
		{
			dem++;
			cout << setw(8) << "a[" << 0 << "][" << 0 << "] = " << a[0][0];
		}
	}
	for (int j = 0; j <= n - 2; j++)
	{
		if (Kt(a[0][j]))
		{
			dem++;
			cout << setw(8) << "a[" << 0 << "][" << j << "] = " << a[0][j];
		}
	}
	for (int i = 0; i <= m - 2; i++)
	{
		if (Kt(a[i][n - 1]))
		{
			dem++;
			cout << setw(8) << "a[" << i << "][" << n - 1 << "] = " << a[i][n - 1];
		}
	}
	for (int j = n - 1; j >= 1; j--)
	{
		if (Kt(a[m - 1][j]))
		{
			dem++;
			cout << setw(8) << "a[" << m - 1 << "][" << j << "] = " << a[m - 1][j];
		}
	}
	for (int i = m - 1; i >= 1; i--)
	{
		if (Kt(a[i][0]))
		{
			dem++;
			cout << setw(8) << "a[" << i << "][" << 0 << "] = " << a[i][0];
		}
	}
	cout << "\nSo long cac gia tri duong nam tren bien: " << dem;
}

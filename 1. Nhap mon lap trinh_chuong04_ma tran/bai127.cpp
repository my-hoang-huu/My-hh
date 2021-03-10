#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
void HoanVi(float&, float&);
void DeQuy(float[][50], int, int);
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
			cout << setw(8) << "a[" << i << "][" << j << "] = " << fixed << setprecision(2) << a[i][j];
		}
	}
	cout << endl;
}
void HoanVi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}
void DeQuy(float a[][50], int d, int n)
{
	if (n <= 1)
		return;
	if (d % 2 == 0)
	{
		for (int j = n - 2; j >= 0; j--)
		{
			if (a[d][n - 1] < a[d][j])
				HoanVi(a[d][n - 1], a[d][j]);
		}
		DeQuy(a, d, n - 1);
	}
	else
	{
		for (int j = n - 2; j >= 0; j--)
		{
			if (a[d][n - 1] > a[d][j])
				HoanVi(a[d][n - 1], a[d][j]);
		}
		DeQuy(a, d, n - 1);
	}
}
void XuLy(float a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		DeQuy(a, i, n);
	}
	cout << "\nMa tran sau khi sap tang dong chan va sap giam dong le :";
	Xuat(a, m, n);
}
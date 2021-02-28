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
float Sum(float[][50], int, int, int, int);
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
			a[i][j] = rand() * 1.0 / RAND_MAX * 100 - 50;
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
	for (int i = vtd; i <= vtd + k - 1; i++)
	{
		for (int j = vtc; j <= vtc + l - 1; j++)
		{
			if (a[i][j] < 0)
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
float Sum(float a[][50], int vtd, int vtc, int k, int l)
{
	float s = 0;
	for (int i = vtd; i <= vtd + k - 1; i++)
	{
		for (int j = vtc; j <= vtc + l - 1; j++)
		{
			s += a[i][j];
		}
	}
	return s;
}
void XuLy(float a[][50], int m, int n)
{
	int vtd, vtc;
	float b[50][50];
	int max = a[0][0];
	int flag = 0;
	int lc1, lc2, lc3, lc4;
	for (int k = 1; k <= m; k++)
	{
		for (int l = 1; l <= n; l++)
		{
			for (int vtd = 0; vtd <= m - k; vtd++)
			{
				for (int vtc = 0; vtc <= n - l; vtc++)
				{
					int s = Sum(a, vtd, vtc, k, l);
					if (s >= max)
					{
						flag = 1;
						max = s;
						lc1 = vtd, lc2 = vtc, lc3 = k, lc4 = l;
					}
				}
			}
		}
	}
	if (flag == 0)
		cout << "\nKhong co ma tran con toan duong trong ma tran ban dau";
	else
	{
		cout << "\n\nMa tran con co tong lon nhat ";
		XuatCon(a, lc1, lc2, lc3, lc4);
		cout << "\nCo tong la: " << max;
	}
}

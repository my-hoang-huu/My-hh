#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
void XuLy(float[][50], int, int, int&, int&);
bool Kt(float[][50], int, int, int, int);
void HoanVi(int&, int&);
void XuatCon(float[][50], int, int);
int main()
{
	float a[20][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	int k, l;
	cout << "\nMa tran con kich thuoc 3 x 3 toan am cuoi cung trong ma tran : \n";
	XuLy(a, m, n, k, l);
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
			a[i][j] = rand() * 1.0 / RAND_MAX * - 200 + 20;
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
bool Kt(float a[][50], int m, int n, int vtd, int vtc)
{
	for (int i = vtd; i <= vtd + 2; i++)
	{
		for (int j = vtc; j <= vtc + 2; j++)
		{
			if (a[i][j] > 0)
				return false;
		}
	}
	return true;
}
void XuatCon(float a[][50], int k, int l)
{
	for (int i = k; i <= k + 2; i++)
	{
		cout << endl;
		for (int j = l; j <= l + 2; j++)
		{
			cout << setw(8) << "a[" << i << "][" << j << "] = " << fixed << setprecision(2) << a[i][j];
		}
	}
}
void XuLy(float a[][50], int m, int n, int& k, int& l)
{
	int flag = 0;
	int vtd, vtc;
	for (int vtd = 0; vtd <= m - 3; vtd++)
	{
		for (int vtc = 0; vtc <= n - 3; vtc++)
		{
			if (Kt(a, m, n, vtd, vtc))
			{
				k = vtd;
				l = vtc;
				flag = 1;
			}
		}
	}
	if (flag == 0)
		cout << "\nMa tran Khong co mang con kich thuoc 3 x 3 toan am.\n";
	else
		XuatCon(a, k, l);
}

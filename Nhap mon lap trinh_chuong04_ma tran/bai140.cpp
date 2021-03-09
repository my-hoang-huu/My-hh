#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
void HoanVi(float&, float&);
void TaoMang(float[][50], int, int, int, int, float[], int&);
void TangMang(float[], int);
void TaiTao(float[][50], int, int, int, int, float[], int);
void XuatMang(float[], int);
bool DieuKien(int);
void XuLy(float[][50], int, int, int, int, float[], int);

int main()
{
	float a[20][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	float b[100];
	int k = 0;
	int x = 0;
	int y = 0;
	XuLy(a, m, n, x, y, b, k);
	cout << "\nMa tran sau khi sap xep gia tri tang dan theo hinh xoan oc ";
	cout << "(dung mang phu): \n";
	Xuat(a, m, n);
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
void TangMang(float a[], int n)
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
	if (n > 0)
		return true;
	return false;
}
void TaoMang(float a[][50], int m, int n, int x, int y, float b[], int& k)
{
	//co the do ma tran tu dau den cuoi ra mang mot chieu roi sap tang va tao lai theo xoan oc
	if (m <= x || n <= y)
		return;
	if (x == 0)
		k = 0;
	if ((m - x == 1 && m <= n) || (n - y == 1 && n < m))
		for (int i = x; i < m; i++)
			for (int j = y; j < n; j++)
				b[k++] = a[i][j];
	else
	{
		for (int j = y; j < n - 1; j++)
			b[k++] = a[x][j];
		for (int i = x; i < m - 1; i++)
			b[k++] = a[i][n - 1];
		for (int j = n - 1; j > y; j--)
			b[k++] = a[m - 1][j];
		for (int i = m - 1; i > x; i--)
			b[k++] = a[i][y];
	}
	TaoMang(a, m - 1, n - 1, x + 1, y + 1, b, k);
}
void TaiTao(float a[][50], int m, int n, int x, int y, float b[], int k)
{
	if (m <= x || n <= y)
		return;
	if (x == 0)
		k = 0;
	if ((m - x == 1 && m <= n) || (n - y == 1 && n < m))
		for (int i = x; i < m; i++)
			for (int j = y; j < n; j++)
				a[i][j] = b[k++];
	else
	{
		for (int j = y; j < n - 1; j++)
			a[x][j] = b[k++];
		for (int i = x; i < m - 1; i++)
			a[i][n - 1] = b[k++];
		for (int j = n - 1; j > y; j--)
			a[m - 1][j] = b[k++];
		for (int i = m - 1; i > x; i--)
			a[i][y] = b[k++];
	}
	TaiTao(a, m - 1, n - 1, x + 1, y + 1, b, k);
}
void XuatMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << fixed << setprecision(2) << a[i] << setw(8);
	}
}
void XuLy(float a[][50], int m, int n, int x, int y, float b[], int k)
{
	TaoMang(a, m, n, x, y, b, k);
	TangMang(b, k);
	TaiTao(a, m, n, x, y, b, k);
}
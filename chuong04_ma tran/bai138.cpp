#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
void HoanVi(int&, int&);
void XuLy(int[][50], int, int);
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
	cout << "\nMa tran sau khi sap xep gia tri tren bien tang dan ";
	cout << "(dung mang phu): ";
	XuLy(a, m, n);
	Xuat(a, m, n);
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
void XuLy(int a[][50], int m, int n)
{
	int b[100];
	int k = 0;
	for (int j = 0; j < n - 1; j++)
		b[k++] = a[0][j];
	for (int i = 0; i < m - 1; i++)
		b[k++] = a[i][n - 1];
	for (int j = n - 1; j > 0 ; j--)
		b[k++] = a[m - 1][j];
	for (int i = m - 1; i > 0; i--)
		b[k++] = a[i][0];
	TangMang(b, k);
	k = 0;
	for (int j = 0; j < n - 1; j++)
		a[0][j] = b[k++];
	for (int i = 0; i < m - 1; i++)
		a[i][n - 1] = b[k++];
	for (int j = n - 1; j > 0; j--)
		a[m - 1][j] = b[k++];
	for (int i = m - 1; i > 0; i--)
		a[i][0] = b[k++];
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << fixed << setprecision(2) << a[i] << setw(8);
	}
}

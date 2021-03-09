#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
void HoanVi(float&, float&);
void XuLy(float[][50], int, int);
void MangPhu(float[][50], int, int);
void TangMang(float[], int);
int main()
{
	float a[20][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	int t = m * n;
	XuLy(a, n, t);
	cout << "\nMa tran sau khi sap tang tu tren xuong va tu trai sang :\nCach 1: ";
	Xuat(a, m, n);
	cout << "\nCach 2 (dung mang phu): ";
	MangPhu(a, m, n);
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
	for (int i = 0; i <= n - 2 ; i++)
	{
		if (a[n - 1] < a[i])
			HoanVi(a[n - 1], a[i]);
	}
	TangMang(a, n - 1);
}
void XuLy(float a[][50], int n, int t)
{
	if (t <= 1)
		return;
	for (int k = 0; k <= t - 2; k++)
	{
		if (a[k / n][k % n] > a[(t - 1) / n][(t - 1) % n])
		{
			HoanVi(a[k / n][k % n] , a[(t - 1) / n][(t - 1) % n]);
		}
	}
	XuLy(a, n, t - 1);
}
void MangPhu(float a[][50], int m, int n)
{
	float b[1000];
	int k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[k++] = a[i][j];
		}
	}
	TangMang(b, k);
	k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = b[k++];
		}
	}
}

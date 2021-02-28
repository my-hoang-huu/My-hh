#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
void DichMang(float[], int);
void XuLy(float[][50], int, int);

int main()
{
	float a[20][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	cout << "\nMa tran sau khi dich trai xoay vong cac gia tri nam tren bien: \n";
	XuLy(a, m, n);
	Xuat(a, m, n);
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
			cout << setw(8) << "a[" << i << "][" << j << "] = " << fixed << setprecision(2) << a[i][j];
		}
	}
	cout << endl;
}
void DichMang(float a[], int n)
{
	float temp = a[0];
	for (int i = 0; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	a[n - 1] = temp;
}
void XuLy(float a[][50], int m, int n)
{
	float b[200];
	int k = 0;
	for (int j = 0; j < n - 1; j++)
	{
		b[k++] = a[0][j];
	}
	for (int i = 0; i < m - 1; i++)
	{
		b[k++] = a[i][n - 1];
	}
	for (int j = n - 1; j > 0; j--)
	{
		b[k++] = a[m - 1][j];
	}
	for (int i = m - 1; i > 0; i--)
	{
		b[k++] = a[i][0];
	}
	DichMang(b, k);
	k = 0;
	for (int j = 0; j < n - 1; j++)
	{
		a[0][j] = b[k++];
	}
	for (int i = 0; i < m - 1; i++)
	{
		a[i][n - 1] = b[k++];
	}
	for (int j = n - 1; j > 0; j--)
	{
		a[m - 1][j] = b[k++];
	}
	for (int i = m - 1; i > 0; i--)
	{
		a[i][0] = b[k++];
	}
}

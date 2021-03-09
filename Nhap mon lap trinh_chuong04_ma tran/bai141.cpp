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
	TaoMang(a, m, n, x, y, b, k);
	cout << "\nMang co duoc: ";
	XuatMang(b, k);
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
void TaiTao(float a[][50], int m, int n, int x, int y, float b[], int k)
{

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
void TaoMang(float a[][50], int m, int n, int x, int y, float b[], int& k)
{
	k = 0;
	int dem = 0;
	for (int l = 0; l <= (m + n - 2) / 2; l++)
	{
		if (dem == 0 || dem == 1 || dem == 4)
		{
			for (int i = 0; i <= l; i++)
			{
				b[k++] = a[i][l - i];
				dem++;
			}
		}
		else
		{
			for (int j = 0; j <= l; j++)
			{
				b[k++] = a[l - j][j];
				dem++;
			}
		}
	}
}
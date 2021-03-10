#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
int Kt(float[][50], int, int, float);
void XuLy(float[][50], int, int);
int DemMang(float[][50], int, int);
bool KtLap(float [][50], int, int);
void DemMaTran(float [][50], int, int);
int main()
{
	float a[20][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	/*cout << "\nCach 2: ";
	DemMaTran(a, m, n);*/
	cout << "\nCach 1: ";
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
			a[i][j] = rand() % 20 - 10;
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
int Kt(float a[][50], int m, int n, float k)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == k)
			{
				dem++;
			}
		}
	}
	return dem;
}
void XuLy(float a[][50], int m, int n)
{
	float dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			dem += 1.0 / Kt(a, m, n, a[i][j]);
		}
	}
	cout << "\nSo luong gia tri phan biet trong ma tran: " << fixed << setprecision(0) << dem;
}
//int DemMang(float a[][50], int n, int i)
//{
//	int dem = 0;
//	for (; i < n; i++)
//		if (KtLap(a, n, i))
//			dem++;
//	return dem;
//}
//bool KtLap(float a[][50], int m, int j)
//{
//	for (int i = 0; i < m; i++)
//	{
//		if (i < j && a[i] == a[j])
//			return false;
//	}
//	return true;
//}
//void DemMaTran(float a[][50], int m, int n)
//{
//	int dem = 0;
//	for (int i = 0; i < m; i++)
//	{
//			dem += DemMang(a, n, i);
//	}
//	cout << "\nSo luong gia tri phan biet trong ma tran: " << fixed << setprecision(0) << dem;
//}
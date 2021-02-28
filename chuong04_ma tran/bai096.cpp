#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
float Max(float[][50], int, int);
float LinhCanh(float[][50], int, int);
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
bool Kt(float n)
{
	return true;
}
float Max(float a[][50], int m, int n)
{
	float max = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j]>max)
			{
				max = a[i][j];
			}
		}
	}
	return max;
}
float LinhCanh(float a[][50], int m, int n)
{
	float max = Max(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < max)
				return a[i][j];
		}
	}
	return max;
}
void XuLy(float a[][50], int m, int n)
{
	float max = Max(a, m, n);
	//cout << "\nGia tri lon nhat trong ma tran: " << fixed << setprecision(2) << max;
	float second = LinhCanh(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > second && a[i][j] < max)
			{
				second = a[i][j];
			}
		}
	}
	cout << "\nGia tri lon nhi trong ma tran: " << fixed << setprecision(2) << second;
}
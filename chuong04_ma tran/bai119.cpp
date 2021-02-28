#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
float Dong(float[][50], int, int);
float Cot(float[][50], int, int);
void XuLy(float[][50], int, int, float[][50], int&, int&);
int main()
{
	float a[20][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	float b[20][50];
	int k;
	int l;
	cout << "Ma tran sau xu ly: \n";
	XuLy(a, m, n, b, k, l);
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
float Dong(float a[][50], int d, int n)
{
	float lc = a[d][0];
	for (int j = 0; j < n; j++)
	{
		if (a[d][j] > lc)
			lc = a[d][j];
	}
	return lc;
}
float Cot(float a[][50], int m, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m; i++)
	{
		if (a[i][c] > lc)
			lc = a[i][c];
	}
	return lc;
}
void XuLy(float a[][50], int m, int n, float b[][50], int& k, int& l)
{
	k = m;
	l = n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			float lc = Dong(a, i, n);
			float temp = Cot(a, m, j);
			if (temp > lc)
				lc = temp;
			b[i][j] = lc;
		}
	}
	Xuat(b, k, l);
}
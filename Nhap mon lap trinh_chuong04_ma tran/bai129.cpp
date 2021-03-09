#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
void HoanVi(float&, float&);
void HoanViDong(float [][50], int, int, int, int);
float Sum(float[][50], int, int);
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
	cout << "\nMa tran sau khi sap tang tong cac dong tu tren xuong :";
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
void HoanViDong(float a[][50], int m, int n, int d1, int d2)
{
	for (int j = 0; j < n; j++)
		HoanVi(a[d1][j], a[d2][j]);
}

float Sum(float a[][50], int d, int n)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s += a[d][j];
	return s;
}
void XuLy(float a[][50], int m, int n)
{
	if (m <= 1)
		return;
	float max = Sum(a, m - 1, n);
	cout << "\nTong dong max = " << Sum(a, 5, n);
	float lc;
	for (int i = 0; i <= m - 2; i++)
	{
		lc = Sum(a, i, n);
		cout << "\nTong dong " << i << " = " << lc;
		if (lc > max)
		{
			HoanViDong(a, m, n, m - 1, i);
			max = lc;
		}
	
	}
	cout << "\nTong dong " << m - 1 << " = " << max;
	cout << "\nTong dong max = " << Sum(a, 5, n);
	XuLy(a, m - 1, n);
}
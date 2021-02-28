#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
float Kt(float[][50], int, int);
float Max(float[][50], int, int);
void LietKe(float[][50], int, int);

int main()
{
	float a[20][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	LietKe(a, m, n);
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
float Kt(float a[][50], int k, int n)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s += a[k][j];
	return s;
}
float Max(float a[][50], int m, int n)
{
	float lc = Kt(a, 0, n);
	int dong = 0;
	for (int i = 0; i < m; i++)
	{
		float s = Kt(a, i, n);
		cout << "\nDong " << i << " co tong :" << s;
		if (s > lc)
		{
			lc = s;
			dong = i;
		}
	}
	//cout << "\n\nTong dong lon nhat trong ma tran la " << lc << " tuong ung voi dong " << dong << endl;
	return lc;
}
void LietKe(float a[][50], int m, int n)
{
	float lc = Max(a, m, n);
	cout << "\n\nTong dong lon nhat trong ma tran la: " << lc;
	cout << "\nNhung dong co tong lon nhat trong ma tran la: ";
	for (int i = 0; i < m; i++)
	{
		float s = Kt(a, i, n);
		if (s == lc)
			cout << i << setw(5);
	}
}
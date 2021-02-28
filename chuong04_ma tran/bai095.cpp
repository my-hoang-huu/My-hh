#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
int Dem(int);
int DemCot(int[][50], int, int);
int Max(int[][50], int, int);
void LietKe(int[][50], int, int);

int main()
{
	int a[20][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	LietKe(a, m, n);
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
			a[i][j] = rand() % 1001 - 500;
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
int Dem(int n)
{
	int dem = 0;
	int t = n;
	while (t != 0)
	{
		t /= 10;
		dem++;
	}
	return dem;
}
int DemCot(int a[][50], int m, int k)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		dem += Dem(a[i][k]);
	return dem;
}
int Max(int a[][50], int m, int n)
{
	int lc = DemCot(a, m, 0);
	for (int j = 0; j < n; j++)
	{
		int s = DemCot(a, m, j);
		cout << "\nCot " << j << " co :" << s << " chu so";
		if (s > lc)
			lc = s;
	}
	//cout << "\n\nTong dong lon nhat trong ma tran la " << lc << " tuong ung voi dong " << dong << endl;
	return lc;
}
void LietKe(int a[][50], int m, int n)
{
	int lc = Max(a, m, n);
	cout << "\n\nSo chu so nhieu nhat tai 1 cot trong ma tran: " << lc;
	cout << "\nNhung cot co nhieu chu so nhat trong ma tran : ";
	for (int j = 0; j < n; j++)
	{
		int s = DemCot(a, m, j);
		if (s == lc)
			cout << j << setw(5);
	}
}
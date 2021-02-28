#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
int Kt(int);
void XuLy(int[][50], int, int);

int main()
{
	int a[100][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	XuLy(a, m, n);
	cout << endl;
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
			a[i][j] = rand() % 2001 - 1000;
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
			cout << setw(8) << "a[" << i << "][" << j << "] = " << a[i][j];
		}
	}
	cout << endl;
}
int Kt(int n)
{
	int dem = 0;
	if (n == 0)
		return 1;
	for (int t = n; t != 0; dem++)
		t /= 10;
	return dem;
}
void XuLy(int a[][50], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			dem += Kt(a[i][j]);
	cout << "\nSo luong chu so trong ma tran: " << dem;
}

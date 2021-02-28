#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
bool Kt(int);
void XuLy(int[][50], int, int);

int main()
{
	int a[20][50];
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
			a[i][j] = rand() % 201 - 100;
				/*cout << setw(7) << "a[" << i << "]" << "[" << j << "] = ";
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
bool Kt(int n)
{
	for (int t = 1; t <= n; t = t * 3)
		if (t == n)
			return true;
	return false;
}
void XuLy(int a[][50], int m, int n)
{
	cout << "\nCac so dang 3^m trong ma tran: ";
	int s = 0;
	int flag = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (Kt(a[i][j]))
			{
				flag = 1;
				s = s + a[i][j];
				cout << setw(8) << "a[" << i << "][" << j << "] = " << a[i][j];
			}
		}
	}
	if (flag == 0)
	{
		cout << "\nKhong co so dang 3^m trong ma tran ";
	}
	else
	cout << "\nTong cac so dang 3^m trong ma tran: " << s;
}

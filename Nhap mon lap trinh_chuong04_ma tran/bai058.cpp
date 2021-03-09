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
	int a[100][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	cout << "\nCac so co dang 2^m trong ma tran: ";
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
	for (int t = 1; t <= n; t *= 2)
		if (t == n)
			return true;
	return false;
}
void XuLy(int a[][50], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			if (Kt(a[i][j]))
			{
				dem++;
				cout << setw(8) << "a[" << i << "][" << j << "] = " << a[i][j];
			}
		}
	}
	if (dem == 0)
		cout << "\nMa tran khong co so co dang 2^m";
	else
		cout << "\nSo luong cac so co dang 2^m trong ma tran: " << dem;
}

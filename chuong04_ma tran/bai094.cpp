#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
bool HoanThien(int n);
int Kt(int[][50], int, int);
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
			a[i][j] = rand() % 201 - 100;
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
bool HoanThien(int n)
{
	int s = 0;
	if (n == 0)
		return false;
	for (int i = 1; i <= n / 2; i++)
		if (n % i == 0)
			s += i;
	if (s == n)
		return true;
	return false;
}
int Kt(int a[][50], int k, int n)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (HoanThien(a[k][j]))
		{
			dem++;
			cout << setw(8) << "\na[" << k << "][" << j << "] = " << a[k][j];
		}
	return dem;
}
int Max(int a[][50], int m, int n)
{
	int lc = Kt(a, 0, n);//linh canh =  so luong so hoan thien tren dong thu 0.
	int dong = 0;
	for (int i = 0; i < m; i++)
	{
		int s = Kt(a, i, n);
		cout << "\nDong " << i << " co :" << s << " so hoan thien";
		if (s > lc)
		{
			lc = s;
			dong = i;
		}
	}
	//cout << "\n\nTong dong lon nhat trong ma tran la " << lc << " tuong ung voi dong " << dong << endl;
	return lc;//linh canh la dong co nhieu so hoan thien nhat
}
void LietKe(int a[][50], int m, int n)
{
	int lc = Max(a, m, n);
	if (lc == 0)
	{
		cout << "\nMa tran khong co so hoan thien.\n";
		return;
	}
	int s;
	cout << "\n\nSo luong so hoan thien lon nhat trong mot dong la: " << lc;
	cout << "\nNhung dong co nhieu so hoan thien nhat trong ma tran la: ";
	for (int i = 0; i < m; i++)
	{
		s = Kt(a, i, n);
		if (s == lc)
			cout << i << setw(5);
	}
}
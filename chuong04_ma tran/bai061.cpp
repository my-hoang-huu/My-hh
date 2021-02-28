#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int[][200], int&, int&);
void Xuat(int[][200], int, int);
bool Kt(int);
void XuLy(int[][200], int, int);
int main()
{
	int a[20][200];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	XuLy(a, m, n);
	return 1;
}
void Nhap(int a[][200], int& m, int& n)
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
			a[i][j] = rand() % 101 - 10;
			/*	cout << setw(7) << "a[" << i << "]" << "[" << j << "] = ";
				cin >> a[i][j];*/
		}
	}
	cout << endl;
}
void Xuat(int a[][200], int m, int n)
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
bool Kt(int n)
{
	int s = 0;
	for (int i = 1; i <= n / 2; i++)
		if (n % i == 0)
			s += i;
	if (s == n && n != 0)
		return true;
	return false;

}
void XuLy(int a[][200], int m, int n)
{
	int d;
	cout << "\nNhap dong so: ";
	cin >> d;
	int dem = 0;
	cout << "\nCac gia tri hoan thien tai dong " << d << " : ";
	cout << "\n";
	for (int j = 0; j < n; j++)
	{
		if (Kt(a[d][j]))
		{
			dem++;
			cout << setw(8) << "a[" << d << "][" << j << "] = " << a[d][j];
		}
	}
	cout << "\nSo luong gia tri hoan thien tai dong " << d << " : " << dem << endl;
}
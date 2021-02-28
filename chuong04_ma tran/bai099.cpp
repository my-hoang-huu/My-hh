#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
int DemChuSo(int, int);
void DemMaTran(int[][50], int, int);

int main()
{
	int a[20][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	DemMaTran(a, m, n);
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
int DemChuSo(int n, int x)
{
	int dem = 0;
	int t = abs(n);
	for (int dv; t != 0 ;t /= 10)
	{
		dv = t % 10;
		if (dv == x)
			dem++;
	}
	return dem;
}
void DemMaTran(int a[][50], int m, int n)
{
	int max = 0;
	int lc = -1;
	int k;
	for (k = 0; k <= 9; k++)
	{
		int dem = 0;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				dem += DemChuSo(a[i][j], k);
			}
		}
		if (dem > max)
		{
			max = dem;
			lc = k;
		}
	}
	cout << "\nMot chu so xuat hien nhieu nhat ma tran la: " << lc << " voi " << max << " lan xuat hien.";
}

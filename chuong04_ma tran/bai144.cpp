#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
bool Kt(int[][50], int, int);
bool NguyenTo(int);
bool ChinhPhuong(int);
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
			cout << setw(8) << "a[" << i << "][" << j << "] = " << fixed << setprecision(2) << a[i][j];
		}
	}
	cout << endl;
}
bool NguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
bool ChinhPhuong(int n)
{
	for (int i = 0; i * i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}
bool Kt(int a[][50], int d, int n)
{
	int flag1 = 0;
	int flag2 = 0;
	int lc1;
	int lc2;
	for (int j = 0; j < n; j++)
	{
		if (NguyenTo(a[d][j]))
		{
			lc1 = a[d][j];
			flag1 = 1;
		}
		if (ChinhPhuong(a[d][j]))
		{
			lc2 = a[d][j];
			flag2 = 1;
		}
	}
	if (flag1 == 1 && flag2 == 1)
	{
		cout << "\nNguyen to: " << lc1;
		cout << "\nChinh phuong: " << lc2;
		return true;
	}
	return false;
}
void XuLy(int a[][50], int m, int n)
{
	int d;
	int flag = 0;
	cout << "\nCac dong thoa dieu kien: ";
	for (d = m - 1; d >= 0; d--)
	{
		if (Kt(a, d, n))
		{
			flag = 1;
			m--;
			for (int i = d; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					a[i][j] = a[i + 1][j];
				}
			}
		}
	}
	if (flag == 0)
		cout << "\nMa tran khong co dong vua co so nguyen to vua co so chinh phuong.\n";
	else
	{
		cout << "\nMa tran sau khi xoa dong co chua so nguyen to va so chinh phuong:";
		Xuat(a, m, n);
	}
}
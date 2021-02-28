#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool NguyenTo(int);
void HoanVi(int&, int&);
void XulyChan(int[], int);
void XulyLe(int[], int);
int main()
{
	int a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	//cout << "\nMang a sau khi chuyen cac so nguyen to ve cuoi mang: \n";
	XulyLe(a, n);
	XulyChan(a, n);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		//cin >> a[i];
		a[i] = rand() % 21 - 10;
	}
}
void Xuat(int a[], int n)
{
	cout << "\nMang: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
void HoanVi(int& a, int& b)
{
	int lc;
	lc = a;
	a = b;
	b = lc;
}
bool NguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2)
	{
		return true;
	}
	return false;
}
void XulyLe(int a[], int n)
{
	int lc = n - 1;
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] % 2 != 0)
		{
			HoanVi(a[i], a[lc]);
			lc--;
		}
	}
	Xuat(a, n);
}
void XulyChan(int a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] != 0)
		{
			HoanVi(a[i], a[lc]);
			lc++;
		}
	}
	cout << "\nMang sau khi da sap xep: \n";
	Xuat(a, n);
}
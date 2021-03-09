#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool DieuKien(int);
int Tong(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	int s = Tong(a, n);
	cout << "\nTong cac so Dao nguoc trong mang ban dau: " << s << endl;
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 201 - 100;
}
void Xuat(int a[], int n)
{
	cout << "\nMang ban dau: \n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
bool DieuKien(int n)
{
	int dn = 0;
	int t = n;
	for (int dv = t % 10; t != 0; t = t / 10)
	{
		dn = dn * 10 + dv;
	}
	if (n == dn)
	{
		return true;
	}
	return false;
}
int Tong(int a[], int n)
{
	int s = 0;
	cout << "\nCac so dao nguoc trong mang: \n";
	for (int i = 0; i < n; i++)
	{
		if (DieuKien(a[i]))
		{
			cout << a[i] << setw(10);
			s = s + a[i];
		}
	}
	return s;
}

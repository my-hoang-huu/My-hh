#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool DieuKien(int);
void Kt(int[], int, int[], int&);

int main()
{
	int a[100];
	int n;
	cout << "Nhap mang a: ";
	Nhap(a, n);
	cout << "\nMang ban dau: \n";
	Xuat(a, n);
	int b[100];
	int m;
	//cout << "\nNhap mang b: ";
	//Nhap(b, m);
	//Xuat(b, m);
	cout << "\nTao mang b chi chua gia tri Nguyen to tu mang a: ";
	Kt(a, n, b, m);
	Xuat(b, m);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		//cin >> a[i];
		a[i] = rand() % 201 - 100;
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
bool DieuKien(int n)
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
void Kt(int a[], int n, int b[], int& m)
{
	cout << "\nMang b: ";
	m = 0;
	for (int i = 0; i < n; i++)
	{
		if (DieuKien(a[i]))
		{
			b[m] = a[i];
			m++;
		}
	}
}
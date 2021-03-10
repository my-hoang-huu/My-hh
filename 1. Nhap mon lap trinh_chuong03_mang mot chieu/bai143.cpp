#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void Saptang(int[], int);
bool Hoanthien(int);
bool Xuly(int[], int, int[], int);

int main()
{
	int a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	int b[100];
	int k;
	cout << "Nhap mang b:";
	Nhap(b, k);
	Xuat(b, k);
	cout << "\n\nMang a co phai la hoan vi mang b: " << Xuly(a, n, b, k) << endl;
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
		a[i] = rand() % 201 - 100;
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
void Saptang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
	Xuat(a, n);
}
bool Hoanthien(int n)
{
	int s = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			s = s + i;
		}
	}
	if (s == n)
	{
		return true;
	}
	return false;
}
bool Xuly(int a[], int n, int b[], int k)
{
	if (n != k)
	{
		return false;
	}
	else
	{
		cout << "\nSau khi sap tang: ";
		cout << "\nMang a: ";
		Saptang(a, n);
		cout << "\nMang b: ";
		Saptang(b, k);
		for (int i = 0; i < n; i++)
		{
			if (a[i] != b[i])
			{
				return false;
			}
		}
	}
	return true;
}
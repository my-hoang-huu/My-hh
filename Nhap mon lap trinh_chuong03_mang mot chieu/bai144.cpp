#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void Saptangle(int[], int);
void Saptangchan(int[], int);
bool Hoanthien(int);
void Xuly(int[], int);

int main()
{
	int a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	cout << "\n\nMang a sau khi sap tang chan va le: " << endl;
	Xuly(a, n);
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
void Saptangle(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] > a[j])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
	Xuat(a, n);
}
void Saptangchan(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j])
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
void Xuly(int a[], int n)
{
	cout << "Sau khi sap tang chan: ";
	Saptangchan(a, n);
	cout << "Sau khi sap tang chan va le: ";
	Saptangle(a, n);
}
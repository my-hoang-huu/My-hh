#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void HoanVi(float&, float&);
void AmGiam(float[], int);
void DuongTang(float[], int);
void Xuly(float[], int);

int main()
{
	float a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	//cout << "\n\nMang a sau khi sap xep gia tri duong tang va am giam dan: \n";
	Xuly(a, n);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() * 1.0 / RAND_MAX * 200 - 100;
	}
}
void Xuat(float a[], int n)
{
	cout << "\nMang: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
void HoanVi(float& a, float& b)
{
	float lc;
	lc = a;
	a = b;
	b = lc;
}
void DuongTang(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > 0 && a[j] > 0 && a[i] > a[j])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
	Xuat(a, n);
}
void AmGiam(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < 0 && a[j] < 0 && a[i] < a[j])
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
void Xuly(float a[], int n)
{
	cout << "\nSau khi sap giam Am: ";
	AmGiam(a, n);
	cout << "\nSau khi sap tang duong va giam am: ";
	DuongTang(a, n);
}
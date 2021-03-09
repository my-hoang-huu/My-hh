#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void Wrap(int&, int&);
int SapTang(int[], int, int& dem);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	int dem = 0;
	cout << "\nSo luong cac phep hoan vi = " << SapTang(a, n, dem);
	cout << "\nMang sau sap tang: ";
	Xuat(a, n);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		a[i] = rand() * 1.0 / RAND_MAX * 200 - 100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = " << a[i] << setw(10);
	}
}
int SapTang(int a[], int n, int& dem)
{
	if (n <= 1)
	{
		return 0;
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[i] > a[j])
			{
				Wrap(a[i], a[n - 1]);
				dem++;
			}
		}

	}
	//cout << "\nMang sau sap tang: ";
	//Xuat(a, n);
	//cout << "dem = " << dem << "  ";
	//SapTang(a, n - 1, dem);
	return dem;
}
void Wrap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

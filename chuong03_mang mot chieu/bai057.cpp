#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void Dem(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	Dem(a, n);
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
void Dem(int a[], int n)
{
	int demc = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			demc++;
		}
	}
	int deml = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			deml++;
		}
	}
	if (demc == deml)
	{
		cout << "\nSo chan bang so le trong mang ban dau.\n";
	}
	else
	{
		if (demc > deml)
		{
			cout << "\nSo chan nhieu hon so le trong mang ban dau.\n";
		}
		else
		{
			cout << "\nSo chan it hon so le trong mang ban dau.\n";
		}
	}
}
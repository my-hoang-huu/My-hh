#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void lietKe(int[], int);


int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	lietKe(a, n);
	cout << endl;
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 201 - 100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
void lietKe(int a[], int n)
{
	cout << "\nCac gia tri chan trong mang: \n";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << setw(10);
		}
	}
	cout << "\nCac gia tri le trong mang: \n";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			cout << a[i] << setw(10);
		}
	}
}
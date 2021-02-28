#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
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
	cout << "\nTao mang b chi chua gia tri Am tu mang a: ";
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
void Kt(int a[], int n, int b[], int& m)
{
	cout << "\nMang b: ";
	m = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			b[m] = a[i];
			m++;
		}
	}
}
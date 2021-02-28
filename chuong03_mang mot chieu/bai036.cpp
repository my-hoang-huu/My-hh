#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool DieuKien(int);
float Tong(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	float s = Tong(a, n);
	cout << "\nTong cac so Chinh phuong trong mang ban dau: " << endl;
	cout << s << endl;
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
	for (int i = 1; i * i <= n; i++)
	{
		if (i * i == n)
		{
			return true;
		}
	}
	return false;
}
float Tong(int a[], int n)
{
	cout << "\nCac so chinh phuong trong mang ban dau: \n";
	int s = 0;
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

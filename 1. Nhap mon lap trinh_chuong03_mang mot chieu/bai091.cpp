#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool Kt(int);
int Xuly(int[], int);


int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo Doi xung dau tien trong mang: " << Xuly(a, n) << endl;
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
bool Kt(int n)
{
	int t = n;
	int dv;
	int dn = 0;
	for (dv = t % 10; t != 0; t = t / 10)
	{
		dn = dn * 10 + dv;
	}
	if (dn == n)
	{
		return true;
	}
	return false;
}
int Xuly(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (Kt(a[i]))
		{
			return a[i];
		}
	}
	return 10;
}
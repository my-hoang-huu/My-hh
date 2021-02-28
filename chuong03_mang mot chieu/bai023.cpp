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
	cout << "\nCac gia tri Chan co it nhat mot lan can chan: \n";
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
void lietKe(int a[], int n)
{
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
	{
		cout << a[0] << setw(10);
	}
	for (int i = 1; i <= n - 2; i++)
	{
		if (a[i] % 2 == 0 && (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0))
		{
			cout << a[i] << setw(10);
		}
	}
	if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
	{
		cout << a[n - 1] << setw(10);
	}
}

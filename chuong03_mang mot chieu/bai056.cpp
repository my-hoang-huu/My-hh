#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool DieuKien(int);
int Dem(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo luong cac chu so Hoan thien trong mang ban dau: " << Dem(a, n) << endl;
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
	int s = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			s = s + i;
		}
	}
	if (n == s && n != 0)
		return true;
	return false;
}
int Dem(int a[], int n)
{
	cout << "\nCac chu so thoa dieu kien: ";
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (DieuKien(a[i]))
		{
			cout << a[i] << setw(5);
			dem++;
		}
	}
	return dem;
}
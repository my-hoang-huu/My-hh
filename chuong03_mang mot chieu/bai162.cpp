#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void Xuly(int[], int);

int main()
{
	int a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	cout << "\n\nMang a sau khi xoa gia tri chan: \n";
	Xuly(a, n);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		//cin >> a[i];
		//a[i] = rand() * 1.0 / RAND_MAX * 200 - 100;
		a[i] = rand() % 10 - 5;
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
void Xuly(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] % 2 == 0)
		{
			n--;
			for (int j = i; j < n; j++)
			{
				a[j] = a[j + 1];
			}
		}
	}
	Xuat(a, n);
}
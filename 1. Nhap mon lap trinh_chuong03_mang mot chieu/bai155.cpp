#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void XuLy(int[], int);
int main()
{
	int a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nMang a sau khi dao nguoc cac gia tri chan: \n";
	XuLy(a, n);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		//cin >> a[i];
		a[i] = rand() % 21 - 10;
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
void XuLy(int a[], int n)
{
	int d;
	int c;
	int j = n - 1;
	int i = 0;
	for (; i < j; i++)
	{
		if (a[i] % 2 == 0)
		{
			for (; j > i; j--)
			{
				if (a[j] % 2 == 0)
				{
					HoanVi(a[i], a[j]);
					j--;
					break;
				}
			}
		}
	}
	Xuat(a, n);
}

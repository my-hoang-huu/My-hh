#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void XuLy(int[], int);
void Dao(int[], int);
void DaoChan(int[], int);
void DaoLe(int[], int);


int main()
{
	int a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nMang a sau khi dao nguoc cac gia tri chan va le: \n";
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
void Dao(int a[], int n)
{
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		HoanVi(a[d], a[c]);
		d++;
		c--;
	}
}

void DaoChan(int a[], int n)
{
	int b[100];
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			b[k++] = a[i];
			cout << "\nb[k++] = " << a[i];
		}
	}
	Dao(b, k);
	k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			a[i] = b[k++];
		}
	}
}
void DaoLe(int a[], int n)
{
	int b[100];
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			b[k++] = a[i];
		}
	}
	Dao(b, k);
	k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			a[i] = b[k++];
		}
	}
}
void XuLy(int a[], int n)
{
	DaoChan(a, n);
	DaoLe(a, n);
	Xuat(a, n);
}
#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void Kt(int&, int&);
void XuLy(int[], int, int[]);

int main()
{
	int a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	int b[100];
	//int l;
	//cout << "\nNhap do dai mang con: ";
	//cin >> l;
	//cout << "\nVa vi tri bat dau: ";
	//cin >> vt;
	cout << "\nCac mang con: ";
	XuLy(a, n, b);
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
		//cin >> a[i];
		a[i] = rand() % 201 - 100;
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
void Kt(int& a, int& b)
{
	int lc;
	lc = a;
	a = b;
	b = lc;
}
void XuLy(int a[], int n, int b[])
{
	for (int l = 1; l <= n; l++)
	{
		cout << "\n\nDo dai l = " << l << " :";
		for (int vt = 0; vt <= n - l; vt++)
		{
			cout << "\nBat dau tai vi tri vt = " << vt << ": \n";
			int k = 0;
			for (int i = vt; i < l + vt; i++)
			{
				cout << "b[" << k << "] = " << a[i] << setw(5);
				b[k++] = a[i];
			}
		}
	}
	//Xuat(b, l);
}
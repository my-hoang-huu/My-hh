#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int Kt(int[], int, int[], int);

int main()
{
	int a[100];
	int n;
	cout << "Nhap mang a: ";
	Nhap(a, n);
	cout << "\nMang ban dau: \n";
	Xuat(a, n);
	int b[1000];
	int m;
	cout << "\nNhap mang b: ";
	Nhap(b, m);
	Xuat(b, m);
	cout << "\nKiem tra tat ca phan tu mang a co thuoc mang b khong: " << Kt(a, n, b, m);
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
int Kt(int a[], int n, int b[], int m)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		int flag2 = 0;
		for (int j = 0; j < m; j++)
		{
			if (a[i] == b[j])
			{
				flag2 = 1;
			}
		}
		if (flag2 == 0)
		{
			flag = 0;
		}
	}
	return flag;
}
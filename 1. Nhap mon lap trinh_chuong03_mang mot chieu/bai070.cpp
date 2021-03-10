#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int DieuKien(int[], int, int);
int Dem(int[], int, int[], int);

int main()
{
	int a[100], b[100];
	int n, m;
	cout << "Mang a: ";
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nMang b: ";
	Nhap(b, m);
	Xuat(b, m);
	cout << "\nSo luong gia tri chi xuat hien mot trong hai mang: " << Dem(a, n, b, m) << endl;
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 21 - 10;
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
int DieuKien(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			dem++;
		}
	}
	return dem;
}
int Dem(int a[], int n, int b[], int m)
{
	cout << "Cac gia tri thoa dieu kien: \n";
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
		{
			if (i != j && a[i] == a[j])
			{
				flag = 0;
			}
		}
		int dem1 = DieuKien(b, m, a[i]);
		if (dem1 == 0 && flag == 1)
		{
			cout << a[i] << setw(10);
			dem++;
		}
	}
	for (int i = 0; i < m; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
		{
			if (i != j && b[i] == b[j])
			{
				flag = 0;
			}
		}
		int dem1 = DieuKien(a, n, b[i]);
		if (dem1 == 0 && flag == 1)
		{
			cout << b[i] << setw(10);
			dem++;
		}
	}
	return dem;
}

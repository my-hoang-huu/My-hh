#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool DieuKien(int);
void Kt(int[], int, int[], int&);

int main()
{
	int a[100];
	int n;
	cout << "Nhap mang a: ";
	Nhap(a, n);
	cout << "\nMang ban dau: \n";
	Xuat(a, n);
	int b[100];
	int k;
	//cout << "\nNhap mang b: ";
	//Nhap(b, k);
	//Xuat(b, k);
	cout << "\nTao mang b voi b[i] = a[i-1] + a[i+1]: ";
	Kt(a, n, b, k);
	Xuat(b, n);
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
bool DieuKien(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2)
	{
		return true;
	}
	return false;
}
void Kt(int a[], int n, int b[], int& k)
{

	cout << "\nMang b: \n";
	k = 0;
	b[k++] = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] % 2 == 0 && b[k - 1] % 2 == 0)
		{
			b[k++] = 1;
		}
		else
		{
			if (a[i] % 2 != 0 && b[k - 1] % 2 != 0)
			{
				b[k++] = 0;
			}
			else
			{
				b[k++] = a[i];
			}
		}
	}
}
#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xvoid HoanVi(int&, int&);
uat(int[], int);
bool Nguyento(int);
void Xuly(int[], int);

int main()
{
	int a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	cout << "\n\nMang a sau khi sap xep tang cac so nguyen to: ";
	Xuly(a, n);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
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
void HoanVi(int& a, int& b)
{
	int lc;
	lc = a;
	a = b;
	b = lc;
}
bool Nguyento(int n)
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
void Xuly(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Nguyento(a[i]) && Nguyento(a[j]) && a[i] > a[j])
			{
				HoanVi(a[i], a[j]);
				cout << "\nNguyen to :" << a[i] << setw(10) << a[j] << endl;
			}
		}
	}
	Xuat(a, n);
}
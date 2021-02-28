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
	cout << "\nMang a sau khi chuyen gia tri chia het cho 3 ve dau mang: \n";
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
void Xuly(int a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 3 == 0)
		{
			HoanVi(a[i], a[lc]);
			lc++;
		}
	}
	Xuat(a, n);
}
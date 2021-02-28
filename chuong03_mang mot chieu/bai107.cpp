#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int Kt(int[], int, int);
int Xuly(int[], int);


int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo xuat hien nhieu nhat trong mang: " << Xuly(a, n) << endl;
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
int Kt(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}
int Xuly(int a[], int n)
{
	int ts = 0;
	int lc = 0;
	for (int i = 0; i < n; i++)
	{
		if (Kt(a, n, a[i]) > ts)
		{
			ts = Kt(a, n, a[i]);
			lc = a[i];
			cout << "\nTan suat = " << ts << " : " << a[i];
		}
	}
	return lc;
}
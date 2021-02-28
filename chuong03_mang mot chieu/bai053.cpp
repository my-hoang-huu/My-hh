#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float Dem(float[], int, float);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "\nSo lan xuat hien gia tri " << x <<" trong mang ban dau: \n" << Dem(a, n, x) << endl;
	cout << endl;
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() * 1.0 / RAND_MAX * 200.0 - 100.0;
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
float Dem(float a[], int n, float x)
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

#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void lietKe(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nCac vi tri co gia tri Nho nhat trong mang ban dau: ";
	lietKe(a, n);
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
void lietKe(float a[], int n)
{
	float ln = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < ln)
		{
			ln = a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == ln)
		{
			cout << i << setw(4);
		}
	}
	cout << "\nGia tri Nho nhat trong mang: " << ln;
}

#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float KhoangCach(float, float);
void Xa(float[], int, float);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	int x;
	cout << "\nNhap x: ";
	cin >> x;
	Xa(a, n, x);
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
float KhoangCach(float a, float x)
{
	float kc = abs(a - x);
	return kc;
}
void Xa(float a[], int n, float x)
{
	float lc = KhoangCach(a[0], x);
	for (int i = 0; i < n; i++)
	{
		if (KhoangCach(a[i], x) > lc)
		{
			lc = KhoangCach(a[i], x);
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (lc == KhoangCach(a[i], x))
		{
			cout << "Gia tri co Khoang cach xa " << x << " nhat: " << a[i] << setw(10);
			break;
		}
	}
}

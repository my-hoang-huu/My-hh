#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float Kt(float[], int);
void Xuly(float[], int, int, int);

int main()
{
	float a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nNhap x: ";
	int x;
	cin >> x;
	cout << "\nNhap k: ";
	int k;
	cin >> k;
	cout << "\n\nMang a sau khi them gia tri " << x << " tai vi tri " << k << " : \n";
	Xuly(a, n, x, k);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		//cin >> a[i];
		//a[i] = rand() * 1.0 / RAND_MAX * 200 - 100;
		a[i] = rand() % 21 - 10;
	}
}
void Xuat(float a[], int n)
{
	cout << "\nMang: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
float Kt(float a[], int n)
{
	float max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}
void Xuly(float a[], int n, int x, int k)
{
	n++;
	for (int i = n - 1; i >= k + 1; i--)
	{
		a[i] = a[i - 1];
	}
	a[k] = x;
	Xuat(a, n);
}
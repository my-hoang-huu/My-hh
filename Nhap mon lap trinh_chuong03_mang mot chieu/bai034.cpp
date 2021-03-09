#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float Tong(float[], int);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	float s = Tong(a, n);
	cout << "Tong cac gia tri Duong trong mang ban dau: " << endl;
	cout << s << endl;
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
float Tong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			s = s + a[i];
		}
	}
	return s;
}

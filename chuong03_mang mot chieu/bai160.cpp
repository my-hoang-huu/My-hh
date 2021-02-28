#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void HoanVi(float&, float&);
void Xuly(float[], int, int);

int main()
{
	float a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	int k;
	cout << "\nNhap k: ";
	cin >> k;
	cout << "\n\nMang a sau khi xoa gia tri tai vi tri k: \n";
	Xuly(a, n, k);
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
		a[i] = rand() % 10 - 5;
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
void HoanVi(float& a, float& b)
{
	float lc;
	lc = a;
	a = b;
	b = lc;
}
void Xuly(float a[], int n, int k)
{
	n = n - 1;
	for (int i = k; i < n; i++)
	{
		a[i] = a[i + 1];
	}

	Xuat(a, n);
}
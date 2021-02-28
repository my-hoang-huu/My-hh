#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void Xuly(float[], int);

int main()
{
	float a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	cout << "\n\nMang a nguyen hoa: \n";
	Xuly(a, n);
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
		a[i] = rand() * 1.0 / RAND_MAX * 200 - 100;
		//a[i] = rand() % 10 - 5;
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
void Xuly(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			a[i] = int(a[i] + 0.5);
		}
		else
		{
			a[i] = int(a[i] - 0.5);
		}
	}
	Xuat(a, n);
}
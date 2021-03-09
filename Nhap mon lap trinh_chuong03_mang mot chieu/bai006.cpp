#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void Am(float[], int);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nCac gia tri Am cua mang ban dau: \n";
	Am(a, n);

	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() * 1.0 / RAND_MAX * 200.0 - 100.0;
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
void Am(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i]<0)
		{
			cout << a[i] << setw(10);
		}
	}
}


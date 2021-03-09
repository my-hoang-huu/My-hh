#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int Dem(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo phan tu ke nhau ma ca hai deu chan trong mang: " << Dem(a, n) << endl;	
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
int Dem(int a[], int n)
{
	int dem = 0;
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
	{
		dem++;
	}
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] % 2 == 0 && (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0))
		{
			dem++;
		}
	}
	if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
	{
		dem++;
	}
	return dem;
}
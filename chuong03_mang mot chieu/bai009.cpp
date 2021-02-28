#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int Dau(int);
void DauChan(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nCac so nguyen trong mang co chu so dau la so chan: \n";
	DauChan(a, n);


	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 201 - 100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
int Dau(int n)
{
	int t = abs(n);
	for (; t >= 10; t = t / 10)
	{
	}
		return t;
}
void DauChan(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (Dau(a[i]) % 2 == 0)
		{
			cout << a[i] << setw(10);
		}
	}
}


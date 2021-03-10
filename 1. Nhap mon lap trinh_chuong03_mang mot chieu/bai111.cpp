#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool Kt(int);
int Xuly(int[], int);


int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo Chan lon nhat dong thoi nho hon tat ca cac gia tri le trong mang: " << Xuly(a, n) << endl;
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
bool Kt(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2)
	{
		return true;
	}
	return false;
}
int Xuly(int a[], int n)
{
	int min = 0;
	for (int i = 0; i < n; i++)
	{
		if (abs(a[i]) % 2 == 1)
		{
			min = a[i];
			break;
		}
	}
	if (min == 0)
	{
		return -1;
	}
	for (int i = 0; i < n; i++)
	{
		if (abs(a[i]) % 2 == 1 && min > a[i])
		{
			min = a[i];
		}
	}
	return min - 1;
}
#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float DuongDau(float[], int);
void LietKe(float[], int);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "Cac vi tri co gia tri bang gia tri duong nho nhat trong mang: " << endl;
	LietKe(a, n);
	cout << endl;
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 20 - 10.0;
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
float DuongDau(float a[], int n)
{
	float lc = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			lc = a[i];
			break;
		}
	}
	return lc;
}
void LietKe(float a[], int n)
{
	int lc = DuongDau(a, n);
	if (lc == 0)
	{
		cout << "\nMang khong co gia tri duong	";
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= lc && a[i] > 0)
		{
			lc = a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == lc)
		{
			cout << i << setw(10);
		}
	}
}

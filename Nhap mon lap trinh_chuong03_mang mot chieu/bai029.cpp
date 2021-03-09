#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int LonNhat(int[], int);
void lietKe(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nCac vi tri co gia tri Lon nhat trong mang:  \n";
	lietKe(a, n);
	cout << endl;
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 21 - 10;
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
int LonNhat(int a[], int n)
{
	int ln = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > ln)
		{
			ln = a[i];
		}
	}
	return ln;
}
void lietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == LonNhat(a, n))
		{
			cout << i << setw(10);
			//cout << a[i] << setw(10);
		}
	}
}

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
	cout << "\nSo luong cac chu so co Tan cung bang 5 trong mang ban dau: " << Dem(a, n) << endl;
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
	cout << "\nCac chu so thoa dieu kien: ";
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (abs (a[i]) % 10 == 5)
		{
			cout << a[i] << setw(5);
			dem++;
		}
	}
	return dem;
}

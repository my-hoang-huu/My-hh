#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool NguyenTo(int);
void LietKe(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nCac vi tri chua so nguyen to trong mang: \n";
	LietKe(a, n);
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
bool NguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			dem++;
	}
	if (dem == 2)
	{
		return true;
	}
	return false;
}
void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (NguyenTo(a[i]))
		{
			cout << i << setw(4);
		}
	}
}


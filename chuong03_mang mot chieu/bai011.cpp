#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool KiemTra(int);
void LietKe(int[], int);


int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nCac gia tri co dang 3^m trong mang: \n";
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
bool KiemTra(int n)
{
	for (int i = 0; i <= n; i++)
	{
		if (pow(3,i)==n)
		{
			return true;
		}
	}
	return false;
}
void LietKe(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KiemTra(a[i]))
		{
			cout << a[i] << setw(10);
			dem++;
		}
	}
	if (dem == 0)
	{
		cout << 0;
	}
}
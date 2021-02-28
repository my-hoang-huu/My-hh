#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ChinhPhuong(int);
void LietKe(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nCac vi tri chua so Chinh phuong trong mang: \n";
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
bool ChinhPhuong(int n)
{
	for (int i = 0; (i * i) <= n; i++)
	{
		if ((i*i)==n)
		{
			return true;
		}
	}
	return false;
}
void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ChinhPhuong(a[i]))
		{
			cout << i << setw(4);
		}
	}
}


#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int Kt(int[], int, int);
void Xuly(int[], int);


int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	Xuly(a, n);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		//cin >> a[i];
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
int Kt( int a[],int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0 && x == 0)
		{
			dem++;
		}
		int t = abs(a[i]);
		for (int dv; t != 0; t = t / 10)
		{
			dv = t % 10;
			if (dv == x)
			{
				dem++;
			}
		}
	}
	return dem++;
}
void Xuly(int a[], int n)
{
	int max = 0;
	int lc;
	for (int j = 0; j <= 9; j++)
	{
		cout << "\nGia tri " << j << " co tan suat suat hien = " << Kt(a, n, j);
		if (Kt(a, n, j) > max)
		{
			max = Kt(a, n, j);
			lc = j;
		}
	}
	cout << "\nCac chu so xuat hien nhieu nhat trong mang: " ;
	for (int j = 0; j <= 9; j++)
	{
		if (Kt(a, n, j) == max)
		{
			cout << j << setw(10);
		}
	}
}
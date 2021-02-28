#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int Kc(int, int);
void Kt(int[], int);


int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\nMang ban dau: \n";
	Xuat(a, n);
	Kt(a, n);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		cin >> a[i];
		//a[i] = rand() % 201 - 100;
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
int Kc(int a, int b)
{
	int kc = abs(a - b);
	return kc;
}
void Kt(int a[], int n)
{
	int x = a[0];
	int y = a[1];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Kc(a[i], a[j]) < Kc(x, y))
			{
				x = a[i];
				y = a[j];
			}
		}
	}
	cout << "\nCac cap gia tri co khoang cach gan nhau nhat trong mang: \n";
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Kc(a[i], a[j]) == Kc(x, y))
			{
				cout << a[i] << setw(5) << a[j] << setw(5) << "\n";
			}
		}
	}
}
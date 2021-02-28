#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float Xuly(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nGia tri Am lon nhat trong mang: " << Xuly(a, n) << endl;
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() * 1.0 / RAND_MAX * 200.0 - 100.0;
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
float Xuly(float a[], int n)
{
	float lc = 0;
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			lc = a[i];
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] < 0 && a[i] >= lc)
			{
				lc = a[i];
			}
		}
	}
	return lc;
}


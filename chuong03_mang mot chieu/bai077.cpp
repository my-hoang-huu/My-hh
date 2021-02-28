#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void Xuly(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	//int x;
	//cout << "\nNhap x: ";
	//cin >> x;
	Xuly(a, n);
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
void Xuly(float a[], int n)
{
	float min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	float max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	cout << "\nDoan chua tat ca gia tri trong mang: \n";
	cout << "[" << min << ", " << max << "]" << endl;
}


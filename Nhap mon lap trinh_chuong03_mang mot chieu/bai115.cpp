#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float Kc(float, float);
void Kt(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	Kt(a, n);
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
float Kc(float a, float b)
{
	float kc = abs(a - b);
	return kc;
}
void Kt(float a[], int n)
{
	float x = a[0];
	float y = a[1];
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
	cout << "\nHai gia tri co khoang cach gan nhau nhat trong mang: " << x << setw(10) << y << setw(10);
}





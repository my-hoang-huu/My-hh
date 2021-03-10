#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
//float DieuKien(float[], int);
float Dem(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo lan xuat hien gia tri lon nhat trong mang ban dau: \n" << Dem(a, n) << endl;
	cout << endl;
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
//float DieuKien(float a[], int n)
//{
//	float max = a[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	}
//	return max;
//}
float Dem(float a[], int n)
{
	float max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	cout << "\nGia tri lon nhat trong mang ban dau: " << max << endl;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == max)
		{
			dem++;
		}
	}
	return dem;
}

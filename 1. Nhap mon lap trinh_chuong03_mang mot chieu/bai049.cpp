#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float XuLy(float[], int);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nKhoang cach trung binh giua cac cap gia tri trong mang ban dau: \n" << XuLy(a, n) << endl;
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
float XuLy(float a[], int n)
{
	float kc = 0;
	float s = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				kc = abs(a[i] - a[j]);
				s = s + kc;
				dem++;
			}
		}
	}
	cout << "\nTong khoang cach: " << s << endl;
	cout << "So cap gia tri: " << dem << endl;
	if (dem == 0)
	{
		return 0;
	}
	return s / dem;
}

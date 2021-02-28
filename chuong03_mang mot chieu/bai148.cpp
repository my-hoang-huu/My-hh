#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void HoanVi(float&, float&);
float Max(float[], int);
float Min(float[], int);
void Xuly(float[], int);

int main()
{
	float a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	cout << "\n\nMang a sau khi Hoan vi gia tri lon nhat va nho nhat: \n";
	Xuly(a, n);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		//cin >> a[i];
		//a[i] = rand() * 1.0 / RAND_MAX * 200 - 100;
		a[i] = rand() % 10 - 5;
	}
}
void Xuat(float a[], int n)
{
	cout << "\nMang: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
void HoanVi(float& a, float& b)
{
	float lc;
	lc = a;
	a = b;
	b = lc;
}
float Max(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > lc)
		{
			lc = a[i];
		}
	}
	return lc;
}
float Min(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < lc)
		{
			lc = a[i];
		}
	}
	return lc;
}
void Xuly(float a[], int n)
{
	float Ma = Max(a, n);
	cout << "\nMax = " << Ma;
	float Mi = Min(a, n);
	cout << "\nMin = " << Mi << endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == Ma)
		{
			a[i] = Mi;
		}
		else
		{
			if (a[i] == Mi)
			{
				a[i] = Ma;
			}
		}
	}
	Xuat(a, n);
}
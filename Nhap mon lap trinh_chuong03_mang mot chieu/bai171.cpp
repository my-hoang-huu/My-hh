#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void Kt(float[], int&);
void Xuly(float[], int, float);

int main()
{
	float a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	cout << "\n\nMang a sau khi nhap gia tri sao cho mang giam dan: \n";
	Xuat(a, n);
	//cout << "\nNhap x: ";
	//float x;
	//cin >> x;
	//cout << "\nNhap k: ";
	//int k;
	//cin >> k;
	//cout << "\n\nMang a sau khi them gia tri ham giam dan va khong thay doi vi tri cac gia tri: \n";
	//Xuly(a, n, x);
	return 1;
}
void Nhap(float a[], int& n)
{
	a[100];
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	int dem = -1;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() * 1.0 / RAND_MAX * 200 - 100;
		dem++;
		Xuly(a, dem, a[i]);
	}
	//Xuat(a, n);
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
void Kt(float a[], int& n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				float temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << "\nSap tang: ";
	//Xuat(a, n);
}
void Xuly(float a[], int n, float x)
{
	if (n > 0)
	{
		int i;
		n++;
		for (i = n - 2; i >= 0 && a[i] < x; i--)
		{
			a[i + 1] = a[i];
		}
		a[i + 1] = x;
		//cout << "\nSau xu ly: ";
		//Xuat(a, n);
	}
}
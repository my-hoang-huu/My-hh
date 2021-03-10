#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
bool Kt(float[], int, float[], int);
float Max(float[], int);
void XuLy(float[], int, float[]);

int main()
{
	float a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	float b[100];
	//int l;
	//cout << "\nNhap do dai mang con: ";
	//cin >> l;
	//cout << "\nVa vi tri bat dau: ";
	//cin >> vt;
	cout << "\nCac mang con tang chua gia tri lon nhat: ";
	XuLy(a, n, b);
	cout << endl;
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		//cin >> a[i];
		a[i] = rand() * 1.0 / RAND_MAX * 200 - 100;
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
float Max(float a[], int n)
{
	float max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}
bool Kt(float a[], int n, float bd[], int d)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] > a[i + 1])
		{
			return false;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == Max(bd, d))
		{
			return true;
		}
	}
	return false;
}
void XuLy(float a[], int n, float b[])
{
	int dem = 0;
	for (int l = 1; l <= n; l++)
	{
		cout << "\n\nDo dai l = " << l << " :";
		for (int vt = 0; vt <= n - l; vt++)
		{
			int k = 0;
			for (int i = vt; i < l + vt; i++)
			{
				b[k++] = a[i];
			}
			if (Kt(b, k, a, n))
			{
				cout << "\nBat dau tai vt = " << vt << ": \n";
				for (int k = 0; k < l; k++)
				{
					cout << "b[" << k << "] = " << b[k] << setw(5);
				}
				dem++;
			}
		}
	}
	cout << "\nSo mang con thoa dieu kien: " << dem << endl;
}
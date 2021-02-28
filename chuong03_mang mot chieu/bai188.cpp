#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
bool Kt(float[], int);
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
	cout << "\nCac mang con toan duong: ";
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
bool Kt(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= 0)
		{
			return false;
		}
	}
	return true;
}
void XuLy(float a[], int n, float b[])
{
	int flag = 0;
	int m = 0;
	int lc = 0;
	for (int l = 1; l <= n; l++)
	{
		cout << "\n\nDo dai l = " << l << " :";
		for (int vt = 0; vt <= n - l; vt++)
		{
			int k = 0;
			int dk = 1;
			int s = 0;
			for (int i = vt; i < l + vt; i++)
			{
				s = s + a[i];
			}
			if (s > lc)
			{
				cout << "\nvt = " << vt;
				for (int i = vt; i < l + vt; i++)
				{
					b[k++] = a[i];
				}
				m = l;
				lc = s;
				flag = 1;
			}
		}
	}
	if (flag == 1)
	{
		cout << "\n\nMang con co tong lon nhat dai l = " << m << " : ";
		for (int k = 0; k < m; k++)
		{
			cout << "b[" << k << "] = " << b[k] << setw(7);
		}
	}
}
#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool Kt(int[], int, int);
void XuLy(int[], int, int[], int);

int main()
{
	int a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	int b[100];
	int M;
	cout << "\nNhap M: ";
	cin >> M;
	//cout << "\nVa vi tri bat dau: ";
	//cin >> vt;
	cout << "\nCac mang con co tong bang M: ";
	XuLy(a, n, b, M);
	cout << endl;
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		//cin >> a[i];
		a[i] = rand() % 21 - 10;
	}
}
void Xuat(int a[], int n)
{
	cout << "\nMang: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
bool Kt(int a[], int n, int m)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + a[i];
	}
	if (s == m)
	{
		return true;
	}
	return false;
}
void XuLy(int a[], int n, int b[], int M)
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
			if (Kt(b, k, M))
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
#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
bool Kt(float[], int, float[], int);
float Max(float[], int);
int XuLy(float[], int, float[], int);

int main()
{
	float a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	float b[100];
	int l;
	Nhap(b, l);
	Xuat(b, l);
	//cout << "\nNhap do dai mang con: ";
	//cin >> l;
	//cout << "\nVa vi tri bat dau: ";
	//cin >> vt;
	cout << "\nSo lan mang b xuat hien trong mang a: " << XuLy(a, n, b, l);
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
		cin >> a[i];
		//a[i] = rand() * 1.0 / RAND_MAX * 200 - 100;
		//a[i] = rand() % 11 - 5;
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
int XuLy(float a[], int n, float b[], int l)
{
	int dem = 0;
	for (int vt = 0; vt <= n - l; vt++)
	{
		int k = 0;
		int flag = 1;
		for (int i = vt; i < l + vt; i++)
		{
			if (a[i] != b[k++])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			cout << "\nvt = " << vt;
			dem++;
		}
	}
	return dem;
}
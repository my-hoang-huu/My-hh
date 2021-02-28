#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int Dem(int[], int, int[], int);

int main()
{
	int a[100], b[100];
	int n, m;
	cout << "Mang a: ";
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nMang b: ";
	Nhap(b, m);
	Xuat(b, m);
	cout << "\nTan so xuat hien mang a trong mang b: " << Dem(a, n, b, m) << endl;
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 5;
}
void Xuat(int a[], int n)
{
	cout << "\nMang ban dau: \n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
int Dem(int a[], int n, int b[], int m)
{
	int dem = 0;
	if (n > m)
	{
		dem = 0;
	}
	else
	{
		for (int vt = 0; vt <= m - n; vt++)
		{
			int flag = 1;
			for (int i = 0; i < n; i++)
			{
				if (a[i] != b[vt + i])
				{
					flag = 0;
				}
			}
			if (flag == 1)
			{
				dem++;
			}
		}

	}
	return dem;
}
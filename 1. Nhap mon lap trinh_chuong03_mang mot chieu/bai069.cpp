#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
void Dem(int[], int);

int main()
{
	int a[100], b[100];
	int n, m;
	/*cout << "Mang a: ";*/
	Nhap(a, n);
	Xuat(a, n);
	//cout << "\nMang b: ";
	//Nhap(b, m);
	//Xuat(b, m);
	cout << "\nCac gia tri xuat hien nhieu hon mot lan trong mang: " << endl;
	Dem(a, n);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 21 - 10;
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
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			dem++;
		}
	}
	return dem;
}
void Dem(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
		{
			if (i != j && a[i] == a[j])
			{
				flag = 0;
			}
		}
		if (flag == 1)
		{
			dem = TanSuat(a, n, a[i]);
			if (dem >= 2)
			{
				cout << a[i] << setw(10);
			}
		}
	}
}

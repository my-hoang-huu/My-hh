#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool Kt(int);
int Xuly(int[], int);


int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo lon nhat co dang 5^m trong mang: " << Xuly(a, n) << endl;
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 201 - 100;
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
bool Kt(int n)
{
	int t = 1;
	for (int i = 1; t <= n; i++)
	{
		t = t * 5;
		if (t == n)
		{
			return true;
		}
	}
	return false;
}
int Xuly(int a[], int n)
{
	int flag = 0;
	int lc = 0;
	for (int i = 0; i < n; i++)
	{
		if (Kt(a[i]))
		{
			flag = 1;
			lc = a[i];
			break;
		}
	}
	if (flag == 1)
	{
		for (int i = 0; i < n; i++)
		{
			if (Kt(a[i]) && a[i] >= lc)
			{
				lc = a[i];
				//cout << "\nThoa " << i <<" = "<< a[i]<<setw(10);
			}
		}
	}
	return lc;
}
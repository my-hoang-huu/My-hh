#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int Kt(int[], int);
int Xuly(int[], int);


int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\nMang ban dau: \n";
	Xuat(a, n);
	cout << "\nChu so xuat hien it nhat trong mang: "<< Xuly(a, n);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		//cin >> a[i];
		a[i] = rand() % 201 - 100;
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
int Kt(int a[], int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < a[max])
		{
			max = i;
		}
	}
	return max;
}
int Xuly(int a[], int n)
{
	int dem[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			dem[0]++;
		}
		int t = abs(a[i]);
		for (int dv; t != 0; t = t / 10)
		{
			dv = t % 10;
			dem[dv]++;
		}
	}
	cout << "\nMang dem: ";
	Xuat(dem, 10);
	return Kt(dem, 10);
}
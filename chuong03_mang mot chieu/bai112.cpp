#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int Kt(int[], int, int);
void Xuly(int[], int);


int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	Xuly(a, n);
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
	cout << "\nMang ban dau: \n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
int Kt(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}
void Xuly(int a[], int n)
{
	int ts = 0;
	int lc = 0;
	for (int i = 0; i < n; i++)
	{
		if (Kt(a, n, a[i]) > ts)
		{
			ts = Kt(a, n, a[i]);
			lc = a[i];
			//cout << "\nTan suat = " << ts << " : " << a[i];
		}
	}
	cout << "\nCac gia tri xuat hien nhieu nhat trong mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
		{
			if (a[j] == a[i])
			{
				flag = 0;
			}
		}
		if (Kt(a, n, a[i]) == ts && flag == 1)
		{
			cout << a[i] << setw(10);
		}
	}
}
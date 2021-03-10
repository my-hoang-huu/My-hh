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
	cout << "\nSo lon nhat thoa dieu kien chua toan so le co trong mang: " << Xuly(a, n) << endl;
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
	int t = n;
	int flag = 1;
	for (int dv; t != 0; t = t / 10)
	{
		dv = t % 10;
		if (abs(dv) % 2 == 0)
		{
			flag = 0;
			return false;
		}
	}
	if (flag == 1)
	{
		return true;
	}
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
				//cout << "Thoa " << i <<" = "<< a[i]<<setw(10);
			}
		}
	}
	return lc;
}
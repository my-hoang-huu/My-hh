#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool Kt(int);
int Xuly(int[], int);

int main()
{
	int a[1000];
	int n;
	Nhap(a, n);
	cout << "\nMang ban dau: \n";
	Xuat(a, n);
	cout << "\nTrong mang Khong co so Hoan thien lon hon 256: " << Xuly(a, n);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		//cin >> a[i];
		a[i] = rand() % 2001 - 300;
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
bool Kt(int n)
{
	int s = 0;
	for (int i = 1; i <= n/2; i++)
	{
		if (n % i == 0)
		{
			s = s + i;
		}
	}
	if (n == s)
	{
		return true;
	}
	return false;
}
int Xuly(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		if (Kt(a[i]) && a[i] > 256)
		{
			flag = 0;
			cout << "\nSo hoan thien: " << a[i];
		}
	}
	return flag;
}
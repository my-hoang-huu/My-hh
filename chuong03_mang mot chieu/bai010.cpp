#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ToanLe(int);
void XuatToanLe(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nCac so nguyen trong mang co chu so Toan la so le: \n";
	XuatToanLe(a, n);


	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 201 - 100;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
bool ToanLe(int n)
{
	int flag = 1;
	for (int t = n; t != 0; t = t / 10)
		if (t % 2 == 0)
		{
			flag = 0;
			return false;
			break;
		}
	return true;
}
void XuatToanLe(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ToanLe(a[i]))
		{
			cout << a[i] << setw(10);
		}
	}
}


#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool NguyenTo(int);
int XuLy(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	int tb = XuLy(a, n);
	cout << "\nTrung binh cong cac gia tri Nguyen to trong mang ban dau: \n" << tb << endl;
	cout << endl;
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() * 1.0 / RAND_MAX * 200.0 - 100.0;
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
bool NguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2)
	{
		return true;
	}
	return false;
}
int XuLy(int a[], int n)
{
	cout << "\nCac gia tri Nguyen to trong mang ban dau: \n";
	int s = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (NguyenTo(a[i]))
		{
			cout << a[i] << setw(10);
			s = s + a[i];
			dem++;
		}
	}
	int tb = s / dem;
	return tb;
}

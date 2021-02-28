#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int Xuly(int[], int, int, int);


int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	int x, y;
	cout << "\nNhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "\nGia tri dau tien nam trong khoang (" << x << ", " << y << ") trong mang: " << Xuly(a, n, x, y) << endl;
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
int Xuly(int a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > x && a[i] < y)
		{
			return a[i];
			break;
		}
	}
	return x;
}
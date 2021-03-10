#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void lietKe(float[], int, float, float);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	float x, y;
	cout << "\nNhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "\nCac gia tri tu mang ban dau nam trong doan ["<<x<<","<<y<<"] la: \n";
	lietKe(a, n, x, y);
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() * 1.0 / RAND_MAX * 200.0 - 100.0;
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
void lietKe(float a[], int n, float x, float y)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= x && a[i] <=y)
		{
			cout << a[i] << setw(10);
		}
	}
}

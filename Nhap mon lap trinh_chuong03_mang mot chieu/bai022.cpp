#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void lietKe(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nCac gia tri Lon hon tri tuyet doi cua gia tri dung lien truoc và Nho hon tri tuyet doi cua gia tri dung lien sau no: \n";
	lietKe(a, n);
	cout << endl;
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() * 1.0 / RAND_MAX * 200.0 - 100.0;
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
void lietKe(float a[], int n)
{
	for (int i = 1; i <= n - 2; i++)
	{
		if (a[i] < abs(a[i + 1]) && a[i] > abs(a[i - 1]))
		{
			cout << a[i] << setw(10);
		}
	}
}

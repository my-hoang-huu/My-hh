#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float XuLy(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	float tb = XuLy(a, n);
	cout << "\nTrung binh Nhan cac gia tri Duong trong mang ban dau: \n" << tb << endl;
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
float XuLy(float a[], int n)
{
	cout << "\nCac gia tri Duong trong mang ban dau: \n";
	float t = 1;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			cout << a[i] << setw(10);
			t = t * a[i];
			dem++;
		}
	}
	float tbn = pow(t, 1.0 / dem);
	return tbn;
}

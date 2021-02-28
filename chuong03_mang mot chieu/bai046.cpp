#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
bool NguyenTo(int);
float Tong(float[], int, float);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	float x;
	cout << "\nNhap x: ";
	cin >> x;
	//float tb = Tong(a, n, x);
	cout << "\nTrung binh cong cac gia tri Lon hon " << x << " trong mang ban dau: \n" << Tong(a, n, x) << endl;
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

float Tong(float a[], int n, float x)
{
	cout << "\nCac gia tri Lon hon " << x << " trong mang ban dau: \n";
	float s = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > x)
		{
			cout << a[i] << setw(10);
			s = s + a[i];
			dem++;
		}
	}
	float tb = s / dem;
	return tb;
}

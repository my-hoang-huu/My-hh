#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int Kt(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\nMang ban dau: \n";
	Xuat(a, n);
	cout << "\nDem so luong phan tu lon hon tat ca gia tri truoc no: " << Kt(a, n);
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
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
int Kt(int a[], int n)
{
	//int flag = 1;
	int dem = 0;
	int lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i + 1] > lc)
		{
			lc = a[i + 1];
			dem++;
			cout << "\nGia tri thoa: " << lc;
		}
	}
	return dem;
}
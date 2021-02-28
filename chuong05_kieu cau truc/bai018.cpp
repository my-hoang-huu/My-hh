#include<iostream>
#include<iomanip>
#include <string>
using namespace std;
struct MATHANG
{
	string TenHang;
	int DonGia;
	int LuongTon;
};
void Nhap(MATHANG&);
void Xuat(MATHANG);
void Nhap(MATHANG[], int&);
void Xuat(MATHANG[], int);
int main()
{
	cout << "Nhap mang ban dau: ";
	int n;
	MATHANG a[10];
	Nhap(a, n);
	cout << "\nMang ban dau:\n";
	Xuat(a, n);




	cout << endl;
	return 1;
}

void Nhap(MATHANG& a)
{

	cout << "Nhap Ten hang: ";
	getline(cin, a.TenHang);
	a.DonGia = rand() % 50 + 30;
	a.LuongTon = rand() % 500 + 100;
}
void Xuat(MATHANG a)
{
	cout << "\nTen hang: " << a.TenHang;
	cout << "\nDon gia: " << a.DonGia << "k";
	cout << "\nLuongTon: " << a.LuongTon;
}
void Nhap(MATHANG a[], int& n)
{
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			cin.ignore();
		Nhap(a[i]);
	}
}
void Xuat(MATHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
		cout << endl;
	}
}


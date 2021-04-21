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
MATHANG MaxGiaTriTon(MATHANG[], int);
int DemTonHon1000(MATHANG[], int);
int main()
{
	cout << "Nhap mang ban dau: ";
	int n;
	MATHANG a[10];
	Nhap(a, n);
	cout << "\nMang ban dau:\n";
	Xuat(a, n);
	cout << "\nMat hang co gia tri ton kho lon nhat la: " << MaxGiaTriTon(a, n).TenHang;
	cout << "\nSo luong mat hang co ton hon 1000: " << DemTonHon1000(a, n);
	cout << endl;
	return 1;
}

void Nhap(MATHANG& a)
{

	cout << "Nhap Ten hang: ";
	getline(cin, a.TenHang);
	a.DonGia = rand() % 50 + 30;
	a.LuongTon = rand() % 1000 + 200;
}
void Xuat(MATHANG a)
{
	cout << "\nTen hang: " << a.TenHang;
	cout << "\nDon gia: " << a.DonGia <<"k";
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
MATHANG MaxGiaTriTon(MATHANG a[], int n)
{
	MATHANG lc = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i].DonGia * a[i].LuongTon > lc.DonGia * lc.LuongTon)
			lc = a[i];
	}
	return lc;
}
int DemTonHon1000(MATHANG a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].LuongTon > 1000)
			dem++;
	}
	return dem;
}
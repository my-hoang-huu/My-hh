#include<iostream>
#include<iomanip>
#include <string>
using namespace std;
struct NGAY
{
	int ngay;
	int thang;
	int nam;
};
struct HOPSUA
{
	string NhanHieu;
	float TrongLuong;
	NGAY HanDung;
};
void Nhap(NGAY&);
void Xuat(NGAY);
void Nhap(HOPSUA&);
void Xuat(HOPSUA);
void Nhap(HOPSUA[], int&);
void Xuat(HOPSUA[], int);
int DemQuaHan(HOPSUA[], int, NGAY);
int NgayToiDaThang(NGAY);
bool KtNhuan(NGAY);
int SoSanh(NGAY, NGAY);
HOPSUA MaxTrongLuong(HOPSUA[], int);
int main()
{
	cout << "Nhap mang ban dau: ";
	int n;
	HOPSUA a[10];
	Nhap(a, n);
	cout << "\nMang ban dau:\n";
	Xuat(a, n);
	cout << "\nNgay x: ";
	NGAY x;
	Nhap(x);
	Xuat(x);
	cout << "\nSo hop sua qua han su dung: " << DemQuaHan(a, n, x);
	cout << "\nHop sua co trong luong lon nhat trong mang: " << MaxTrongLuong(a, n).NhanHieu;
	cout << endl;
	return 1;
}
void Nhap(NGAY& h)
{
	do
	{
		h.ngay = rand() % 32;
		h.thang = rand() % 13;
		h.nam = rand() % 2 + 2019;
	} while (h.nam < 1 || h.thang >12 || h.thang < 1 || h.ngay > NgayToiDaThang(h) || h.nam < 1);
}
void Xuat(NGAY h)
{
	cout << "Ngay " << h.ngay << "  Thang " << h.thang << "  Nam " << h.nam;
}
void Nhap(HOPSUA& a)
{
	cout << "Nhap Nhan hieu: ";
	getline(cin, a.NhanHieu);
	//cout << "\nNhap Trong luong (gr): ";
	//cin >> a.TrongLuong;
	//cout << "\nNhap Han su dung: ";
	Nhap(a.HanDung);
	a.TrongLuong = rand() % 20 + 10;

}
void Xuat(HOPSUA a)
{
	cout << "\nNhan hieu: " << a.NhanHieu;
	cout << "\nTrong luong (gr): " << a.TrongLuong;
	cout << "\nHan su dung: ";
	Xuat(a.HanDung);
}
void Nhap(HOPSUA a[], int& n)
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
void Xuat(HOPSUA a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
		cout << endl;
	}
}
int NgayToiDaThang(NGAY a)
{
	int NgayThang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (KtNhuan(a))
		NgayThang[1] = 29;
	return NgayThang[a.thang - 1];
}
bool KtNhuan(NGAY a)
{
	if ((a.nam % 4 == 0 && a.nam % 100 != 0) || a.nam % 400 == 0)
		return true;
	return false;
}
int DemQuaHan(HOPSUA a[], int n, NGAY x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (SoSanh(a[i].HanDung, x) == -1)
		{
			dem++;
		}
	}
	return dem;
}
int SoSanh(NGAY a, NGAY b)
{
	if (a.nam > b.nam)
	{
		return 1;
	}
	if (a.nam < b.nam)
	{
		return -1;
	}
	if (a.thang > b.thang)
	{
		return 1;
	}
	if (a.thang < b.thang)
	{
		return -1;
	}
	if (a.ngay > b.ngay)
	{
		return 1;
	}
	if (a.ngay < b.ngay)
	{
		return -1;
	}
	return 0;
}
HOPSUA MaxTrongLuong(HOPSUA a[], int n)
{
	HOPSUA lc = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i].TrongLuong > lc.TrongLuong)
			lc = a[i];
	}
	return lc;
}
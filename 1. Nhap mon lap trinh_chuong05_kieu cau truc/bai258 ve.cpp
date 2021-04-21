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
struct THOIGIAN
{
	int Gio;
	int Phut;
	int Giay;
};
struct VE
{
	string TenPhim;
	int GiaTien;
	THOIGIAN XuatChieu;
	NGAY NgayXem;
};
void Nhap(NGAY&);
void Xuat(NGAY);
void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);
void Nhap(VE[], int&);
void Xuat(VE[], int);
int NgayToiDaThang(NGAY);
bool KtNhuan(NGAY);
int TongTien(VE[], int);
void SapTang(VE[], int);
int SoSanh(THOIGIAN a, THOIGIAN b);
int SoSanh(NGAY a, NGAY b);

int main()
{
	cout << "Nhap mang ban dau: ";
	int n;
	VE a[10];
	Nhap(a, n);
	cout << "\nMang ban dau:\n";
	Xuat(a, n);
	cout << "\nTong gia tien cac ve: " << TongTien(a, n);
	cout << "\n\nMang sau khi sap tang ngay xem va suat chieu: \n";
	SapTang(a, n);
	Xuat(a, n);

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
void Nhap(THOIGIAN& a)
{
	do
	{
		a.Gio = rand() % 24;
		a.Phut = rand() % 60;
		a.Giay = rand() % 60;
	} while (a.Gio < 0 || a.Gio > 23 || a.Phut < 0 || a.Phut > 59 || a.Giay < 0 || a.Giay > 59);
}
void Xuat(THOIGIAN h)
{
	cout << setprecision(2) << h.Gio << "h " << h.Phut << "m " << h.Giay << "s";
}
void Nhap(VE& a)
{
	cout << "Nhap Ten phim: ";
	getline(cin, a.TenPhim);
	a.GiaTien = rand() % 50 + 30;
	Nhap(a.XuatChieu);
	Nhap(a.NgayXem);
}
void Xuat(VE a)
{
	cout << "\nTen phim: " << a.TenPhim;
	cout << "\nGia tien: ";
	cout << a.GiaTien <<"k";
	cout << "\nThoi gian chieu: ";
	Xuat(a.XuatChieu);
	cout << "\nNgay xem: ";
	Xuat(a.NgayXem);
}
void Nhap(VE a[], int& n)
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
void Xuat(VE a[], int n)
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
int TongTien(VE a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += a[i].GiaTien;
	}
	return s;
}
void HoanVi(NGAY& a, NGAY& b)
{
	NGAY t = a;
	a = b;
	b = t;
}
void HoanVi(VE& a, VE& b)
{
	VE t = a;
	a = b;
	b = t;
}
void SapTang(VE a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (SoSanh(a[i].NgayXem, a[j].NgayXem) == 1 || (SoSanh(a[i].NgayXem, a[j].NgayXem) == 0 && SoSanh(a[i].XuatChieu, a[j].XuatChieu) == 1))
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
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
int SoSanh(THOIGIAN a, THOIGIAN b)
{
	if (a.Gio > b.Gio)
		return 1;
	if (a.Gio < b.Gio)
		return -1;
	if (a.Phut > b.Phut)
		return 1;
	if (a.Phut < b.Phut)
		return -1;
	if (a.Giay > b.Giay)
		return 1;
	if (a.Giay < b.Giay)
		return -1;
	return 0;
}

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
void Nhap(VE&);
void Xuat(VE);

int main()
{
	VE m;
	Nhap(m);
	Xuat(m);
	return 1;
}
void Nhap(NGAY& h)
{
	cout << "\nNhap ngay: ";
	cin >> h.ngay;
	cout << "Nhap thang: ";
	cin >> h.thang;
	cout << "Nhap nam: ";
	cin >> h.nam;
}
void Xuat(NGAY h)
{
	cout << "Ngay " << h.ngay << "  Thang " << h.thang << "  Nam " << h.nam;
}
void Nhap(THOIGIAN& h)
{
	cout << "\nNhap gio: ";
	cin >> h.Gio;
	cout << "Nhap phut: ";
	cin >> h.Phut;
	cout << "Nhap giay: ";
	cin >> h.Giay;
}
void Xuat(THOIGIAN h)
{
	cout << setprecision(2) << h.Gio << "h " << h.Phut << "m " << h.Giay << "s";
}
void Nhap(VE& a)
{
	cout << "Nhap Ten phim: ";
	getline(cin, a.TenPhim);
	cout << "\nNhap Gia tien: ";
	cin >> a.GiaTien;
	cout << "\nNhap Thoi gian chieu: ";
	Nhap(a.XuatChieu);
	cout << "\nNhap Ngay xem: ";
	Nhap(a.NgayXem);
}
void Xuat(VE a)
{
	cout << "\nThong tin VE XEM PHIM\nTen phim: " << a.TenPhim;
	cout << "\nGia tien: ";
	cout << a.GiaTien;
	cout << "\nThoi gian chieu: ";
	Xuat(a.XuatChieu);
	cout << "\nNgay xem: ";
	Xuat(a.NgayXem);
}

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
struct DAILY
{
	string MaSo;
	string TenDaiLy;
	string DiaChi;
	int DienThoai;
	NGAY NgayNhan;
	string EMail;
};
void Nhap(NGAY&);
void Xuat(NGAY);
void Nhap(DAILY&);
void Xuat(DAILY);

int main()
{
	DAILY m;
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
void Nhap(DAILY& a)
{
	cout << "Nhap Ma so: ";
	getline(cin, a.MaSo);
	cout << "Nhap Ten dai ly: ";
	getline(cin, a.TenDaiLy);
	cout << "Nhap Dia chi: ";
	getline(cin, a.DiaChi);
	cout << "Nhap So dien thoai: ";
	cin >> a.DienThoai;
	cout << "Nhap Ngay tiep nhan: ";
	Nhap(a.NgayNhan);
	cin.ignore();
	cout << "Nhap Dia chi email: ";
	getline(cin, a.EMail);
}
void Xuat(DAILY a)
{
	cout << "\nThong tin DAI LY ";
	cout << "\nMa so: " << a.MaSo;
	cout << "\nTen Dai ly: " << a.TenDaiLy;
	cout << "\nDia chi: " << a.DiaChi;
	cout << "\nSo dien thoai: " << a.DienThoai;
	cout << "\nNgay Tiep nhan: ";
	Xuat(a.NgayNhan);
	cout << "\nEmail: " << a.EMail << endl;
}

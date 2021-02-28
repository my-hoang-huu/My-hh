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
struct SOTIETKIEM
{
	string MaSo;
	string Loai;
	string HoTen;
	int CMND;
	NGAY NgayMo;
	float TienGoi;
};
void Nhap(NGAY&);
void Xuat(NGAY);
void Nhap(SOTIETKIEM&);
void Xuat(SOTIETKIEM);

int main()
{
	SOTIETKIEM m;
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
void Nhap(SOTIETKIEM& a)
{
	cout << "Nhap Ma so: ";
	getline(cin, a.MaSo);
	cout << "Nhap Loai tiet kiem: ";
	getline(cin, a.Loai);
	cout << "Nhap Ho ten khach hang: ";
	getline(cin, a.HoTen);
	cout << "Nhap so Chung minh nhan dan: ";
	cin >> a.CMND;
	cout << "Nhap Ngay mo so: ";
	Nhap(a.NgayMo);
	cout << "Nhap so Tien goi: ";
	cin >> a.TienGoi;
}
void Xuat(SOTIETKIEM a)
{
	cout << "\nThong tin SO TIET KIEM ";
	cout << "\nMa so: " << a.MaSo;
	cout << "\nLoai tiet kiem: " << a.Loai;
	cout << "\nHo ten khach hang: " << a.HoTen;
	cout << "\nso Chung minh nhan dan: " << a.CMND;
	cout << "\nNgay mo so: ";
	Xuat(a.NgayMo);
	cout << "\nSo tien gui: " << a.TienGoi;
}

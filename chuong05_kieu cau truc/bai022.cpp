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

int main()
{
	HOPSUA m;
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
void Nhap(HOPSUA& a)
{
	cout << "Nhap Nhan hieu: ";
	getline(cin, a.NhanHieu);
	cout << "\nNhap Trong luong (gr): ";
	cin >> a.TrongLuong;
	cout << "\nNhap Han su dung: ";
	Nhap(a.HanDung);
}
void Xuat(HOPSUA a)
{
	cout << "\nThong tin cua HOP SUA";
	cout << "\nNhan hieu: " << a.NhanHieu;
	cout << "\nTrong luong (gr): " << a.TrongLuong;
	cout << "\nHan su dung: ";
	Xuat(a.HanDung);
}

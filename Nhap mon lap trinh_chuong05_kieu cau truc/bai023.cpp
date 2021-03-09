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
struct CAUTHU
{
	string MaSo;
	string TenCauThu;
	NGAY NgaySinh;
};
void Nhap(NGAY&);
void Xuat(NGAY);
void Nhap(CAUTHU&);
void Xuat(CAUTHU);

int main()
{
	CAUTHU m;
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
void Nhap(CAUTHU& a)
{
	cout << "Nhap Ma cau thu: ";
	getline(cin, a.MaSo);
	cout << "\nNhap Ten cau thu: ";
	getline(cin, a.TenCauThu);
	cout << "\nNhap Ngay sinh: ";
	Nhap(a.NgaySinh);
}
void Xuat(CAUTHU a)
{
	cout << "\nThong tin cua CAU THU";
	cout << "\nMa so: " << a.MaSo;
	cout << "\nTen cau thu: " << a.TenCauThu;
	cout << "\nNgay sinh: ";
	Xuat(a.NgaySinh);
}

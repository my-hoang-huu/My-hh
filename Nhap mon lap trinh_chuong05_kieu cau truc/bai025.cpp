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
struct CHUYENBAY
{
	string MaSo;
	THOIGIAN GioBay;
	NGAY NgayBay;
	string NoiDi;
	string NoiDen;
};
void Nhap(NGAY&);
void Xuat(NGAY);
void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);
void Nhap(CHUYENBAY&);
void Xuat(CHUYENBAY);

int main()
{
	CHUYENBAY m;
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
void Nhap(CHUYENBAY& a)
{
	cout << "Nhap Ma chuyen bay: ";
	getline(cin, a.MaSo);
	cout << "\nNhap Gio bay: ";
	Nhap(a.GioBay);
	cout << "\nNhap Ngay bay: ";
	Nhap(a.NgayBay);
	cin.ignore();
	cout << "Nhap Noi di: ";
	getline(cin, a.NoiDi);
	cout << "Nhap Noi den: ";
	getline(cin, a.NoiDen);
}
void Xuat(CHUYENBAY a)
{
	cout << "\nThong tin CHUYEN BAY";
	cout << "\nMa chuyen bay: " << a.MaSo;
	cout << "\nGio bay: ";
	Xuat(a.GioBay);
	cout << "\nNgay bay: ";
	Xuat(a.NgayBay);
	cout << "\nNoi di: " << a.NoiDi;
	cout << "\nNoi den: " << a.NoiDen;
}

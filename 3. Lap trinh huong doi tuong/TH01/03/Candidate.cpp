#include "Candidate.h"

void Candidate::Nhap()
{
	cout << "\nNhap ho ten: ";
	getline(cin, HoTen);
	cout << "Nhap Maso: ";
	getline(cin, MaSo);
	cout << "Nhap ngay sinh theo thu tu ngay, thang, nam: ";
	NgaySinh.Nhap();
	cout << "Nhap diem toan: ";
	cin >> Toan;
	cout << "Nhap diem van: ";
	cin >> Van;
	cout << "Nhap diem anh: ";
	cin >> Anh;
}
void Candidate::Xuat()
{
	cout << "\nho ten: " << HoTen;
	cout << "\nMaso: " << MaSo;
	cout << "\nngay sinh: ";
	NgaySinh.Xuat();
	cout << "\ndiem toan: " << Toan;
	cout << "\ndiem van: " << Van;
	cout << "\ndiem anh: " << Anh;
}
float Candidate::Tong()
{
	return Toan + Van + Anh;
}

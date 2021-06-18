#include "Sach.h"


istream& operator >>(istream& is, Sach& a) {
	cout << "Nhap so luong sach: ";
	is >> a.Soluong;
	cin.ignore();
	cout << "Nhap ten sach: ";
	getline(is, a.Ten);
	cout << "Nhap ten tac gia: ";
	getline(is, a.TenTacGia);
	cout << "Nhap nha xuat ban: ";
	getline(is, a.NhaXuatBan);
	cout << "Nhap nam xuat ban: ";
	is >> a.NamXuatBan;
	return is;
}
ostream& operator <<(ostream& os, const Sach& a) {
	os << "\nSo luong sach: " << a.Soluong;
	os << "\nTen sach: " << a.Ten;
	os << "\nTen tac gia: " << a.TenTacGia;
	os << "\nNha xuat ban: " << a.NhaXuatBan;
	os << "\nNam xuat ban: " << a.NamXuatBan;
	return os;
}
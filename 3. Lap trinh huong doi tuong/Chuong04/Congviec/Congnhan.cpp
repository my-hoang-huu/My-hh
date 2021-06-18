#include "Congnhan.h"
void Congnhan::Nhap() {
	People::Nhap();
	cin.ignore();
	cout << "Nhap ten cong ty: ";
	getline(cin, Congty);
	cout << "Nhap ngay vao lam: ";
	Ngayvaolam.Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> Songaylamviec;
}
void Congnhan::Xuat() {
	cout << "\nThong tin cong nhan: ";
	People::Xuat();
	cout << "\n	Ten cong ty: " << Congty;
	cout << "\n	Ngay vao lam: ";
	Ngayvaolam.Xuat();
	cout << "\n	Luong:	" << Tinhluong();
}
double Congnhan::Tinhluong() {
	return Songaylamviec * 100000;
}
#include "Hocsinh.h"
void Hocsinh::Nhap() {
	People::Nhap();
	cin.ignore();
	cout << "Nhap truong: ";
	getline(cin, Truong);
	cout << "Nhap lop: ";
	getline(cin, Lop);
	cout << "Nhap nam hoc: ";
	cin >> Namhoc;
	cin.ignore();
	cout << "Nhap giao vien chu nhiem: ";
	getline(cin, GVChunhiem);
}
void Hocsinh::Xuat() {
	cout << "\nThong tin hoc sinh: ";
	People::Xuat();
	cout << "\n	Truong: " << Truong;
	cout << "\n	Lop: " << Lop;
	cout << "\n	Nam hoc: " << Namhoc;
	cout << "\n	Giao vien chu nhiem: " << GVChunhiem;
}
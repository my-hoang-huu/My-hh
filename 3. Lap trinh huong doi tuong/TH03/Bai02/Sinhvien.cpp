#include "Sinhvien.h"
void Sinhvien::Nhap() {
	People::Nhap();
	cout << "Nhap MSSV: ";
	cin >> MSSV;
	cin.ignore();
	cout << "Nhap truong: ";
	getline(cin, Truong);
	cout << "Nhap lop: ";
	getline(cin, Lop);
	cout << "Nam bat dau hoc: ";
	cin >> Nambatdauhoc;
	cout << "Nhap nam hoc: ";
	cin >> Namhoc;
	cin.ignore();
	cout << "Nhap he dao tao: ";
	getline(cin, Hedaotao);
	cout << "Nhap nganh dao tao: ";
	getline(cin, Nganhdaotao);
}
void Sinhvien::Xuat() {
	cout << "\nThong tin sinh vien: ";
	People::Xuat();
	cout << "\n	MSSV: " << MSSV;
	cout << "\n	Truong: " << Truong;
	cout << "\n	Lop: " << Lop;
	cout << "\n	Nam bat dau hoc: " << Nambatdauhoc;
	cout << "\n	Nam hoc: " << Namhoc;
	cout << "\n	He dao tao: " << Hedaotao;
	cout << "\n	Nganh dao tao: " << Nganhdaotao;
}
#include"Quanly.h"

int main() {

	Quanly a;
	cout << "Cau a\n---------- NHAP ----------\n";
	a.Nhap();
	cout << "\n---------- XUAT ----------";
	a.Xuat();
	cout << "\nCau b\n---------- SO LUONG SINH VIEN TOT NGHIEP ----------";
	cout << "\nSO LUONG " << a.Totnghiep();
	cout << "\nCau c\n---------- SINH VIEN DAI HOC CO DIEM TRUNG BINH CAO NHAT ----------";
	a.maxDiemtrungbinh();
	return 1;
}
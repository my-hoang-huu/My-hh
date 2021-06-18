#include"Quanly.h"

int main() {
	cout << "--------------- NHAP ---------------";
	Quanly a;
	a.Nhap();
	cout << "\n--------------- XUAT ---------------";
	a.Xuat();
	cout << "\n--------------- THEM SACH ---------------";
	a.Them();
	cout << "\n--------------- GIA CAO NHAT ---------------";
	a.MaxGia();
	cout << "\n--------------- SAP XEP GIA GIAM DAN ---------------";
	a.GiaGiamDan();
	a.Xuat();

	return 1;
}
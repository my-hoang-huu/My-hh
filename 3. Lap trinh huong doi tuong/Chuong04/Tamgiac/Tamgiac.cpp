#include "Tamgiac.h"

#include<cmath>

void Tamgiac::Nhap() {
	cout << "\n\nNhap toa do cac dinh tam giac: ";
	cout << "\nNhap dinh 1:";
	a.Nhap();
	cout << "\nNhap dinh 2:";
	b.Nhap();
	cout << "\nNhap dinh 3:";
	c.Nhap();
}
void Tamgiac::Xuat() {
	cout << "\nDinh thu 1:";
	a.Xuat();
	cout << "\nDinh thu 2:";
	b.Xuat();
	cout << "\nDinh thu 3:";
	c.Xuat();
}
istream& operator>>(istream& is, Tamgiac& t) {
	cout << "\n\nNhap toa do cac dinh tam giac: ";
	cout << "\nNhap dinh 1:";
	t.a.Nhap();
	cout << "\nNhap dinh 2:";
	t.b.Nhap();
	cout << "\nNhap dinh 3:";
	t.c.Nhap();
	return is;
}
ostream& operator<<(ostream& os, Tamgiac t) {
	cout << "\nDinh thu 1:" << t.a;
	cout << "\nDinh thu 2:" << t.b;
	cout << "\nDinh thu 3:" << t.c;
	return os;
}
Tamgiac Tamgiac::TinhTien(float x, float y) {
	Diem aa = a.TinhTien(x, y);
	Diem bb = b.TinhTien(x, y);
	Diem cc = c.TinhTien(x, y);
	return Tamgiac(aa, bb, cc);
}
Tamgiac Tamgiac::QuayQuanhTamO(float angle) {
	Diem aa = a.Quay(angle);
	Diem bb = b.Quay(angle);
	Diem cc = c.Quay(angle);
	return Tamgiac(aa, bb, cc);
}
Tamgiac Tamgiac::QuayQuanhDiemI(Diem I, float angle) {
	Diem aa = a.QuayI(I, angle);
	Diem bb = b.QuayI(I, angle);
	Diem cc = c.QuayI(I, angle);
	return Tamgiac(aa, bb, cc);
}
Tamgiac Tamgiac::ThuPhong(float k) {
	Diem aa(a.GetX() * k, a.GetY() * k);
	Diem bb(b.GetX() * k, b.GetY() * k);
	Diem cc(c.GetX() * k, c.GetY() * k);
	return Tamgiac(aa, bb, cc);
}

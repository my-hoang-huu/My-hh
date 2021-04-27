#include "Tamgiac.h"
#include<cmath>

void Tamgiac::Nhap() {
	cout << "\n\nNhap toa do cac dinh tam giac f";
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

void Tamgiac::TinhTien(float x, float y) {
	a.TinhTien(x, y);
	b.TinhTien(x, y);
	c.TinhTien(x, y);
}
void Tamgiac::Quay(float angle) {
	a.Quay(angle);
	b.Quay(angle);
	c.Quay(angle);
}
void Tamgiac::PhongTo(float k) {
	a.setXY(a.getX() * k, a.getY() * k);
	b.setXY(b.getX() * k, b.getY() * k);
	c.setXY(c.getX() * k, c.getY() * k);
}
void Tamgiac::ThuNho(float k) {
	a.setXY(a.getX() / k, a.getY() / k);
	b.setXY(b.getX() / k, b.getY() / k);
	c.setXY(c.getX() / k, c.getY() / k);
}
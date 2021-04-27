#include "Dagiac.h"




Dagiac::Dagiac(int a) {
	Sodinh = a;
	Dinh = new Diem[a];
	for (int i = 0; i < 3; i++)
	{
		Dinh[i].setXY(0.0, 0.0);
	}
}
Dagiac::Dagiac(const Dagiac& a) {
	Sodinh = a.Sodinh;
	Dinh = new Diem[Sodinh];
	for (int i = 0; i < a.Sodinh; i++)
	{
		Dinh[i] = a.Dinh[i];
	}
}
void Dagiac::Nhap() {
	cout << "\nNhap so dinh cua da giac: ";
	cin >> Sodinh;
	Dinh = new Diem[Sodinh];
	for (int i = 0; i < Sodinh; i++)
	{
		cout << "\nNhap toa do dinh " << i + 1;
		Dinh[i].Nhap();
	}
}
void Dagiac::Xuat() {
	for (int i = 0; i < Sodinh; i++)
	{
		cout << "\nDinh " << i + 1;
		Dinh[i].Xuat();
	}
}

void Dagiac::TinhTien(float a, float b) {
	for (int i = 0; i < this->Sodinh; i++)
	{
		this->Dinh[i].TinhTien(a, b);
	}
}
void Dagiac::Quay(float angle) {
	for (int i = 0; i < this->Sodinh; i++)
	{
		this->Dinh[i].Quay(angle);
	}
}
void Dagiac::PhongTo(float a) {
	for (int i = 0; i < this->Sodinh; i++)
	{
		this->Dinh[i].setX(Dinh[i].getX() * a);
		this->Dinh[i].setY(Dinh[i].getY() * a);
	}
}
void Dagiac::ThuNho(float a) {
	for (int i = 0; i < Sodinh; i++)
	{
		this->Dinh[i].setX(Dinh[i].getX() / a);
		this->Dinh[i].setY(Dinh[i].getY() / a);
	}
}
Dagiac::~Dagiac() {
	this->Sodinh = 0;
	delete[] this->Dinh;
	cout << "\nHAM HUY DUOC GOI";
}
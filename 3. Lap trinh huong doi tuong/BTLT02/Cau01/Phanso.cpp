#include "Phanso.h"

Phanso& Phanso::operator = (const Phanso& b) {
	tu = b.tu;
	mau = b.mau;
	return *this;
}
void Phanso::Nhap() {
	do
	{
		cout << "\nNhap tu va mau: \n";
		cin >> tu >> mau;
		if (!isPhanso())
			cout << "\nMau phai khac khong. Vui long nhap lai!";
	} while (!isPhanso());
}
void Phanso::Xuat() {
	cout << tu << "/" << mau;
}
bool Phanso::isPhanso() {
	if (mau == 0)
		return false;
	return true;
}
int Phanso::GetTu() { return tu; }
int Phanso::GetMau() { return mau; }
void Phanso::SetT(int a) {
	tu = a;
}
void Phanso::SetM(int a) {
	mau = a;
}
bool Phanso::operator==(Phanso b) {
	if (tu / mau == b.tu / b.mau)
		return true;
	return false;
}
istream& operator>> (istream& is, Phanso& a) {
	do
	{
		cout << "\nNhap tu va mau: \n";
		is >> a.tu >> a.mau;
		if (!a.isPhanso())
			cout << "\nMau phai khac khong. Vui long nhap lai!";
	} while (!a.isPhanso());
	return is;
}
ostream& operator<< (ostream& os, Phanso a) {
	os << a.tu << "/" << a.mau;
	return os;
}
Phanso& Phanso::operator++() { //++a
	tu += mau;
	return *this;
}
Phanso Phanso::operator++(int) {//a++
	Phanso t = *this;
	tu += mau;
	return t;
}
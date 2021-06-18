#include "Phanso.h"


Phanso& Phanso::operator = (const Phanso& b) {
	tu = b.tu;
	mau = b.mau;
	return *this;
}
void Phanso::Nhap() {
	cout << "\nNhap tu va mau: \n";
	cin >> tu >> mau;
}
void Phanso::Xuat() {
	cout << tu << "/" << mau;
}
int Phanso::GetTu() { return tu; }
int Phanso::GetMau() { return mau; }
void Phanso::SetT(int a) {
	tu = a;
}
void Phanso::SetM(int a) {
	mau = a;
}
double operator+(Phanso a, Phanso b) {
	Phanso c;
	c.tu = a.tu * b.mau + a.mau * b.tu;
	c.mau = a.mau * b.mau;
	return c;
}
//Phanso Phanso::Tong(Phanso b) {
//	Phanso c;
//	c.tu = tu * b.mau + mau * b.tu;
//	c.mau = mau * b.mau;
//	return c;
//}
//Phanso Phanso::Tong(int n) {
//	Phanso c;
//	c.SetT(GetTu() + n * GetMau());
//	c.mau = mau;
//	return c;
//}
//Phanso Tong(int n, Phanso b)
//{
//	Phanso c;
//	c.tu = b.tu + n * b.mau;
//	c.mau = b.mau;
//	return c;
//}
//Phanso Phanso::operator+ (Phanso b) {
//	Phanso c;
//	c.tu = tu * b.mau + mau * b.tu;
//	c.mau = mau * b.mau;
//	return c;
//}
//Phanso Phanso::operator+ (int n) {
//	Phanso c;
//	c.SetT(GetTu() + n * GetMau());
//	c.mau = mau;
//	return c;
//}
//Phanso operator+ (int n, Phanso b)
//{
//	Phanso c;
//	c.tu = b.tu + n * b.mau;
//	c.mau = b.mau;
//	return c;
//}
Phanso Phanso::operator- (Phanso b) {
	Phanso c;
	c.tu = tu * b.mau - mau * b.tu;
	c.mau = mau * b.mau;
	return c;
}
Phanso Phanso::operator- (int n) {
	Phanso c;
	c.SetT(GetTu() - n * GetMau());
	c.mau = mau;
	return c;
}
Phanso operator- (int n, Phanso b)
{
	Phanso c;
	c.tu = n * b.mau - b.tu;
	c.mau = b.mau;
	return c;
}
bool Phanso::operator==(Phanso b) {
	if (tu / mau == b.tu / b.mau)
		return true;
	return false;
}
istream& operator>> (istream& is, Phanso& a) {
	cout << "\nNhap tu va mau: \n";
	is >> a.tu >> a.mau;
	return is;
}
ostream& operator<< (ostream& os, Phanso a) {
	os << a.tu << "/" << a.mau;
	return os;
}
//void Phanso::Tong(Phanso a, int n) {}
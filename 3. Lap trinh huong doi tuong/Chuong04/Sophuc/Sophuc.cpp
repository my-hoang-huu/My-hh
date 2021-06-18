#include "Sophuc.h"
#include "Phanso.h"


istream& operator>> (istream& is, Sophuc& a) {
	cout << "\nNhap phan thuc: ";
	is >> a.thuc;
	cout << "Nhap phan ao: ";
	is >> a.ao;
	return is;
}
ostream& operator<<(ostream& os, Sophuc a) {
	os << "\nSo phuc vua nhap: " << a.thuc;
	if (a.ao >= 0)
		cout << " + " << a.ao << "i";
	else
		cout << " - " << a.ao * -1 << "i";
	return os;
}
float Sophuc::BinhPhuongModun() {
	float m;
	m = thuc * thuc + ao * ao;
	return m;
}
Sophuc Sophuc::operator+(Sophuc b) {
	Sophuc c;
	c.thuc = thuc + b.thuc;
	c.ao = ao + b.ao;
	return c;
}
Sophuc Sophuc::operator-(Sophuc b) {
	Sophuc c;
	c.thuc = thuc - b.thuc;
	c.ao = ao - b.ao;
	return c;
}
Sophuc Sophuc::operator*(Sophuc b)
{
	Sophuc c;
	c.thuc = thuc * ao - b.thuc * b.ao;
	c.ao = thuc * b.ao + b.thuc * ao;
	return c;
}
Sophuc Sophuc::operator/(Sophuc b)
{
	Sophuc c;
	c.thuc = (thuc * ao + b.thuc * b.ao) / (ao * ao + b.ao * b.ao);
	c.ao = (ao * b.thuc - thuc * b.ao) / (ao * ao + b.ao * b.ao);
	return c;
}
bool Sophuc::operator==(Sophuc b) {
	if (thuc == b.thuc && ao == b.ao)
		return true;
	return false;
}
bool Sophuc::operator>(Sophuc b) {
	if (BinhPhuongModun() > b.BinhPhuongModun())
		return true;
	return false;
}


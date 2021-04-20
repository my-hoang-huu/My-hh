#include "Sophuc.h"
void Sophuc::Nhap()
{
	cout << "\nNhap phan thuc: ";
	cin >> thuc;
	cout << "Nhap phan ao: ";
	cin >> ao;
}
void Sophuc::Xuat()
{
	cout << thuc << "+ " << ao << "i";
}
Sophuc Sophuc::Cong(Sophuc b)
{
	Sophuc c;
	c.thuc = thuc + b.thuc;
	c.ao = ao + b.ao;
	return c;
}
Sophuc Sophuc::Tru(Sophuc b)
{
	Sophuc c;
	c.thuc = thuc - b.thuc;
	c.ao = ao - b.ao;
	return c;
}
Sophuc Sophuc::Nhan(Sophuc b)
{
	Sophuc c;
	c.thuc = thuc * ao - b.thuc * b.ao;
	c.ao = thuc * b.ao + b.thuc * ao;
	return c;
}
Sophuc Sophuc::Chia(Sophuc b)
{
	Sophuc c;
	c.thuc = (thuc * ao + b.thuc * b.ao) / (ao * ao + b.ao * b.ao);
	c.ao = (ao * b.thuc - thuc * b.ao) / (ao * ao + b.ao * b.ao);
	return c;
}
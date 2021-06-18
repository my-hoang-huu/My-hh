#include "Dagiac.h"


Dagiac::Dagiac(int a) {
	Sodinh = a;
	Dinh = new Diem[a];
	for (int i = 0; i < 3; i++)
	{
		Dinh[i].SetXY(0.0, 0.0);
	}
}
Dagiac::Dagiac(const Dagiac& a) {
	//delete[]Dinh;  vi ham khoi tao mac dinh da cho dinh  =  nullptr,do do khong can thuc hien don bo nho;
	//buoc tren de don dep vung nho cu!
	Sodinh = a.Sodinh;
	Dinh = new Diem[Sodinh];
	for (int i = 0; i < a.Sodinh; i++)
	{
		Dinh[i] = a.Dinh[i];
	}
	cout << "\nHAM KHOI TAO SAO CHEP DUOC GOI!\n";
}
Dagiac& Dagiac::operator=(const Dagiac& a) {
	cout << "\nHAM GAN: DIA CHI THIS VA a(d0) " << this << "(this)  " << &a << "(&a)\n";
	delete[]Dinh;
	if (&a == this)
	{
		return *this;
	}
	Sodinh = a.Sodinh;
	Dinh = new Diem[Sodinh];
	for (int i = 0; i < a.Sodinh; i++)
	{
		Dinh[i] = a.Dinh[i];
	}
	return *this;
}
bool Dagiac::IsDinhTrungNhau() {
	for (int i = 0; i < Sodinh - 1; i++)
	{
		for (int j = 1; j < Sodinh; j++)
		{
			if (Dinh[i] == Dinh[j])
			{
				return false;
			}
		}
	}
	return true;
}
Diem Dagiac::GetDinh(int n) {
	return Dinh[n];
}
Diem Dagiac::operator[](int n) {
	return Dinh[n];
}
float Dagiac::GetToaDoX(int n) {
	return Dinh[n].GetX();
}
float Dagiac::GetToaDoY(int n) {
	return Dinh[n].GetY();
}
void Dagiac::SetDinh(int n, float xx, float yy) {
	Dinh[n].SetXY(xx, yy);
}
void Dagiac::SetToaDoX(int n, float xx) {
	Dinh[n].SetX(xx);
}
void Dagiac::SetToaDoY(int n, float yy) {
	Dinh[n].SetY(yy);
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
istream& operator>>(istream& is, Dagiac& d) {
	cout << "\nNhap so dinh cua da giac: ";
	is >> d.Sodinh;
	d.Dinh = new Diem[d.Sodinh];
	for (int i = 0; i < d.Sodinh; i++)
	{
		cout << "\nNhap toa do dinh " << i + 1;
		d.Dinh[i].Nhap();
	}
	return is;
}
ostream& operator<<(ostream& os, const Dagiac& d) {
	for (int i = 0; i < d.Sodinh; i++)
	{
		os << "\nDinh " << i + 1;
		d.Dinh[i].Xuat();
	}
	return os;
}
Dagiac Dagiac::TinhTien(float a, float b) {
	Dagiac d = *this;
	for (int i = 0; i < this->Sodinh; i++)
	{
		d.Dinh[i] = Dinh[i].TinhTien(a, b); //Dinh[i].TinhTien(a, b) tra ve Dinh moi, Dinh cu giu nguyen,
	}
	return d;	                           // do do this->Dinh[i].TinhTien(angle) se giu nguyen gia tri cua Dinh ban dau.
}                                         // Dinh[i] = Dinh[i].TinhTien(a, b);  se thay doi dinh ban dau
Dagiac Dagiac::QuayQuanhTamO(float angle) {
	Dagiac d = *this;
	for (int i = 0; i < this->Sodinh; i++)
	{
		d.Dinh[i] = Dinh[i].Quay(angle);
	}
	cout << "\nHAM QUAY: DIA CHI THIS (d1) VA d " << this << "(this)  " << &d << "(&d)\n";
	return d;
}
Dagiac Dagiac::QuayQuanhDiemI(Diem I, float angle) {
	Dagiac d = *this;
	for (int i = 0; i < this->Sodinh; i++)
	{
		d.Dinh[i] = Dinh[i].QuayI(I, angle);
	}
	return d;
}
Dagiac Dagiac::ThuPhong(float a) {
	Dagiac d = *this;
	for (int i = 0; i < Sodinh; i++)
	{
		d.Dinh[i].SetXY(Dinh[i].GetX() * a, Dinh[i].GetY() * a);
	}
	return d;
}
Dagiac::~Dagiac() {
	this->Sodinh = 0;
	delete[] this->Dinh;
	cout << "HAM HUY DUOC GOI\n";
}
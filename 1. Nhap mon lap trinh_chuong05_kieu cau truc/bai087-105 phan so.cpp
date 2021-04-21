#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct PHANSO
{
	int Tu;
	int Mau;
};
void Nhap(PHANSO&);
void Xuat(PHANSO);
int UCLN(int, int);
void RutGon(PHANSO&);
PHANSO Tong(PHANSO, PHANSO);
PHANSO Hieu(PHANSO, PHANSO);
PHANSO Tich(PHANSO, PHANSO);
PHANSO Thuong(PHANSO, PHANSO);
PHANSO operator+(PHANSO, PHANSO);
PHANSO operator-(PHANSO, PHANSO);
PHANSO operator*(PHANSO, PHANSO);
PHANSO operator/(PHANSO, PHANSO);

bool CoNghia(PHANSO&);
void ToiGian(PHANSO);
void Duong(PHANSO);
void QuyDongMau(PHANSO&, PHANSO&);
void QuyDongTu(PHANSO&, PHANSO&);
void SoSanh(PHANSO, PHANSO);

int main()
{
	PHANSO A;
	cout << "Bai 088: Nhap phan so A: ";
	cout << "\nBai 095: Phan so A co nghia khong? Ket qua: ";
	Nhap(A);
	cout << "Phan so co nghia\n";
	cout << "\nBai 089: Phan so A: ";
	Xuat(A);
	RutGon(A);
	cout << "\nBai 090: Phan so A sau khi rut gon la: ";
	Xuat(A);
	PHANSO B;
	cout << "\n\nNhap phan so B: ";
	Nhap(B);
	PHANSO S = Tong(A, B);
	RutGon(S);
	cout << "\nBai 091: Tong 2 phan so A va B la: ";
	Xuat(S);
	PHANSO H = Hieu(A, B);
	cout << "\nBai 092: Hieu 2 phan so A va B la: ";
	Xuat(H);
	PHANSO K = Tich(A, B);
	cout << "\nBai 093: Tich 2 phan so A va B la: ";
	Xuat(K);
	PHANSO L = Thuong(A, B);
	cout << "\nBai 094: Thuong 2 phan so A va B la: ";
	Xuat(L);
	cout << "\nPhan so B co toi gian khong? Ket qua: ";
	ToiGian(B);
	cout << "\nBai 095, 096: Phan so A la phan so Duong hay Am? Ket qua: ";
	Duong(A);
	PHANSO X, Y;
	cout << "\nNhap phan so X: ";
	Nhap(X);
	cout << "\nNhap phan so Y: ";
	Nhap(Y);
	cout << "\nPhan so :";
	cout << "\nX: ";
	Xuat(X);
	cout << "\nY: ";
	Xuat(Y);
	PHANSO M = X;
	PHANSO N = Y;
	cout << "\nBai 099: Sau khi quy dong mau so: ";
	QuyDongMau(X, Y);
	cout << "\nX: ";
	Xuat(X);
	cout << "\nY: ";
	Xuat(Y);
	cout << "\nBai 100: Sau khi quy dong tu so: ";
	QuyDongTu(M, N);
	cout << "\nX: ";
	Xuat(M);
	cout << "\nY: ";
	Xuat(N);
	cout << "\nBai 101: So sanh hai phan so X va Y. Ket qua: ";
	SoSanh(X, Y);
	PHANSO W = X + Y;
	cout << "\nBai 102: Tong phan so X va Y tinh bang operator + : ";
	Xuat(W);
	cout << endl;
	return 1;
}
void Nhap(PHANSO& a)
{
	do
	{
		cout << "\nNhap tu: ";
		cin >> a.Tu;
		cout << "Nhap mau: ";
		cin >> a.Mau;
		if (a.Mau == 0)
		{
			cout << "Phan so khong co nghia, mau so phai khac 0. Vui long kiem tra va nhap lai!\n";
		}
	} while (a.Mau == 0);

}
void Xuat(PHANSO a)
{
	cout << a.Tu << "/" << a.Mau;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}
void RutGon(PHANSO& a)
{
	int u = UCLN(a.Tu, a.Mau);
	a.Tu = a.Tu / u;
	a.Mau = a.Mau / u;
}
PHANSO Tong(PHANSO a, PHANSO b)
{
	PHANSO s;
	s.Tu = (a.Tu * b.Mau + b.Tu * a.Mau);
	s.Mau = a.Mau * b.Mau;
	RutGon(s);
	return s;
}
PHANSO Hieu(PHANSO a, PHANSO b)
{
	PHANSO s;
	s.Tu = (a.Tu * b.Mau - b.Tu * a.Mau);
	s.Mau = a.Mau * b.Mau;
	RutGon(s);
	return s;
}
PHANSO Tich(PHANSO a, PHANSO b)
{
	PHANSO s;
	s.Tu = a.Tu * b.Tu;
	s.Mau = a.Mau * b.Mau;
	return s;
}
PHANSO Thuong(PHANSO a, PHANSO b)
{
	PHANSO s;
	s.Tu = a.Tu * b.Mau;
	s.Mau = a.Mau * b.Tu;
	return s;
}
bool CoNghia(PHANSO& a)
{
	if (a.Mau != 0)
		return true;
	return false;
}
void Duong(PHANSO a)
{
	if (a.Tu * a.Mau > 0)
		cout << "Phan so Duong";
	else
	{
		if (a.Tu * a.Mau < 0)
			cout << "Phan so Am";
	}
}
void ToiGian(PHANSO a)
{
	if (UCLN(a.Tu, a.Mau) == 1)
		cout << "Co";
	else
		cout << "Khong";
}
void QuyDongMau(PHANSO& a, PHANSO& b)
{
	int mc = a.Mau * b.Mau;
	a.Tu = a.Tu * b.Mau;
	b.Tu = b.Tu * a.Mau;
	a.Mau = mc;
	b.Mau = mc;
}
void QuyDongTu(PHANSO& a, PHANSO& b)
{
	int tc = a.Tu * b.Tu;
	a.Mau = a.Mau * b.Tu;
	b.Mau = b.Mau * a.Tu;
	a.Tu = tc;
	b.Tu = tc;
}
void SoSanh(PHANSO a, PHANSO b)
{
	float x = (float)a.Tu / a.Mau;
	float y = (float)b.Tu / b.Mau;
	if (x > y)
		cout << "Phan so dau lon hon phan so sau";
	else
	{
		if (x < y)
			cout << "Phan so dau nho hon phan so sau";
		else
			cout << "Hai phan so bang nhau";
	}
}
PHANSO operator+(PHANSO a, PHANSO b)
{
	PHANSO s;
	s.Tu = (a.Tu * b.Mau + b.Tu * a.Mau);
	s.Mau = a.Mau * b.Mau;
	RutGon(s);
	return s;
}
PHANSO operator-(PHANSO a, PHANSO b)
{
	PHANSO s;
	s.Tu = (a.Tu * b.Mau - b.Tu * a.Mau);
	s.Mau = a.Mau * b.Mau;
	RutGon(s);
	return s;
}
PHANSO operator*(PHANSO a, PHANSO b)
{
	PHANSO s;
	s.Tu = a.Tu * b.Tu;
	s.Mau = a.Mau * b.Mau;
	RutGon(s);
	return s;
}
PHANSO operator/(PHANSO a, PHANSO b)
{
	PHANSO s;
	s.Tu = a.Tu * b.Mau;
	s.Mau = a.Mau * b.Tu;
	RutGon(s);
	return s;
}
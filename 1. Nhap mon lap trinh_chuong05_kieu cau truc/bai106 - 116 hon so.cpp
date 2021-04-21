#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct HONSO
{
	int Nguyen;
	int Tu;
	int Mau;
};
void Nhap(HONSO&);
void Xuat(HONSO);
int UCLN(int, int);
void RutGon(HONSO&);
HONSO Tong(HONSO, HONSO);
HONSO Hieu(HONSO, HONSO);
HONSO Tich(HONSO, HONSO);
HONSO Thuong(HONSO, HONSO);
void ToiGian(HONSO);
void QuyDongMau(HONSO&, HONSO&);
void QuyDongTu(HONSO&, HONSO&);

int main()
{
	HONSO A;
	cout << "Bai 107: Nhap Hon so A: ";
	cout << "\nBai 095: Hon so A co nghia khong? Ket qua: ";
	Nhap(A);
	cout << "Hon so co nghia\n";
	cout << "\nBai 108: Hon so A: ";
	Xuat(A);
	RutGon(A);
	cout << "\nBai 109: Hon so A sau khi rut gon la: ";
	Xuat(A);
	HONSO B;
	cout << "\n\nNhap Hon so B: ";
	Nhap(B);
	HONSO S = Tong(A, B);
	cout << "\nBai 110: Tong 2 Hon so A va B la: ";
	Xuat(S);
	HONSO H = Hieu(A, B);
	cout << "\nBai 110: Hieu 2 Hon so A va B la: ";
	Xuat(H);
	HONSO K = Tich(A, B);
	cout << "\nBai 112: Tich 2 Hon so A va B la: ";
	Xuat(K);
	HONSO L = Thuong(A, B);
	cout << "\nBai 113: Thuong 2 Hon so A va B la: ";
	Xuat(L);
	cout << "\nBai 114: Hon so B co toi gian khong? Ket qua: ";
	ToiGian(B);
	HONSO X, Y;
	cout << "\nNhap Hon so X: ";
	Nhap(X);
	cout << "\nNhap Hon so Y: ";
	Nhap(Y);
	cout << "\nHon so :";
	cout << "\nX: ";
	Xuat(X);
	cout << "\nY: ";
	Xuat(Y);
	HONSO M = X;
	HONSO N = Y;
	cout << "\nBai 115: Sau khi quy dong mau so: ";
	QuyDongMau(X, Y);
	cout << "\nX: ";
	Xuat(X);
	cout << "\nY: ";
	Xuat(Y);
	cout << "\nBai 116: Sau khi quy dong tu so: ";
	QuyDongTu(M, N);
	cout << "\nX: ";
	Xuat(M);
	cout << "\nY: ";
	Xuat(N);
	cout << endl;
	return 1;
}
void Nhap(HONSO& a)
{
	do
	{
		cout << "\nNhap phan nguyen: ";
		cin >> a.Nguyen;
		cout << "Nhap tu: ";
		cin >> a.Tu;
		cout << "Nhap mau: ";
		cin >> a.Mau;
		if (a.Mau == 0)
		{
			cout << "Hon so khong co nghia, mau so phai khac 0. Vui long kiem tra va nhap lai!\n";
		}
	} while (a.Mau == 0);
}
void Xuat(HONSO a)
{
	cout << a.Nguyen << " " << a.Tu << "/" << a.Mau;
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
void RutGon(HONSO& a)
{
	int u = UCLN(a.Tu, a.Mau);
	a.Tu = a.Tu / u;
	a.Mau = a.Mau / u;
	a.Nguyen = a.Nguyen + a.Tu / a.Mau;
	a.Tu = a.Tu % a.Mau;
}
HONSO Tong(HONSO a, HONSO b)
{
	HONSO s;
	s.Nguyen = a.Nguyen + b.Nguyen;
	s.Tu = (a.Tu * b.Mau + b.Tu * a.Mau);
	s.Mau = a.Mau * b.Mau;
	RutGon(s);
	return s;
}
HONSO Hieu(HONSO a, HONSO b)
{
	HONSO s;
	s.Nguyen = a.Nguyen - b.Nguyen;
	s.Tu = (a.Tu * b.Mau - b.Tu * a.Mau);
	s.Mau = a.Mau * b.Mau;
	RutGon(s);
	return s;
}
HONSO Tich(HONSO a, HONSO b)
{
	a.Tu = a.Nguyen * a.Mau + a.Tu;
	a.Nguyen = 0;
	b.Tu = b.Nguyen * b.Mau + b.Tu;
	b.Nguyen = 0;
	HONSO s;
	s.Tu = a.Tu * b.Tu;
	s.Mau = a.Mau * b.Mau;
	s.Nguyen = 0;
	RutGon(s);
	return s;
}
HONSO Thuong(HONSO a, HONSO b)
{
	a.Tu = a.Nguyen * a.Mau + a.Tu;
	a.Nguyen = 0;
	b.Tu = b.Nguyen * b.Mau + b.Tu;
	b.Nguyen = 0;
	HONSO s;
	s.Tu = a.Tu * b.Mau;
	s.Mau = a.Mau * b.Tu;
	s.Nguyen = 0;
	RutGon(s);
	return s;
}
void ToiGian(HONSO a)
{
	if (UCLN(a.Tu, a.Mau) == 1 && a.Tu / a.Mau == 0)
		cout << "Co";
	else
		cout << "Khong";
}
void QuyDongMau(HONSO& a, HONSO& b)
{
	int mc = a.Mau * b.Mau;
	a.Tu = a.Tu * b.Mau;
	b.Tu = b.Tu * a.Mau;
	a.Mau = mc;
	b.Mau = mc;
}
void QuyDongTu(HONSO& a, HONSO& b)
{
	int tc = a.Tu * b.Tu;
	a.Mau = a.Mau * b.Tu;
	b.Mau = b.Mau * a.Tu;
	a.Tu = tc;
	b.Tu = tc;
}


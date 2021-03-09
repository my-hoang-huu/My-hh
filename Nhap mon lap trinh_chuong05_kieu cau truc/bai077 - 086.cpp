#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
struct DIEM
{
	float x;
	float y;
};
struct DUONGTHANG
{
	float a;
	float b;
	float c;
};
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCachDiem(DUONGTHANG, DIEM);
void KtThuoc(DUONGTHANG, DIEM);
void KtTrung(DUONGTHANG, DUONGTHANG);
void SongSong(DUONGTHANG, DUONGTHANG);
void Cat(DUONGTHANG, DUONGTHANG);
DIEM GiaoDiem(DUONGTHANG, DUONGTHANG);
void VuongGoc(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG d;
	cout << "Bai 078: Nhap duong thang d:";
	Nhap(d);
	cout << "\nBai 079: Duong thang d: ";
	Xuat(d);
	DIEM M;
	cout << "\nNhap diem M: ";
	Nhap(M);
	cout << "\nBai 080: Khoang cach giua diem M va duong thang d: " << KhoangCachDiem(d, M);
	cout << "\nBai 081: Diem M co thuoc duong thang d khong?\nKet qua: ";
	KtThuoc(d, M);
	DUONGTHANG h;
	cout << "\nNhap duong thang h:";
	Nhap(h);
	cout << "\nBai 082: Hai duong thang d va h co trung nhau khong? Ket qua: ";
	KtTrung(d, h);
	cout << "\nBai 083: Hai duong thang d va h co song song khong? Ket qua: ";
	SongSong(d, h);
	cout << "\nBai 084: Hai duong thang d va h co cat nhau khong? Ket qua: ";
	Cat(d, h);
	DIEM I = GiaoDiem(d, h);
	cout << "\nBai 085: Giao diem hai duong thang d va h la diem I";
	Xuat(I);
	cout << "\nBai 086: Hai duong thang d va h co vuong goc voi nhau khong? Ket qua: ";
	VuongGoc(d, h);
	cout << endl;
	return 1;
}
void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}
void Xuat(DUONGTHANG d)
{
	cout << d.a << "x + " << d.b << "y + " << d.c << " = 0";
}
void Nhap(DIEM& a)
{
	cout << "\nNhap x :";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}
void Xuat(DIEM a)
{
	cout << "(" << a.x << ";" << a.y << ")\n";
}

float KhoangCachDiem(DUONGTHANG d, DIEM m)
{
	return abs(d.a * m.x + d.b * m.y + d.c) / sqrt(d.a * d.a + d.b * d.b);
}
void KtThuoc(DUONGTHANG d, DIEM m)
{
	if (d.a * m.x + d.b * m.y + d.c == 0)
		cout << "Thuoc";
	else
		cout << "Khong thuoc";	
}
void KtTrung(DUONGTHANG m, DUONGTHANG n)
{
	float D = m.a * n.b - n.a * m.b;
	float Dx = -m.c * n.b + n.c * m.b;
	float Dy = -m.a * n.c + n.a * m.c;
	if (D == 0 && Dx == 0)
		cout << "Co.";
	else
		cout << "Khong";
}
void SongSong(DUONGTHANG m, DUONGTHANG n)
{
	float D = m.a * n.b - n.a * m.b;
	float Dx = -m.c * n.b + n.c * m.b;
	float Dy = -m.a * n.c + n.a * m.c;
	if (D == 0 && Dx != 0)
		cout << "Co.";
	else
		cout << "Khong";
}
void Cat(DUONGTHANG m, DUONGTHANG n)
{
	float D = m.a * n.b - n.a * m.b;
	if (D != 0)
		cout << "Co.";
	else
		cout << "Khong";
}
DIEM GiaoDiem(DUONGTHANG m, DUONGTHANG n)
{
	float D = m.a * n.b - n.a * m.b;
	float Dx = -m.c * n.b + n.c * m.b;
	float Dy = -m.a * n.c + n.a * m.c;
	DIEM temp;
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}
void VuongGoc(DUONGTHANG m, DUONGTHANG n)
{
	if ((m.a * n.a + m.b * n.b) == 0)
		cout << "Co";
	else
		cout << "Khong";
}

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct THOIGIAN
{
	int Gio;
	int Phut;
	int Giay;
};

void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);
THOIGIAN KeTiep(THOIGIAN);
THOIGIAN LienTruoc(THOIGIAN);
int SoThuTu(THOIGIAN);
int KhoangCach(THOIGIAN, THOIGIAN);
int SoSanh(THOIGIAN, THOIGIAN);


int main()
{
	THOIGIAN A;
	cout << "Bai 127: Nhap Thoi gian A: ";
	Nhap(A);
	cout << "\nBai 128: Thoi gian A: ";
	Xuat(A);
	THOIGIAN B = KeTiep(A);
	cout << "\nBai 129: Thoi gian o giay ke tiep thoi diem A: ";
	Xuat(B);
	THOIGIAN C = LienTruoc(A);
	cout << "\nBai 129: Thoi gian o giay Lien truoc thoi diem A: ";
	Xuat(C);
	cout << "\nBai 131: So thu tu giay o thoi diem A :" << SoThuTu(A);
	THOIGIAN H;
	Nhap(H);
	cout << "\nBai 132: Khoang cach thoi gian giua thoi diem A va thoi diem H la: " << KhoangCach(A, H) << " giay";
	cout << "\nBai 133: So sanh thoi gian A va H (quy uoc : -1 A nho hon H, 1 A lon hon H va 0 A = H)   Ket qua: " << SoSanh(A, H);

	cout << endl;
	return 1;
}
void Nhap(THOIGIAN& a)
{
	do
	{
		cout << "\nNhap gio: ";
		cin >> a.Gio;
		cout << "Nhap phut: ";
		cin >> a.Phut;
		cout << "Nhap giay: ";
		cin >> a.Giay;
		if (a.Gio < 0 || a.Gio > 23 || a.Phut < 0 || a.Phut > 59 || a.Giay < 0 || a.Giay > 59)
			cout << "\nThoi gian khong hop le. Cac gia tri phai thuoc doan Gio [0,23], Phut [0,59], Giay [0,59]. Vui long kiem tra va nhap lai";
	} while (a.Gio < 0 || a.Gio > 23 || a.Phut < 0 || a.Phut > 59 || a.Giay < 0 || a.Giay > 59);
}
void Xuat(THOIGIAN a)
{
	cout << a.Gio << "h " << a.Phut << "m " << a.Giay << "s ";
}
THOIGIAN KeTiep(THOIGIAN a)
{
	a.Giay++;
	if (a.Giay > 59)
	{
		a.Giay = 0;
		a.Phut++;
		if (a.Phut > 59)
		{
			a.Phut = 0;
			a.Gio++;
			if (a.Gio > 23)
			{
				a.Gio = 0;
			}
		}
	}
	return a;
}
THOIGIAN LienTruoc(THOIGIAN a)
{
	a.Giay--;
	if (a.Giay < 0)
	{
		a.Giay = 59;
		a.Phut--;
		if (a.Phut < 0)
		{
			a.Phut = 59;
			a.Gio--;
			if (a.Gio < 0)
			{
				a.Gio = 23;
			}
		}
	}
	return a;
}
int SoThuTu(THOIGIAN a)
{
	return a.Gio * 3600 + a.Phut * 60 + a.Giay;
}
int KhoangCach(THOIGIAN a, THOIGIAN b)
{
	return abs(SoThuTu(a) - SoThuTu(b));
}
int SoSanh(THOIGIAN a, THOIGIAN b)
{
	if (a.Gio > b.Gio)
		return 1;
	if (a.Gio < b.Gio)
		return -1;
	if (a.Phut > b.Phut)
		return 1;
	if (a.Phut < b.Phut)
		return -1;
	if (a.Giay > b.Giay)
		return 1;
	if (a.Giay < b.Giay)
		return -1;
	return 0;
}


#include<iostream>
#include<iomanip>
#define pi 3.14;
using namespace std;
struct DIEM
{
	float x;
	float y;
};
struct DUONGTRON
{
	DIEM I;
	float r;
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
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
float ChuVi(DUONGTRON);
float DienTich(DUONGTRON);
float KhoangCach(DIEM, DIEM);
bool KiemTraThuoc(DUONGTRON, DIEM);
void KiemTraViTri(DUONGTRON, DIEM);
void KiemTraViTri(DUONGTRON, DUONGTHANG);
float KhoangCach(DIEM, DUONGTHANG);
int ViTriTuongDoi(DUONGTRON, DUONGTRON);
int main()
{
	DUONGTRON A;
	cout << "Bai 145: Nhap tam va ban kinh duong tron A: ";
	Nhap(A);
	cout << "Bai 146: Duong tron A vua nhap co: ";
	Xuat(A);
	cout << "\nBai 147: Duong tron A co chu vi: " << ChuVi(A);
	cout << "\nBai 148: Hinh tron A co dien tich: " << DienTich(A);
	DIEM M;
	cout << "\nNhap toa do diem M: ";
	Nhap(M);
	cout << "\nBai 149: Diem M co thuoc duong tron a khong (quy uoc: 1 Thuoc , 0 khong thuoc).   Ket qua: " << KiemTraThuoc(A, M);
	cout << "\nBai 150: Vi tri tuong doi giua diem M va duong tron A.   Ket qua: ";
	KiemTraViTri(A, M);
	DUONGTHANG d;
	cout << "\nNhap duong thang d";
	Nhap(d);
	cout << "\nBai 151: Vi tri tuong doi giua duong thang d va duong tron A.   Ket qua: ";
	KiemTraViTri(A, d);
	DUONGTRON B;
	cout << "\nNhap duong tron B: ";
	Nhap(B);
	cout << "\nBai 152: Vi tri tuong doi giua duong tron A va duong tron B (0. Trung nhau, 1. Roi nhau, 2. Tiep xuc ngoai, 3. Cat nhau, 4. Tiep xuc trong, 5. Chua trong nhau). Ket qua: " << ViTriTuongDoi(A, B);
	cout << endl;
	return 1;
}
void Nhap(DIEM& P)
{
	cout << "\nx = ";
	cin >> P.x;
	cout << "y = ";
	cin >> P.y;
}
void Nhap(DUONGTRON& O)
{
	cout << "\nNhap toa do tam I: ";
	Nhap(O.I);
	do
	{
		cout << "\nNhap ban kinh r = ";
		cin >> O.r;
		if (O.r <= 0)
		{
			cout << "\nGia tri ban kinh phai lon hon 0. Vui long kiem tra va nhap lai!";
		}
	} while (O.r <= 0);
}
void Xuat(DIEM P)
{
	cout << "(" << P.x << "," << P.y << ")";
}
void Xuat(DUONGTRON P)
{
	cout << "\nTam I";
	Xuat(P.I);
	cout << "\nVa ban kinh: " << P.r << endl;
}
float ChuVi(DUONGTRON a)
{
	return 2 * a.r * pi;
}
float DienTich(DUONGTRON a)
{
	return a.r * a.r * pi;
}
float KhoangCach(DIEM a, DIEM b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
bool KiemTraThuoc(DUONGTRON a, DIEM m)
{
	if (KhoangCach(m, a.I) <= a.r)
		return true;
	return false;
}
void KiemTraViTri(DUONGTRON a, DIEM m)
{
	float k = KhoangCach(m, a.I);
	if (k <= a.r)
	{
		if (k < a.r)
		{
			cout << "Diem da cho nam trong duong tron.";
		}
		else
		{
			cout << "Diem da cho nam tren duong tron.";
		}
	}
	else
	{
		cout << "Diem da cho khong thuoc duong tron.";
	}
}
void Nhap(DUONGTHANG& a)
{
	cout << "\na = ";
	cin >> a.a;
	cout << "b = ";
	cin >> a.b;
	cout << "c = ";
	cin >> a.c;
}
float KhoangCach(DIEM m, DUONGTHANG d)
{
	float l = abs(d.a * m.x + d.b * m.y + d.c) / sqrt(d.a * d.a + d.b * d.b);
	return l;
}
void KiemTraViTri(DUONGTRON o, DUONGTHANG d)
{
	float k = KhoangCach(o.I, d);
	if (k <= o.r)
	{
		if (k < o.r)
		{
			cout << "Duong thang da cho cat duong tron tai 2 diem.";
		}
		else
		{
			cout << "Duong thang da cho tiep xuc voi duong tron.";
		}
	}
	else
	{
		cout << "Duong thang da cho khong cat duong tron.";
	}
}
int ViTriTuongDoi(DUONGTRON a, DUONGTRON b)
{
	if (a.I.x == b.I.x && a.I.y == b.I.y && a.r == b.r)
		return 0;
	if (KhoangCach(a.I, b.I) > a.r + b.r)
		return 1;
	if (KhoangCach(a.I, b.I) == a.r + b.r)
		return 2;
	if (KhoangCach(a.I, b.I) < a.r + b.r)
	{
		if (KhoangCach(a.I, b.I) > abs(a.r - b.r))
			return 3;
		if (KhoangCach(a.I, b.I) == abs(a.r - b.r))
			return 4;
		if (KhoangCach(a.I, b.I) < abs(a.r - b.r))
			return 5;
	}
}


#include<iostream>
#include<iomanip>
using namespace std;
struct DIEM
{
	float x;
	float y;
};
void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCach(DIEM, DIEM);
float KhoangCachOx(DIEM, DIEM);
float KhoangCachOy(DIEM, DIEM);
float KhoangCachO(DIEM);
DIEM DoiXung(DIEM);
DIEM DoiXungOx(DIEM);
DIEM DoiXungOy(DIEM);
DIEM DoiXungPhanGiac1(DIEM);
DIEM DoiXungPhanGiac2(DIEM);
void Trung(DIEM, DIEM);
void PhanTuThu1(DIEM);
void PhanTuThu2(DIEM);
void PhanTuThu3(DIEM);
void PhanTuThu4(DIEM);

int main()
{
	DIEM A, B;
	cout << "Bai 048, 049:\nNhap toa do diem A";
	Nhap(A);
	cout << "Diem A";
	Xuat(A);
	cout << "\nNhap toa do diem B";
	Nhap(B);
	cout << "Diem B";
	Xuat(B);
	float d = KhoangCach(A, B);
	cout << "\nBai 050:\nKhoang cach 2 diem A va B la: " << d << endl;
	float dx = KhoangCachOx(A, B);
	cout << "\nBai 051:\nKhoang cach 2 diem A va B theo truc Ox la: " << dx << endl;
	float dy = KhoangCachOy(A, B);
	cout << "\nBai 052:\nKhoang cach 2 diem A va B theo truc Oy la: " << dy << endl;
	float m = KhoangCachO(A);
	cout << "\nBai 053:\nKhoang cach tu A den tam O la: " << m << endl;
	DIEM C = DoiXung(A);
	cout << "\nBai 054:\nDoi xung voi A qua goc toa do la diem C";
	Xuat(C);
	DIEM D = DoiXungOx(A);
	cout << "\nBai 055:\nDoi xung voi A qua truc Ox la diem D";
	Xuat(D);
	DIEM E = DoiXungOy(A);
	cout << "\nBai 056:\nDoi xung voi A qua truc Oy la diem E";
	Xuat(E);
	DIEM F = DoiXungPhanGiac1(A);
	cout << "\nBai 057:\nDoi xung voi A qua duong phan giac thu 1 la diem F";
	Xuat(F);
	DIEM H = DoiXungPhanGiac2(A);
	cout << "\nBai 058:\nDoi xung voi A qua duong phan giac thu 2 la diem H";
	Xuat(H);
	cout << "\nBai 059: Diem A co trung voi diem B khong?\nKet qua ";
	Trung(A, B);
	cout << "\nBai 060: A co thuoc phan tu thu I khong?\nKet qua ";
	PhanTuThu1(A);
	cout << "\nBai 061: A co thuoc phan tu thu II khong?\nKet qua ";
	PhanTuThu2(A);
	cout << "\nBai 062: A co thuoc phan tu thu III khong?\nKet qua ";
	PhanTuThu3(A);
	cout << "\nBai 063: A co thuoc phan tu thu IV khong?\nKet qua ";
	PhanTuThu4(A);
	cout << endl;
	return 1;
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
DIEM DoiXung(DIEM a)
{
	DIEM C;
	C.x = -a.x;
	C.y = -a.y;
	return C;
}
float KhoangCach(DIEM a, DIEM b)
{
	float d = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
	return d;
}
float KhoangCachOx(DIEM a, DIEM b)
{
	float d = abs(a.x - b.x);
	return d;
}
float KhoangCachOy(DIEM a, DIEM b)
{
	return abs(a.y - b.y);
}
float KhoangCachO(DIEM a)
{
	return sqrt((a.x * a.x) + (a.y * a.y));
}
DIEM DoiXungOx(DIEM a)
{
	DIEM m;
	m.x = a.x;
	m.y = -a.y;
	return m;
}
DIEM DoiXungOy(DIEM a)
{
	DIEM m;
	m.x = - a.x;
	m.y = a.y;
	return m;
}
DIEM DoiXungPhanGiac1(DIEM a)
{
	DIEM m;
	m.x = a.y;
	m.y = a.x;
	return m;
}
DIEM DoiXungPhanGiac2(DIEM a)
{
	DIEM m;
	m.x = - a.y;
	m.y = - a.x;
	return m;
}
void Trung(DIEM a, DIEM b)
{
	if (a.x == b.x && a.y == b.y)
		cout << "Trung nhau";
	else
		cout << "Khong trung nhau";
}
void PhanTuThu1(DIEM a)
{
	if (a.x > 0 && a.y > 0)
		cout << "Co";
	else
		cout << "Khong";
}
void PhanTuThu2(DIEM a)
{
	if (a.x < 0 && a.y > 0)
		cout << "Co";
	else
		cout << "Khong";
}
void PhanTuThu3(DIEM a)
{
	if (a.x < 0 && a.y < 0)
		cout << "Co";
	else
		cout << "Khong";
}
void PhanTuThu4(DIEM a)
{
	if (a.x > 0 && a.y < 0)
		cout << "Co";
	else
		cout << "Khong";
}
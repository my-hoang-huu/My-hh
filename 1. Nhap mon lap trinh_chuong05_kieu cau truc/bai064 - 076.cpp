#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
struct DIEM
{
	float x;
	float y;
	float z;
};
void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCach(DIEM, DIEM);
float KhoangCachOx(DIEM, DIEM);
float KhoangCachOy(DIEM, DIEM);
float KhoangCachOz(DIEM, DIEM);
float KhoangCachO(DIEM);
DIEM DoiXung(DIEM);
DIEM DoiXungOxy(DIEM);
DIEM DoiXungOxz(DIEM);
DIEM DoiXungOyz(DIEM);
void Trung(DIEM, DIEM);

int main()
{
	DIEM A, B;
	cout << "Bai 065, 066:\nNhap toa do diem A";
	Nhap(A);
	cout << "Diem A";
	Xuat(A);
	cout << "\nNhap toa do diem B";
	Nhap(B);
	cout << "Diem B";
	Xuat(B);
	float d = KhoangCach(A, B);
	cout << "\nBai 067:\nKhoang cach 2 diem A va B la: " << d << endl;
	float dx = KhoangCachOx(A, B);
	cout << "\nBai 068:\nKhoang cach 2 diem A va B theo truc Ox la: " << dx << endl;
	float dy = KhoangCachOy(A, B);
	cout << "\nBai 069:\nKhoang cach 2 diem A va B theo truc Oy la: " << dy << endl;
	float dz = KhoangCachOz(A, B);
	cout << "\nBai 070:\nKhoang cach 2 diem A va B theo truc Oz la: " << dz << endl;
	float m = KhoangCachO(A);
	cout << "\nBai 071:\nKhoang cach tu A den tam O la: " << m << endl;
	DIEM C = DoiXung(A);
	cout << "\nBai 072:\nDoi xung voi A qua goc toa do la diem C";
	Xuat(C);
	DIEM D = DoiXungOxy(A);
	cout << "\nBai 073:\nDoi xung voi A qua truc Oxy la diem D";
	Xuat(D);
	DIEM E = DoiXungOxz(A);
	cout << "\nBai 074:\nDoi xung voi A qua truc Oxz la diem E";
	Xuat(E);
	DIEM W = DoiXungOyz(A);
	cout << "\nBai 075:\nDoi xung voi A qua truc Oyz la diem W";
	Xuat(W);
	cout << "\nBai 076: Diem A co trung voi diem B khong?\nKet qua ";
	Trung(A, B);
	return 0;
}
void Nhap(DIEM& a)
{
	cout << "\nNhap x :";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
	cout << "Nhap z: ";
	cin >> a.z;
}
void Xuat(DIEM a)
{
	cout << "(" << a.x << ";" << a.y << ";" << a.z << ")\n";
}
float KhoangCach(DIEM a, DIEM b)
{
	float d = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z));
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
float KhoangCachOz(DIEM a, DIEM b)
{
	return abs(a.z - b.z);
}
float KhoangCachO(DIEM a)
{
	return sqrt((a.x * a.x) + (a.y * a.y) + (a.z * a.z));
}
DIEM DoiXung(DIEM a)
{
	DIEM C;
	C.x = -a.x;
	C.y = -a.y;
	C.z = -a.z;
	return C;
}
DIEM DoiXungOxy(DIEM a)
{
	DIEM m;
	m.x = a.x;
	m.y = a.y;
	m.z = - a.z;
	return m;
}
DIEM DoiXungOxz(DIEM a)
{
	DIEM m;
	m.x = a.x;
	m.y = -a.y;
	m.z = a.z;
	return m;
}
DIEM DoiXungOyz(DIEM a)
{
	DIEM m;
	m.x = -a.x;
	m.y = a.y;
	m.z = a.z;
	return m;
}
void Trung(DIEM a, DIEM b)
{
	if (a.x == b.x && a.y == b.y && a.z == b.z)
		cout << "Trung nhau";
	else
		cout << "Khong trung nhau";
}
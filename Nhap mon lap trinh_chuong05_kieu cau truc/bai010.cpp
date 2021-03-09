#include<iostream>
#include<iomanip>
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
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
int main()
{
	DUONGTRON A;
	Nhap(A);
	Xuat(A);
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
	cout << "Nhap tam va ban kinh duong tron: ";
	cout << "\nNhap toa do tam I: ";
	Nhap(O.I);
	cout << "\nNhap ban kinh r = ";
	cin >> O.r;
}
void Xuat(DIEM P)
{
	cout << "(" << P.x << "," << P.y << ")";
}
void Xuat(DUONGTRON P)
{
	cout << "\nDuong tron vua nhap co: \nTam I";
	Xuat(P.I);
	cout << "\nVa ban kinh: " << P.r << endl;
}

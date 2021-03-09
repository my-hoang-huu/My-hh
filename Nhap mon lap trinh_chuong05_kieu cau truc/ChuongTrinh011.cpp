#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
struct DIEM
{
	float x;
	float y;
};
struct TAMGIAC
{
	DIEM A;
	DIEM B;
	DIEM C;
};
void Nhap(DIEM&);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);
void Xuat(DIEM);
float KhoangCach(DIEM, DIEM);
float ChuVi(TAMGIAC);
float DienTich(TAMGIAC);
DIEM TrongTam(TAMGIAC);

int main()
{
	TAMGIAC M;
	cout << "Nhap cac dinh tam giac M: ";
	Nhap(M);
	float s = DienTich(M);
	cout << "Dien tich tam giac: " << s;
	DIEM G = TrongTam(M);
	cout << "\nTrong tam tam giac M la diem G";
	Xuat(G);
	cout << endl;
	return 1;
}
void Nhap(DIEM& a)
{
	cout << "Nhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}
void Xuat(DIEM a)
{
	cout << "(" << a.x << ";" << a.y << ")";
}
void Nhap(TAMGIAC& a)
{
	cout << "\nNhap toa do dinh A\n";
	Nhap(a.A);
	cout << "\nNhap toa do dinh B\n";
	Nhap(a.B);
	cout << "\nNhap toa do dinh C\n";
	Nhap(a.C);
}
float KhoangCach(DIEM a, DIEM b)
{
	float d = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
	return d;
}
float ChuVi(TAMGIAC a)
{
	float p = KhoangCach(a.A, a.B) + KhoangCach(a.A, a.C) + KhoangCach(a.B, a.C);
	return p;
}
float DienTich(TAMGIAC a)
{
	float pn = ChuVi(a) / 2;
	float s = sqrt(pn * (pn - KhoangCach(a.A, a.B)) * (pn - KhoangCach(a.A, a.C)) * (pn - KhoangCach(a.B, a.C)));
	return s;
}
DIEM TrongTam(TAMGIAC a)
{
	DIEM G;
	G.x = (a.A.x + a.B.x + a.C.x) / 3;
	G.y = (a.A.y + a.B.y + a.C.y) / 3;
	return G;
}

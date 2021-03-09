#include<iostream>
#include<iomanip>
using namespace std;
struct DIEMKHONGGIAN
{
	float x;
	float y;
	float z;
};
struct HINHCAU
{
	DIEMKHONGGIAN I;
	float r;
};
void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
void Nhap(HINHCAU&);
void Xuat(HINHCAU);
int main()
{
	HINHCAU A;
	Nhap(A);
	Xuat(A);
	return 1;
}
void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nx = ";
	cin >> P.x;
	cout << "y = ";
	cin >> P.y;
	cout << "z = ";
	cin >> P.z;
}
void Nhap(HINHCAU& O)
{
	cout << "Nhap tam va ban kinh hinh cau: ";
	cout << "\nNhap toa do tam I: ";
	Nhap(O.I);
	cout << "\nNhap ban kinh r = ";
	cin >> O.r;
}
void Xuat(DIEMKHONGGIAN P)
{
	cout << "(" << P.x << "," << P.y << "," << P.z << ")";
}
void Xuat(HINHCAU P)
{
	cout << "\nHinh cau vua nhap co: \nTam I";
	Xuat(P.I);
	cout << "\nVa ban kinh: " << P.r << endl;
}

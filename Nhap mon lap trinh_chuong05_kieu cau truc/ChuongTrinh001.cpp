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
DIEM DoiXung(DIEM);
float KhoangCach(DIEM, DIEM);
int main()
{
	DIEM A, B;
	cout << "Cau 1:\nNhap toa do diem A";
	Nhap(A);
	cout << "Diem A";
	Xuat(A);
	cout << "\nNhap toa do diem B";
	Nhap(B);
	cout << "Diem B";
	Xuat(B);
	DIEM C = DoiXung(A);
	cout << "\nCau 2:\nDiem Doi xung voi A qua goc toa do C";
	Xuat(C);
	float d = KhoangCach(A, B);
	cout << "\nCau 3:\nKhoang cach 2 diem A va B la: " << d << endl;
	return 1;
}
void Nhap(DIEM& a)
{
	cout<< "\nNhap x :";
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
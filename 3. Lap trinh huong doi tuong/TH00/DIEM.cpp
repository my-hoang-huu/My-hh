#include "DIEM.h"


void DIEM::Nhap()
{
	cout << "\nnhap x:";
	cin >> x;
	cout << "nhap y: ";
	cin >> y;
}

void DIEM::Xuat()
{
	cout << "(" << x << ";" << y << ") ";
}
float DIEM::Khoangcach(DIEM b)
{
	float d;
	d = sqrt((x-b.x)*(x - b.x) + (y - b.y)*(y - b.y));
	return d;
}
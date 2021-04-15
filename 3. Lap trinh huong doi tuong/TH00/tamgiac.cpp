#include "tamgiac.h"

void tamgiac:: Nhap()
{
	cout << "\nDinh A:";
	a.Nhap();
	cout << "Dinh B:";
	b.Nhap();
	cout << "Dinh C:";
	c.Nhap();

}
void tamgiac::Xuat()
{
	cout << "Tam giac vua nhap co 3 dinh:	";
	cout << "Dinh A:";
	a.Xuat();
	cout << "Dinh B:";
	b.Xuat();
	cout << "Dinh C:";
	c.Xuat();
}
float tamgiac::Chuvi()
{
	float d = a.Khoangcach(b) + a.Khoangcach(c) + c.Khoangcach(b);
	return d;
}

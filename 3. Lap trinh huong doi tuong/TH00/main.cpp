#include "DIEM.h"
#include "Hinhtron.h"
#include "tamgiac.h"
int main()
{
	DIEM a, b;
	cout << "nhap A:";
	a.Nhap();
	cout << "nhap B:";
	b.Nhap();
	a.Xuat();
	b.Xuat();
	float d = a.Khoangcach(b);
	cout << "Khang cach: " << d;
	Hinhtron o;
	cout << "\nduong tron:";
	o.Nhap();
	cout << "duong tron vua nhap:";
	o.Xuat();
	float c = o.Chuvi();
	cout << "\nchu vi duong tron: " << c;

	tamgiac t;
	cout << "\nNhap tam giac: ";
	t.Nhap();
	cout << "tam giac vua nhap: ";
	t.Xuat();
	float cv = t.Chuvi();
	cout << "chu vi tam giac: " << cv;
	cout << endl;
	system("pause");
	return 1;
}
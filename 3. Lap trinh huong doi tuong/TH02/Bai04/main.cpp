#include "Dathuc.h"

int main()
{
	Dathuc a;
	cout << "Nhap DA THUC A: ";
	a.Nhap();
	cout << "\n----\nDA THUC A sau khi dieu chinh tai bac 2 voi gia tri 5";
	a.Set(2, 5);
	a.Xuat();
	Dathuc c;
	cout << "\n----\nNhap DA THUC C: ";
	c.Nhap();
	cout << "\nDA THUC C vua nhap: ";
	c.Xuat();
	cout << "\n\n----\nTong hai DA THUC A va C";
	a.Cong(c).Xuat();
	cout << "\n\n----\nHieu hai DA THUC A va C";
	a.Tru(c).Xuat();


	cout << endl;
	return 0;
}
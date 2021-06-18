#include"Ellipse.h"
#include"Hinhtron.h"

int main() {
	cout << "\n--------------- ELIP ---------------\n";
	Ellipse e;
	cout << "Nhap va xuat elip e: ";
	e.Nhap();
	e.Xuat();
	cout << "\n--------------- HINH TRON ---------------\n";
	Hinhtron o;
	cout << "Nhap duong tron O: ";
	o.Nhap();
	cout << "\nDuong tron vua nhap: ";
	o.Xuat();
	cout << "\nDien tich duong tron O: " << o.Dientich();
	cout << endl;
	return 1;
}
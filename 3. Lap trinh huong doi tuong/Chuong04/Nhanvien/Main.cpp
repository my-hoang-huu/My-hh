#include"Nhanvien.h"
#include"NhanvienSX.h"
#include"NhanvienVP.h"
int main()
{
	NhanvienSX a;
	NhanvienVP b;
	cout << "Nhap du lieu cho nhan vien san xuat a: ";
	a.Nhap();
	cout << "\nNhan vien van phong b: ";
	cin.ignore();
	b.Nhap();
	cout << "\nThong tin: \nNhan vien a:	";
	a.Xuat();
	cout << "\n\nNhan vien b: ";
	b.Xuat();

	cout << endl;
	return 1;
}


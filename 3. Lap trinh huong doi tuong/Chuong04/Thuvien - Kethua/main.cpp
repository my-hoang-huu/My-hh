#include"Thuvien.h"
int main() {
	cout << "--------------- NHAP ---------------\n";
	Thuvien t;
	t.Nhap();
	cout << "\n--------------- XUAT ---------------";
	t.Xuat();
	cout << "\n------------------\nDau sach giao khoa gia cao nhat: ";
	t.XuatGiaokhoaMaxGia();

	cout << endl;
	return 1;
}
#include"Tamgiac.h"
#include"Vuong.h"
#include"Array.h"

void XulyDagiac();

int main() {
	int flag;
	Array arr;
	do
	{
		cout << "\n\n -------------- LUA CHON ----------------- ";
		cout << "\nBai 01, 02: ";
		cout << "\n1-Nhap xuat va tinh tien da giac";
		cout << "\nBai 03";
		cout << "\n2-Nhap mang da giac";
		cout << "\n3-Xuat mang da giac da nhap";
		cout << "\n4-Tinh tien va xuat mang sau tinh tien";
		cout << "\n5-THOAT!\n";
		while (cin >> flag && flag != 1 && flag != 2 && flag != 3 && flag != 4 && flag != 5)
		{
			cout << "\nChi nhap cac gia tri 1 den 5. Vui long nhap lai: ";
		}
		switch (flag)
		{
		case 1: {
			XulyDagiac();
			break;
		}
		case 2: {
			cout << "\n\n------------ NHAP MANG ------------";
			arr.Nhap();
			break;
		}
		case 3: {
			cout << "\n------------ XUAT MANG ------------";
			arr.Xuat();
			break;
		}
		case 4: {
			cout << "\n\n------------ TINH TIEN MANG ------------";
			Array rr = arr;
			float xx, yy;
			cout << "\nNhap gia tri tinh tien theo truc Ox va Oy: ";
			cin >> xx >> yy;
			rr.TinhTien(xx, yy);
			cout << "\n\nMang da giac sau khi tinh tien:";
			rr.Xuat();
			break;
		}
		default:
			break;
		}
	} while (flag != 5);

	return 1;
}
void XulyDagiac() {
	int flag;
	do
	{
		cout << "\n\n--------------\n-- Nhap lua chon ---";
		cout << "\n0. Tam giac";
		cout << "\n1. Tu giac";
		cout << "\n2. Hinh binh hanh";
		cout << "\n3. Hinh chu nhat";
		cout << "\n4. Hinh vuong";
		cout << "\n5.THOAT!\n";
		while (cin >> flag && flag != 0 && flag != 1 && flag != 2 && flag != 3 && flag != 4 && flag != 5)
		{
			cout << "\nChi nhap cac gia tri 0 den 5. Vui long nhap lai: ";
		}
		switch (flag)
		{
		case 0: {
			cout << "\nNhap toa do cac dinh: ";
			Tamgiac a;
			a.Nhap();
			a.Xuat();
			float xx, yy;
			cout << "\nNhap gia tri tinh tien theo truc Ox va Oy: ";
			cin >> xx >> yy;
			cout << "\nSau tinh tien: ";
			a.Tinhtien(xx, yy).Xuat();
			break;
		}
		case 1: {
			cout << "\nNhap toa do cac dinh: ";
			Tugiac a;
			a.Nhap();
			a.Xuat();
			float xx, yy;
			cout << "\nNhap gia tri tinh tien theo truc Ox va Oy: ";
			cin >> xx >> yy;
			cout << "\nSau tinh tien: ";
			a.Tinhtien(xx, yy).Xuat();
			break;
		}
		case 2: {
			cout << "\nNhap toa do cac dinh: ";
			Binhhanh a;
			a.Nhap();
			a.Xuat();
			float xx, yy;
			cout << "\nNhap gia tri tinh tien theo truc Ox va Oy: ";
			cin >> xx >> yy;
			cout << "\nSau tinh tien: ";
			a.Tinhtien(xx, yy).Xuat();
			break;
		}
		case 3: {
			cout << "\nNhap toa do cac dinh: ";
			Chunhat a;
			a.Nhap();
			a.Xuat();
			float xx, yy;
			cout << "\nNhap gia tri tinh tien theo truc Ox va Oy: ";
			cin >> xx >> yy;
			cout << "\nSau tinh tien: ";
			a.Tinhtien(xx, yy).Xuat();
			break;
		}
		case 4: {
			cout << "\nNhap toa do cac dinh: ";
			Vuong a;
			a.Nhap();
			a.Xuat();
			float xx, yy;
			cout << "\nNhap gia tri tinh tien theo truc Ox va Oy: ";
			cin >> xx >> yy;
			cout << "\nSau tinh tien: ";
			a.Tinhtien(xx, yy).Xuat();
			break;
		}
		default:
			break;
		}
	} while (flag != 5);


}
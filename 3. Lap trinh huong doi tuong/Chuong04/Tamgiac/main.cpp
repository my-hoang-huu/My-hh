//#include"Diem.h"
//#include"Tamgiac.h"
//
//int main() {
//	cout << "-----------------[DIEM]-----------------";
//	Diem a, b;
//	cout << "\nNhap toa do diem a: ";
//	cin >> a;
//	Diem c = a;
//	cout << "---\nToa do diem a truoc va sau khi tinh tien 5 don vi tung va hoanh do: \n";
//	cout << c << endl;
//	b = a.TinhTien(5, 5);
//	cout << b;
//
//	cout << "\n\n-----------------[TAMGIAC]-----------------";
//	Tamgiac t1, t2, t3;
//	cin >> t1;
//	cout << "---\nTam giac t1 sau khi phong to 10 lan: ";
//	t2 = t1.ThuPhong(10);
//	t2.Xuat();
//	cout << "---\nTam giac t1 sau khi tinh tien 10 don vi tung va hoanh do: ";
//	t3 = t1.TinhTien(10, 10);
//	cout << t3;
//	Diem I(2, 2);
//	cout << "\n---\nTam giac t1 sau khi quay quanh tam O 90 do: ";
//	cout << t1.QuayQuanhTamO(90);
//	cout << "\n---\nTam giac t1 sau khi quay quanh tam I(2,2) 90 do: ";
//	cout << t1.QuayQuanhDiemI(I, 90);
//
//
//
//
//	cout << endl;
//	return 1;
//}

#include<iostream>
using namespace std;

int main()
{
	cout << "\nDia chi o nho la & , day cung chinh la gia tri con tro!\nGia tri con tro dang giu la  *  ";
	int* a = new int(6);
	int z = 2;
	cout << "\n--------\nKhoi tao bien con tro 	int* a = new int(6);\nint z = 2\nDia chi cua a: &a = " << &a;
	cout << "\nGia tri cua a = " << a;
	cout << "\nGia tri cua a dang giu *a = " << *a;
	int x = 3;
	int& y = x;
	a = &x;
	cout << "\n	Cho x = 3\n	int& y = x\n	a = &x";
	cout << "\n*x = LOI!!!!";
	cout << "\nDia chi cua x: &x = " << &x;
	cout << "\nGia tri cua a: a = " << a;
	cout << "\nDia chi cua a: &a = " << &a;
	cout << "\nz = " << z;
	x = 10;
	z *= x + 3;
	cout << "\nz = " << z;
	cout << "\nGia tri y  " << y;
	cout << "\nGia tri cua a " << *a;
	//int x = 2;
	//int y = 9;
	//int z = 4;
	//z = 2 * (++x) - y++;
	//cout << "\nz = " << z; //-7
	//cout << "\nx = " << x;//3
	//cout << "\ny = " << y;//10

	return 0;
}
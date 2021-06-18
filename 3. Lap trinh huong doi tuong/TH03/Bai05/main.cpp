#include"Tugiac.h"
#include"Thang.h"
#include"Binhhanh.h"
#include"Chunhat.h"
#include"Vuong.h"
#include<iostream>
using namespace std;
int main() {

	int CatchKey;
	do
	{
		cout << "\n-----------\nChon hinh can nhap bang cac phim tuong ung: ";
		cout << "\nPhim 0: Tu giac";
		cout << "\nPhim 1: Hinh thang";
		cout << "\nPhim 2: Hinh binh hanh";
		cout << "\nPhim 3: Hinh chu nhat";
		cout << "\nPhim 4: Hinh vuong";
		cout << "\nPhim 5: Thoat\n";
		/*cin >> CatchKey;*/
		while (cin >> CatchKey && CatchKey != 0 && CatchKey != 1 && CatchKey != 2 && CatchKey != 3 && CatchKey != 4 && CatchKey != 5)
		{
			cout << "Chi nhap gia tri trong day 1, 2, 3, 4, 5. Vui long nhap lai: ";
		}
		switch (CatchKey)
		{
		case 0: {
			cout << "----------------- TU GIAC -----------------\n";
			Tugiac a;
			a.Nhap();
			a.Xuat();
			break;
		}
		case 1: {
			cout << "\n\n----------------- HINH THANG -----------------\n";
			HThang b;
			b.Nhap();
			b.Xuat();
			break;
		}
		case 2: {
			cout << "\n\n----------------- HINH BINH HANH -----------------\n";
			Binhhanh c;
			c.Nhap();
			c.Xuat();
			break;
		}
		case 3: {
			cout << "\n\n----------------- HINH CHU NHAT -----------------\n";
			Chunhat d;
			d.Nhap();
			d.Xuat();
			break;
		}
		case 4: {
			cout << "\n\n----------------- HINH VUONG -----------------\n";
			Vuong e;
			e.Nhap();
			e.Xuat();
			break;
		}
		default:
			break;
		}
	} while (CatchKey != 5);
	cout << endl;
	return 0;
}
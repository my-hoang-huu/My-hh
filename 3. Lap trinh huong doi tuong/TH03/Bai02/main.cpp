#include"Hocsinh.h"
#include"Nguoi.h"
#include"Sinhvien.h"
#include"Congnhan.h"
#include"Nghesi.h"
#include"Casi.h"

int main() {
	int CatchKey;
	do
	{
		cout << "\n-----------\nChon doi tuong can nhap bang cac phim tuong ung: ";
		cout << "\nPhim 1: Hoc sinh";
		cout << "\nPhim 2: Sinh vien";
		cout << "\nPhim 3: Cong nhan";
		cout << "\nPhim 4: Nghe si";
		cout << "\nPhim 5: Ca si";
		cout << "\nPhim 6: Thoat\n";
		while (cin >> CatchKey && CatchKey != 6 && CatchKey != 1 && CatchKey != 2 && CatchKey != 3 && CatchKey != 4 && CatchKey != 5)
		{
			cout << "Chi nhap gia tri trong day 1,2,3,4,5,6. Vui long nhap lai: ";
		}
		switch (CatchKey)
		{
		case 1: {
			cout << "-------------- HOC SINH ---------------";
			Hocsinh a;
			a.Nhap();
			a.Xuat();
			break;
		}
		case 2: {
			cout << "\n-------------- SINH VIEN ---------------";
			Sinhvien b;
			b.Nhap();
			b.Xuat();
			break;
		}
		case 3: {
			cout << "\n-------------- CONG NHAN ---------------";
			Congnhan c;
			c.Nhap();
			c.Xuat();
			break;
		}
		case 4: {
			cout << "\n-------------- NGHE SI ---------------";
			Nghesi d;
			d.Nhap();
			d.Xuat();
			break;
		}
		case 5: {
			cout << "\n-------------- CA SI ---------------";
			Casi e;
			e.Nhap();
			e.Xuat();
			break;
		}
		default:
			break;
		}
	} while (CatchKey != 6);

	cout << endl;
	return 1;
}
// 02_03_04.
#include "dagiac.h"

int main()
{
	cout << "\n--------------------------------[Chuong trinh quan ly danh sach da giac]--------------------------------\n";
	danhsach list;
	int choose;
	do {
		cout << ">>> Nhap lua chon <<<\n";
		cout << "1. Nhap da giac\n";
		cout << "2. Xuat da giac\n";
		cout << "3. Tinh tien da giac\n";
		cout << "4. Thoat chuong trinh\n";
		cout << "Lua chon: ";
		while(cin >> choose && choose != 1 && choose !=2 && choose != 3 && choose != 4)
		{
			cout << "Lua chon ko hop le !!\n";
			cout << "Nhap lai: ";
		}
		system("cls");
		cout << "\n--------------------------------[Chuong trinh quan ly danh sach da giac]--------------------------------\n";
		switch (choose)
		{
		case 1:
			list.nhapdanhsach();
			break;
		case 2:
			list.xuatdanhsach();
			break;
		case 3:
			list.tinhtien();
			break;
		default:
			break;
		}
	} while (choose != 4);

	cout << "\n Have a good day !!\n";
	cout << endl;
	system("pause");
	return 1;
}
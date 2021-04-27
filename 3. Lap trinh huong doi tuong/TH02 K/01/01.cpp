//01.

#include <iostream>
#include "diem.h"
#include "tamgiac.h"
#include "dagiac.h"

int main()
{
	cout << "[]----------------------------------------[zone 1: diem]----------------------------------------[]\n";
	cout << "\n<|>--nhap 2 diem--<|>\n";
	diem* pointOXY = nullptr;
	pointOXY = new diem[2];

	for (int i = 0; i < 2; i++)
	{
		cout << "-Diem thu " << i + 1 << "-\n";
		pointOXY[i].nhap();
	}
	cout << "\n<|>--thong tin 2 diem--<|>\n";
	for (int i = 0; i < 2; i++)
	{
		cout << "-> Diem thu " << i + 1 << ": "; pointOXY[i].xuat(); cout << endl;
	}
	cout << "\n<|>--khoang cach 2 diem--<|>\n";
	float kc = pointOXY[0].khoangcach(pointOXY[1]);
	cout << "-> Kc= " << kc << endl;

	cout << "\n<|>--tinh tien diem 2 diem--<|>\n";
	cout << "  + Diem 1 sau khi tinh tien them (1,3): "; pointOXY[0].tinhtien(1.0, 3.0); pointOXY[0].xuat(); cout << endl;
	cout << "  + Diem 2 sau khi tinh tien them (4,8): "; pointOXY[1].tinhtien(4.0, 8.0); pointOXY[1].xuat(); cout << endl;

	cout << "\n<|>--quay diem 2 diem--<|>\n";
	cout << "  + Diem 1 sau khi quay goc (90 do): "; pointOXY[0].quay(90.0); pointOXY[0].xuat(); cout << endl;
	cout << "  + Diem 2 sau khi quay them (45 do): "; pointOXY[1].quay(45.0); pointOXY[1].xuat(); cout << endl;

	cout << "\n<|>--truy van 2 diem--<|>\n";
	cout << "  + Hoanh do cua diem 1: " << pointOXY[0].getterX() << endl;
	cout << "  + Tung do cua diem 1: " << pointOXY[0].getterY() << endl;
	cout << "  + Hoanh do cua diem 2: " << pointOXY[1].getterX() << endl;
	cout << "  + Tung do cua diem 2: " << pointOXY[1].getterY() << endl;

	cout << "\n<|>--cap nhat 2 diem--<|>\n";
	cout << "  + Diem 1 sau khi cap nhat (5,5): "; pointOXY[0].setterXY(5.0, 5.0); pointOXY[0].xuat(); cout << endl;
	cout << "  + Diem 2 sau khi cap nhat (12,4): "; pointOXY[1].setterXY(12.0, 4.0); pointOXY[1].xuat(); cout << endl;

	delete[]pointOXY;
	pointOXY = nullptr;

	cout << "\n[]----------------------------------------[zone 2: tamgiac]----------------------------------------[]\n";
	tamgiac tg;

	cout << "\n<|>--nhap tam giac--<|>\n";
	tg.nhap();

	cout << "\n<|>--thong tin tam giac--<|>\n";
	tg.xuat();

	cout << "\n<|>--tinh tien tam giac--<|>\n";
	cout << "- Tam giac sau khi tinh tien them (41,12)\n"; tg.tinhtien(4.0, 12.0); tg.xuat(); cout << endl;

	cout << "\n<|>--quay tam giac--<|>\n";
	cout << "- Tam giac sau khi quay goc (90 do)\n"; tg.quay(90.0); tg.xuat(); cout << endl;

	cout << "\n<|>--thu phong tam giac--<|>\n";
	cout << "- Tam giac sau khi phong to them 4 lan\n"; tg.zoom(4); tg.xuat(); cout << endl;
	cout << "- Tam giac sau khi thu nho lai 2 lan\n"; tg.zoom(0.5); tg.xuat(); cout << endl;

	cout << "\n[]----------------------------------------[zone 3: dagiac]----------------------------------------[]\n";
	dagiac dg;

	cout << "\n<|>--nhap da giac--<|>\n";
	dg.nhap();
	if (dg.getterArray() == nullptr)
	{
		cout << "So canh da giac phai >= 3 !!\n";
		return 1;
	}

	cout << "\n<|>--thong tin da giac--<|>\n";
	dg.xuat();

	cout << "\n<|>--tinh tien da giac--<|>\n";
	cout << "- Da giac sau khi tinh tien them (16,22)\n"; dg.tinhtien(0.0, 0.0); dg.xuat(); cout << endl;

	cout << "\n<|>--quay da giac--<|>\n";
	cout << "- Da giac sau khi quay goc (90 do)\n"; dg.quay(90.0); dg.xuat(); cout << endl;

	cout << "\n<|>--thu phong da giac--<|>\n";
	cout << "- Da giac sau khi phong to them 4 lan\n"; dg.zoom(4); dg.xuat(); cout << endl;
	cout << "- Da giac sau khi thu nho lai 2 lan\n"; dg.zoom(0.5); dg.xuat(); cout << endl;

	cout << endl;
	system("pause");
	return 1;
}
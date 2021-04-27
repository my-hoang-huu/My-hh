// 02.

#include "dathuc.h"

int main()
{
	dathuc a;
	a.nhap();
	dathuc b;
	b.nhap();

	cout << "\n<>------------------------------------[Thong tin 2 da thuc]------------------------------------<>\n";
	cout << "  + Da thuc a: ";
	a.xuat(); cout << endl;

	cout << "\n  + Da thuc b: ";
	b.xuat(); cout << endl;

	cout << "\n<>------------------------------------[Tong 2 da thuc]------------------------------------<>\n";
	dathuc tong(a.tong(b));
	tong.xuat(); cout << endl;

	cout << "\n<>------------------------------------[Hieu 2 da thuc]------------------------------------<>\n";
	dathuc hieu = a.hieu(b);
	hieu.xuat(); cout << endl;

	a.release();
	b.release();

	cout << endl;
	system("pause");
	return 0;
}


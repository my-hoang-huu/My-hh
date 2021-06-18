#include "Diem.h"
#include "Hinhtron.h"


int main() {
	//Diem a, c, d;
	//cout << "-----------------[DIEM]-----------------";
	//cout << "\nNhap d: ";
	//cin >> d;
	//cout << "\nDiem a va diem c (sao chep tu a) va diem d: ";
	////a.Xuat();
	//c = a;
	////c.Xuat();
	//cout << a << c << d;
	//cout << "\n--\nKiem tra trung: ";
	//switch (a == d)
	//{
	//case 1:
	//	cout << "\nDiem a trung diem d";
	//default:
	//	cout << "\nDiem a khac diem d";
	//	break;
	//}

	cout << "\n\n-----------------[HINHTRON]-----------------";
	Hinhtron o1(5, 2), o2, o3, o4;
	o2 = o1;
	cout << "\nNhap duong tron o3 va o4";
	cin >> o3 >> o4;
	cout << "\nCac duong tron o1, o2, o3, o4 vua khoi tao va nhap: \n";
	cout << o1 << o2 << o3 << o4;
	float f = o1.ChuVi();
	cout << "---\nChu vi duong tron o1: " << f;
	Diem O(0, 0);
	cout << "---\nVi tri tuong doi cua duong tron o1 va goc toa do: ";
	o1.KiemTraViTri(O);
	cout << "---\nVi tri tuong doi cua duong tron o3 va duong tron o4: ";
	int k = o3.ViTriTuongDoi(o4);
	switch (k)
	{
	case 0:
		cout << "Trung nhau. ";
		break;
	case 1:
		cout << "Roi nhau. ";
		break;
	case 2:
		cout << "Tiep xuc ngoai. ";
		break;
	case 3:
		cout << "Cat nhau. ";
		break;
	case 4:
		cout << "Tiep xuc trong. ";
		break;
	default:
		cout << "Chua trong nhau. ";
		break;
	}
	cout << endl;
	return 0;
}
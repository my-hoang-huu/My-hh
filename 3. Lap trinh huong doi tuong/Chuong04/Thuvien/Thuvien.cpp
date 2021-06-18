#include "Thuvien.h"


Thuvien::~Thuvien() {
	Sodausach = 0;
	delete[] Dausach;
	cout << "HAM HUY DUOC GOI THUC HIEN!";
}
void Thuvien::SetTenDausach() {
	Dausach->SetTen();
}
istream& operator >>(istream& is, Thuvien& t) {
	cout << "\nNhap so dau sach: ";
	is >> t.Sodausach;
	cout << endl;
	t.Dausach = new Sach[t.Sodausach];
	for (int i = 0; i < t.Sodausach; i++)
	{
		cin.ignore();
		is >> t.Dausach[i];
		cout << endl;
	}
	return is;
}
ostream& operator <<(ostream& os, const Thuvien& t) {
	for (int i = 0; i < t.Sodausach; i++)
	{
		os << t.Dausach[i] << endl;
	}
	return os;
}
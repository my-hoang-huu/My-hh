#include"Vector.h"

int main() {
	Vector v, c, w1;
	cout << v;
	cout << "Nhap vector v va c: ";
	cin >> v >> c;
	cout << "\nVector v vua nhap: ";
	cout << v;
	w1 = v;
	Vector w2 = v;
	cout << "\nDat lai gia tri thu 1 cua vector = 10";
	v.SetElement(1, 10);
	cout << "\nVector w va w2 sao chep tu v va dia chi cua w1, w2 va v: " << w1 << w2 << endl;
	cout << &w1 << "(w1)  " << &w2 << "(w2) " << &v << "(v)";
	cout << "\n--";
	cout << "\nDo dai vector v: " << v.GetLength();
	cout << "\nGia tri thu 2 vector v: ";
	cout << v[2];
	cout << "\n--";
	cout << "\nTong v va c: " << v + c;
	cout << "\n--";
	cout << "\nHieu v va c: " << v - c;
	cout << "\n--";
	cout << "\nTich v va c: " << v * c;
	cout << "\n--";
	cout << "\nThuong v va c: " << v / c;



	cout << endl;
	return 1;
}
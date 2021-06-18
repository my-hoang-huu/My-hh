#include"Matran.h"

int main() {
	Matran a, b;
	cout << "Nhap ma tran a va hien thi a: ";
	cin >> a;
	cout << a;
	cout << "\nNhap ma tran b va hien thi b: ";
	cin >> b;
	cout << b;
	Vector v;
	cin >> v;
	cout << v;
	cout << "\n----------\nMa tran a * v : \n";
	cout << a * v;
	cout << "\nMa tran a * b: \n" << a * b;
	cout << "\nMa tran a * 3: \n" << a * 3;

	cout << endl;
	return 1;
}
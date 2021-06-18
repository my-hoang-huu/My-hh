#include "Dathuc.h"

int main() {
	Dathuc d, d1, d2, d3;
	cout << "Nhap lan luot da thuc d, d1 va d2: ";
	cin >> d >> d1 >> d2;
	d3 = d1;
	cout << "\nDa thuc d, d1 va d2 vua nhap:	";
	cout << d << d3 << d2;
	d3.Set(1, 10);
	cout << "\nd3 sau khi dat gia tri 10 cho he so bac 1";
	cout << d3;
	cout << "\n----\nKet qua d + d1 - d2: ";
	Dathuc s = d + d1 - d2;
	cout << s;
	cout << endl;
	return 1;
}
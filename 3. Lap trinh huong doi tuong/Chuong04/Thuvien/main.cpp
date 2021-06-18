#include"Thuvien.h"

int main() {
	Thuvien t;
	Sach s;
	cout << "----------NHAP----------\n";
	cin >> s;
	cin >> t;
	cout << "----------SUA----------\n";
	//s.SetTen();
	t.SetTenDausach();
	cout << "\n----------XUAT----------";
	cout << endl << t;
	cout << s;

	cout << endl;
	return 1;
}
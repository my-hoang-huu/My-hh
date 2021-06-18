

#include<iostream>
using namespace std;

int main()
{
	cout << "\nDia chi o nho la & , day cung chinh la gia tri con tro!\nGia tri con tro dang giu la  *  ";
	int* a = new int(6);
	int z = 2;
	cout << "\n--------\nKhoi tao bien con tro 	int* a = new int(6);\nint z = 2\nDia chi cua a: &a = " << &a;
	cout << "\nGia tri cua a = " << a;
	cout << "\nGia tri cua a dang giu *a = " << *a;
	int x = 3;
	int& y = x;
	delete a;
	a = &x;
	cout << "\n	Cho x = 3\n	int& y = x\n	a = &x";
	cout << "\n*x = LOI!!!!";
	cout << "\nDia chi cua x: &x = " << &x;
	cout << "\nGia tri cua a: a = " << a;
	cout << "\nDia chi cua a: &a = " << &a;
	cout << "\nz = " << z;
	x = 10;
	z *= x + 3;
	cout << "\nz = " << z;
	cout << "\nGia tri y  " << y;
	cout << "\nGia tri cua a " << *a;
	return 0;
}
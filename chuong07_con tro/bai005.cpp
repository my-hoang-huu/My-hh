#include<iostream>
using namespace std;

int main()
{
	int *a = new int(6);
	int z = 2;
	cout << "&a = " << &a;
	cout << "\nGia tri cua a " << *a;
	int x = 3;
	int& y = x;
	delete a;
	a = &x;
	cout << "\n&a = " << &a;
	cout << "\nz = " << z;
	x = 10;
	z *= x + 3;
	cout << "\nz = " << z;
	cout << "\nGia tri y  " << y;
	cout << "\nGia tri cua a " << *a;
	int x = 2;
	int y = 9;
	int z = 4;
	z = 2 * (++x) - y++;
	cout << "\nz = " << z; //-7
	cout << "\nx = " << x;//3
	cout << "\ny = " << y;//10

	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	int x = 2;
	int y = 9;
	int z = 4;
	cout << "\nx = " << 2 * ++x;//6
	cout << "\ny = " << -y++;//-9


	x = 2;
	y = 9;
	z = 2 * (++x) /* 2*3 */ - y++ /* -9 */;// moi phep toan thuc hien voi y++ == y, ++y == y+1; Sau dong do, ++y = y++
	cout << "\nz = " << z; //dung -3
	cout << "\nx = " << x;//3
	cout << "\ny = " << y;//10

	return 0;
}
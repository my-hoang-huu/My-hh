#include<iostream>
using namespace std;

int main()
{
	int* c = new int[3];//cap phat cho c 3 o nho, c giu dia chi o a[0], c+1 la dia chi a[1],...
	int* lc = c;
	c[0] = 10;
	c[1] = 18;
	c[2] = 30;
	cout << "Mang :";
	for (int i = 0; i < 3; i++)
	{
		cout << "\na[" << i << "] = " << c[i];
	}
	cout << "\nDia chi cua c  &c = " << &c;//dcc
	cout << "\nDia chi c dang giu c = " << c;//dcMoi
	cout << "\n&c[0] = " << &c[0];//dcMoi
	cout << "\n *c = " << *c;//10
	cout << "\n *c + 1 = " << *c + 1;//11
	cout << "\n *(c + 1) = " << *(c + 1);//== a[1] 18
	cout << "\n *(c + 2) = " << *(c + 2);//== a[2] 30
	c = lc;
	cout << "\n *c++ = " << *c++;//10 Ket qua tuong tu *c
	c = lc;
	cout << "\n *++c = " << *++c;//18 Tuong tu *(c + 1)
	c = lc;
	cout << "\n c++ = " << c++;//dcMoi Tuong tu c
	c = lc;
	cout << "\n ++c = " << ++c;//dc cua a[1]
	c = lc;
	cout << "\n &*c++ = " << &*c++;//Tuong tu &*c == c  dccMoi
	c = lc;
	//cout << "\n &(c+1) = " << &(c+1); Khong xac dinh
	c = lc;
	//cout << "\n &c++ = " << &c++; Khong xac dinh do xuat "copy c".
	c = lc;
	cout << "\n &++c = " << &++c;//Tuong tu &c
	c = lc;
	cout << "\n &(++c) = " << &(++c);//Tuong tu &c

	//int i = 0, a, b, h, d;
	//a = i++ * 2;
	//i = 0;
	//b = ++i * 2;
	//i = 0;
	//h = (i++) * 2;
	//i = 0;
	//d = (++i) * 2;
	//cout << "\n a= " << a << "\n b= " << b << "\n h= " << h << "\n d= " << d;

	return 0;
}
/*Nếu đề bài cho trước 3 cạnh, ta áp dụng công thức Heron như sau :

 S = sqrt{ p(p - a)(p - b)(p - c) }

Trong đó :

S: Là ký hiệu diện tích tam giác.
pn : Là nữa chu vi của tam giác.
pn = frac{ 1 }{2}(a + b + c)
a, b, c: Là độ dài 3 cạnh của tam giác.*/

#include<iostream>
using namespace std;

int main()
{
	float x1, y1, x2, y2, x3, y3;
	cout << "toa do dinh A: " << endl;
	cout << "nhap x1: ";
	cin >> x1;
	cout << "nhap y1: ";
	cin >> y1;
	cout << "toa do dinh B: " << endl;
	cout << "nhap x2: ";
	cin >> x2;
	cout << "nhap y2: ";
	cin >> y2;
	cout << "toa do dinh C: " << endl;
	cout << "nhap x3: ";
	cin >> x3;
	cout << "nhap y3: ";
	cin >> y3;
	float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << "canh a = " << a << endl;
	float b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	cout << "canh b = " << b << endl;
	float c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	cout << "canh c = " << c << endl;
	float pn = (a + b + c)/2;
	float s = sqrt(pn*(pn - a)*(pn - b)*(pn - c));
	cout << "tam giac co dien tich: " << s << endl;
	system("pause");
	return 1;

}
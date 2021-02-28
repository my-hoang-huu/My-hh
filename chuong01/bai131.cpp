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
	float b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	if (abs(a - b) < c < abs(a + b))
	{
		cout << "Co ton tai tam giac do dai ba canh x, y, z" << endl;
	}
	else
	{
		cout << "Khong ton tai tam giac co do dai ba canh x, y, z" << endl;
	}
	system("pause");
	return 1;

}
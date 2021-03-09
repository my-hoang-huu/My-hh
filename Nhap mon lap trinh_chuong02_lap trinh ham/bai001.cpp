#include <iostream>
#include<cmath>
using namespace std;
void Nhap(float&, float&, float&, float&);
float KhoangCach(float, float, float, float);

int main()
{
	float x1, y1, x2, y2;
	Nhap(x1, y1, x2, y2);
	float d = KhoangCach(x1, y1, x2, y2);
	cout << "khoang cach giua 2 diem la: " << d << endl;
	return 1;
}
void Nhap(float& x1, float& y1, float& x2, float& y2)
{
	cout << "Nhap cac toa do: \n";
	cout << "x1 = ";
	cin >> x1;
	cout << "y1 = ";
	cin >> y1;
	cout << "x2 = ";
	cin >> x2;
	cout << "y2 = ";
	cin >> y2;
}
float KhoangCach(float x1, float y1, float x2, float y2)
{
	float d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return d;
}

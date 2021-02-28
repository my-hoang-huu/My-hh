#include<iostream>
using namespace std;
void NhapToaDo(float&, float&, float&, float&, float&, float&);
float ChuVi(float, float, float, float, float, float);
float DienTich(float, float, float, float, float, float);

int main()
{
	float x1, y1, x2, y2, x3, y3;
	NhapToaDo(x1, y1, x2, y2, x3, y3);
	float cv = ChuVi(x1, y1, x2, y2, x3, y3);
	cout << "Bai 010: Tam giac co chu vi: " << cv << endl;
	float dt = DienTich(x1, y1, x2, y2, x3, y3);
	cout << "Bai 011: Tam giac co dien tich: " << dt << endl;
	system("pause");
	return 1;
}
void NhapToaDo(float& x1, float& y1, float& x2, float& y2, float& x3, float& y3)
{
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
}
float ChuVi(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	float p = a + b + c;
	return p;
}
float DienTich(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	float pn = (a + b + c) / 2;
	float s = sqrt(pn * (pn - a) * (pn - b) * (pn - c));
	return s;
}
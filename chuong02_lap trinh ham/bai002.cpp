#include <iostream>
using namespace std;
void Nhap(float&);
float DienTich(float);

int main()
{
	float bk;
	Nhap(bk);
	float kq = DienTich(bk);
	cout << "Dien tich duong tron ban kinh " << bk << " la: " << kq;
	return 1;
}
void Nhap(float& r)
{
	cout << "Nhap ban kinh r = ";
	cin >> r;
}
float DienTich(float r)
{
	float dt = 0;
	dt = 3.14 * r * r;
	return dt;
}

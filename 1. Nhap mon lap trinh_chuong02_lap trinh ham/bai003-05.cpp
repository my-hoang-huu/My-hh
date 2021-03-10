#include <iostream>
using namespace std;
float ChuVi(float);
float DienTichXq(float);
float TheTich(float);

int main()
{
	float bk;
	cout << "Nhap ban kinh: ";
	cin >> bk;
	//float cv = ChuVi(bk);
	//cout << "Bai 003: Chu vi duong tron ban kinh " << bk << " la: " << cv << endl;
	float dt = DienTichXq(bk);
	cout << " Bai 004: Dien tich xung quanh cua hinh cau ban kinh " << bk << " la: " << dt << endl;
	float v = TheTich(bk);
	cout << " Bai 005: The tich hinh cau ban kinh " << bk << " la: " << v << endl;
	return 1;
}
float ChuVi(float r)
{
	float cv = 2 * 3.14 * r;
	return cv;
}
float DienTichXq(float r)
{
	float s = 4 * 3.14 * r * r;
	return s;
}
float TheTich(float r)
{
	float v = 4.0 / 3 * 3.14 * r * r * r;
	return v;
}

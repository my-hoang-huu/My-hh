#include<iostream>
using namespace std;
float ChuVi(int, float);
double DienTich(int, float);
int main()
{
	int n;
	cout << "Nhap so canh: ";
	cin >> n;
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;
	/*float cv = ChuVi(n, r);
	cout << "Bai 008: Chu vi da giac deu " << n << " canh noi tiep duong tron ban kinh " << r << " la: ";
	cout << cv << endl;*/
	double dt = DienTich(n, r);
	cout << "Bai 009: Dien tich da giac deu " << n << " canh noi tiep duong tron ban kinh " << r << " la: ";
	cout << dt << endl;
	return 1;
}
float ChuVi(int n, float r)
{
	float cv = 2 * n * r * sin(3.14 / n);
	return cv;
}
double DienTich(int n, float r)
{
	double s = n * r * r * sin(2 * 3.14 / n) / 2;
	return s;
}
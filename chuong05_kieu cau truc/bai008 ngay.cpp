#include<iostream>
#include<iomanip>
using namespace std;
struct NGAY
{
	int ngay;
	int thang;
	int nam;
};
void Nhap(NGAY&);
void Xuat(NGAY);
int main()
{
	NGAY m;
	Nhap(m);
	cout << "\nNgay vua nhap: ";
	Xuat(m);
	return 1;
}
void Nhap(NGAY& h)
{
	cout << "Nhap ngay: ";
	cin >> h.ngay;
	cout << "Nhap thang: ";
	cin >> h.thang;
	cout << "Nhap nam: ";
	cin >> h.nam;
}
void Xuat(NGAY h)
{
	cout << "\nNgay " << h.ngay << "  Thang " << h.thang << "  Nam " << h.nam;
}


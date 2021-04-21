#include<iostream>
#include<iomanip>
#include <string>
using namespace std;
struct NGAY
{
	int ngay;
	int thang;
	int nam;
};
struct LOPHOC
{
	string TenLop;
	string DanhSach[30];
	int SiSo;
};
void Nhap(LOPHOC&);
void Xuat(LOPHOC);
int main()
{
	LOPHOC m;
	Nhap(m);
	Xuat(m);
	return 1;
}
void Nhap(LOPHOC& a)
{
	cout << "Ten lop: ";
	getline(cin, a.TenLop);
	cout << "Nhap Si so lop: ";
	cin >> a.SiSo;
	cout << "Danh sach cac hoc sinh: \n";
	cin.ignore();
	for (int i = 1; i <= a.SiSo; i++)
	{
		cout << i << "  ";
		getline(cin, a.DanhSach[i]);
	}
}
void Xuat(LOPHOC a)
{
	cout << "\nThong tin LOP HOC ";
	cout << "\nTen lop: " << a.TenLop;
	cout << "\nSi so: " << a.SiSo;
	cout << "\nDanh sach cac hoc sinh:";
	for (int i = 1; i <= a.SiSo; i++)
	{
		cout << "\nHoc sinh so " << i << " :" << a.DanhSach[i];
	}
}

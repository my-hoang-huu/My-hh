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
struct DOIBONG
{
	string MaSo;
	string TenDoi;
	string DanhSach[30];
	int SiSo;
};
void Nhap(DOIBONG&);
void Xuat(DOIBONG);

int main()
{
	DOIBONG m;
	Nhap(m);
	Xuat(m);
	return 1;
}
void Nhap(DOIBONG& a)
{
	cout << "Ma so: ";
	getline(cin, a.MaSo);
	cout << "Ten doi: ";
	getline(cin, a.TenDoi);
	cout << "\nNhap so cau thu: ";
	cin >> a.SiSo;
	cout << "Danh sach cac cau thu: \n";
	cin.ignore();
	for (int i = 1; i <= a.SiSo; i++)
	{
		cout << "Cau thu so " << i << " :";
		getline(cin, a.DanhSach[i]);
	}
}
void Xuat(DOIBONG a)
{
	cout << "\nThong tin DOI BONG ";
	cout << "\nMa so: " << a.MaSo;
	cout << "\nTen doi: " << a.TenDoi;
	cout << "\nSo cau thu: " << a.SiSo;
	cout << "\nDanh sach cac cau thu:";
	for (int i = 1; i <= a.SiSo; i++)
	{
		cout << "\nCau thu so " << i << " :" << a.DanhSach[i];
	}
}

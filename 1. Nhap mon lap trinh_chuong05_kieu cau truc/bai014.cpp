#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct NHANVIEN
{
	string MaSo;
	string HoTen;
	float Luong;	
};
void Nhap(NHANVIEN&);
void Xuat(NHANVIEN);
int main()
{
	NHANVIEN A;
	Nhap(A);
	Xuat(A);
	return 1;
}
void Nhap(NHANVIEN& a)
{
	cout << "Nhap Ma so nhan vien: ";
	getline(cin, a.MaSo);
	cout << "Nhap Ho va ten nhan vien: ";
	getline(cin, a.HoTen);
	cout << "Nhap Luong nhan vien: ";
	cin >> a.Luong;
}
void Xuat(NHANVIEN a)
{
	cout << "\nThong tin nhan vien: ";
	cout << "\nMa so nhan vien: " << a.MaSo;
	cout << "\nHo ten: " << a.HoTen;
	cout << fixed << setprecision(2) << "\nLuong: " << a.Luong;
}

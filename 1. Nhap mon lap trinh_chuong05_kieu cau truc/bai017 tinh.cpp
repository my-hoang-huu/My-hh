#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct TINH
{
	int MaSo;
	string TenTinh;
	int DanSo;
	float DienTich;
};
void Nhap(TINH&);
void Xuat(TINH);
int main()
{
	TINH A;
	Nhap(A);
	Xuat(A);
	return 1;
}
void Nhap(TINH& a)
{
	cout << "Nhap Ten tinh: ";
	getline(cin, a.TenTinh);
	cout << "Nhap Ma so tinh: ";
	cin >> a.MaSo;
	cout << "Nhap Dan so: ";
	cin >> a.DanSo;
	cout << "Nhap Dien tich: ";
	cin >> a.DienTich;
}
void Xuat(TINH a)
{
	cout << "\n\nThong tin tinh: ";
	cout << "\nMa so tinh: " << a.MaSo;
	cout << "\nTen tinh: " << a.TenTinh;
	cout << "\nDan so: " << a.DanSo;
	cout << fixed << setprecision(2) << "\nDien tich: " << a.DienTich;
}

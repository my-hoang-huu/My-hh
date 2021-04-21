#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct LUANVAN
{
	string TenLuanVan;
	string HoTenSV;
	string HoTenGV;
	string MaSo;
	int Nam;
};
void Nhap(LUANVAN&);
void Xuat(LUANVAN);
int main()
{
	LUANVAN A;
	Nhap(A);
	Xuat(A);
	return 1;
}
void Nhap(LUANVAN& a)
{
	cout << "Nhap Ma luan van: ";
	getline(cin, a.MaSo);
	cout << "Nhap Ten luan van: ";
	getline(cin, a.TenLuanVan);
	cout << "Nhap Ho va ten sinh vien: ";
	getline(cin, a.HoTenSV);
	cout << "Nhap Ho va ten giao vien huong dan: ";
	getline(cin, a.HoTenGV);
	cout << "Nhap Nam thuc hien: ";
	cin >> a.Nam;
}
void Xuat(LUANVAN a)
{
	cout << "\nTHONG TIN LUAN VAN: ";
	cout << "\nMa luan van: " << a.MaSo;
	cout << "\nTen luan van: " << a.TenLuanVan;
	cout << "\nHo ten sinh vien: " << a.HoTenSV;
	cout << "\nHo ten giao vien huong dan: " << a.HoTenGV;
	cout << "\nNam thuc hien " << a.Nam << endl;
}

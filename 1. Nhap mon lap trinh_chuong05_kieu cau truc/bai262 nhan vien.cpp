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
void Nhap(NHANVIEN[], int&);
void Xuat(NHANVIEN[], int);
void SapGiamDienTich(NHANVIEN[], int);
NHANVIEN LuongCaoNhat(NHANVIEN[], int);
float TongLuong(NHANVIEN[], int);
int main()
{
	cout << "Nhap mang cac NHANVIEN: ";
	int n;
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	NHANVIEN* a = new NHANVIEN[n];
	Nhap(a, n);
	cout << "\nMang ban dau:";
	Xuat(a, n);
	cout << "\na.Nhan vien luong cao nhat: " << LuongCaoNhat(a, n).HoTen;
	cout << "\nb.Tong luong cac nhan vien: " << TongLuong(a, n);
	cout << "\n\nc. Mang sau khi sap tang dan luong nhan vien: ";
	SapGiamDienTich(a, n);
	Xuat(a, n);
	cout << endl;
	return 1;
}
void Nhap(NHANVIEN& a)
{
	cout << "Nhap Ma so nhan vien: ";
	getline(cin, a.MaSo);
	cout << "Nhap Ho va ten nhan vien: ";
	getline(cin, a.HoTen);
	a.Luong = rand() % 2000 + 500;
}
void Xuat(NHANVIEN a)
{
	cout << "\nThong tin nhan vien: ";
	cout << "\nMa so nhan vien: " << a.MaSo;
	cout << "\nHo ten: " << a.HoTen;
	cout << fixed << setprecision(2) << "\nLuong: " << a.Luong << "$";
}
void Nhap(NHANVIEN a[], int& n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			cin.ignore();
		Nhap(a[i]);
		cout << endl;
	}
}
void Xuat(NHANVIEN a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
		cout << endl;
	}
}
void HoanVi(NHANVIEN& a, NHANVIEN& b)
{
	NHANVIEN t = a;
	a = b;
	b = t;
}
void SapGiamDienTich(NHANVIEN a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].Luong > a[j].Luong)
				HoanVi(a[i], a[j]);
		}
	}
}
NHANVIEN LuongCaoNhat(NHANVIEN a[], int n)
{
	NHANVIEN lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i].Luong > lc.Luong)
			lc = a[i];
	}
	return lc;
}
float TongLuong(NHANVIEN a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		s += a[i].Luong;
	}
	return s;
}
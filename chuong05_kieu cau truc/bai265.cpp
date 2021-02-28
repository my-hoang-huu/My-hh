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
struct DAILY
{
	string MaSo;
	string TenDaiLy;
	string DiaChi;
	int DienThoai;
	NGAY NgayNhan;
	string EMail;
};
void Nhap(DAILY[], int&);
void Xuat(DAILY[], int);
void Nhap(NGAY&);
void Xuat(NGAY);
void Nhap(DAILY&);
void Xuat(DAILY);
int NgayToiDaThang(NGAY);
bool KtNhuan(NGAY);
void TimDaiLyTheoTen(DAILY[], int, string);
int main()
{
	cout << "Nhap thong tin cac dai ly: ";
	int n;
	DAILY a[10];
	Nhap(a, n);
	cout << "\nDanh sach cac dai ly:\n";
	Xuat(a, n);
	cout << "\nTim dai ly dua theo ten: ";
	string Name;
	cout << "\nNhap ten dai ly: ";
	getline(cin, Name);
	cout << "\nKet qua: \n";
	TimDaiLyTheoTen(a, n, Name);
	cout << endl;
	return 1;
}
void Nhap(DAILY& a)
{
	cout << "Nhap Ma so: ";
	getline(cin, a.MaSo);
	cout << "Nhap Ten dai ly: ";
	getline(cin, a.TenDaiLy);
	cout << "Nhap Dia chi: ";
	getline(cin, a.DiaChi);
	cout << "Nhap Dia chi email: ";
	getline(cin, a.EMail);
	Nhap(a.NgayNhan);
	a.DienThoai = (rand() * 99990) % 80000000 + 99999999;
}
void Xuat(DAILY a)
{
	cout << "\nThong tin DAI LY ";
	cout << "\nMa so: " << a.MaSo;
	cout << "\nTen Dai ly: " << a.TenDaiLy;
	cout << "\nDia chi: " << a.DiaChi;
	cout << "\nSo dien thoai: 0" << a.DienThoai;
	cout << "\nNgay Tiep nhan: ";
	Xuat(a.NgayNhan);
	cout << "\nEmail: " << a.EMail << endl;
}
void Nhap(DAILY a[], int& n)
{
	cout << "\nNhap so luong dai ly: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			cin.ignore();
		Nhap(a[i]);
		cout << endl;
	}
}
void Xuat(DAILY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
		cout << endl;
	}
}
void Nhap(NGAY& h)
{
	do
	{
		h.ngay = rand() % 32;
		h.thang = rand() % 13;
		h.nam = rand() % 2 + 2019;
	} while (h.nam < 1 || h.thang >12 || h.thang < 1 || h.ngay > NgayToiDaThang(h) || h.nam < 1);
}
void Xuat(NGAY h)
{
	cout << "Ngay " << h.ngay << "  Thang " << h.thang << "  Nam " << h.nam;
}
int NgayToiDaThang(NGAY a)
{
	int NgayThang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (KtNhuan(a))
		NgayThang[1] = 29;
	return NgayThang[a.thang - 1];
}
bool KtNhuan(NGAY a)
{
	if ((a.nam % 4 == 0 && a.nam % 100 != 0) || a.nam % 400 == 0)
		return true;
	return false;
}
void TimDaiLyTheoTen(DAILY a[], int n, string x)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].TenDaiLy == x)
		{
			Xuat(a[i]);
			flag = 1;
			cout << endl;
		}
	}
	if (flag == 0)
		cout << "\nKhong tim thay dai ly co ten tren";
}
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
struct CAUTHU
{
	string MaSo;
	string TenCauThu;
	NGAY NgaySinh;
};
void Nhap(NGAY&);
void Xuat(NGAY);
void Nhap(CAUTHU&);
void Xuat(CAUTHU);
void Nhap(CAUTHU[], int&);
void Xuat(CAUTHU[], int);
int NgayToiDaThang(NGAY);
bool KtNhuan(NGAY);
int SoSanh(NGAY, NGAY);
void LietKeNhoTuoiNhat(CAUTHU[], int);
void GiamNgaySinh(CAUTHU[], int);
int main()
{
	cout << "Nhap mang ban dau: ";
	int n;
	CAUTHU a[10];
	Nhap(a, n);
	cout << "\nMang ban dau:\n";
	Xuat(a, n);
	cout << "\nCac cau thu nho tuoi nhat trong danh sach: ";
	LietKeNhoTuoiNhat(a, n);
	cout << "\nDanh sach cau thu sau khi sap giam dan ngay sinh: ";
	GiamNgaySinh(a, n);
	Xuat(a, n);
	cout << endl;
	return 1;
}
void Nhap(NGAY& h)
{
	do
	{
		h.ngay = rand() % 32;
		h.thang = rand() % 13;
		h.nam = rand() % 5 + 1995;
	} while (h.nam < 1 || h.thang >12 || h.thang < 1 || h.ngay > NgayToiDaThang(h) || h.nam < 1);
}
void Xuat(NGAY h)
{
	cout << "Ngay " << h.ngay << "  Thang " << h.thang << "  Nam " << h.nam;
}
void Nhap(CAUTHU& a)
{
	cout << "\nNhap Ma cau thu: ";
	getline(cin, a.MaSo);
	cout << "Nhap Ten cau thu: ";
	getline(cin, a.TenCauThu);
	Nhap(a.NgaySinh);
}
void Xuat(CAUTHU a)
{
	cout << "\nThong tin cua CAU THU";
	cout << "\nMa so: " << a.MaSo;
	cout << "\nTen cau thu: " << a.TenCauThu;
	cout << "\nNgay sinh: ";
	Xuat(a.NgaySinh);
}
void Nhap(CAUTHU a[], int& n)
{
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			cin.ignore();
		Nhap(a[i]);
	}
}
void Xuat(CAUTHU a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
		cout << endl;
	}
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
int SoSanh(NGAY a, NGAY b)
{
	if (a.nam > b.nam)
	{
		return 1;
	}
	if (a.nam < b.nam)
	{
		return -1;
	}
	if (a.thang > b.thang)
	{
		return 1;
	}
	if (a.thang < b.thang)
	{
		return -1;
	}
	if (a.ngay > b.ngay)
	{
		return 1;
	}
	if (a.ngay < b.ngay)
	{
		return -1;
	}
	return 0;
}
void LietKeNhoTuoiNhat(CAUTHU a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
	{
		if (SoSanh(a[i].NgaySinh, a[lc].NgaySinh) == 1)
			lc = i;
	}
	for (int i = 0; i < n; i++)
	{
		if (SoSanh(a[i].NgaySinh, a[lc].NgaySinh) == 0)
			cout << a[i].TenCauThu;
	}
}
void HoanVi(NGAY& a, NGAY& b)
{
	NGAY t = a;
	a = b;
	b = t;
}
void GiamNgaySinh(CAUTHU a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (SoSanh(a[i].NgaySinh, a[j].NgaySinh) == -1)
				HoanVi(a[i].NgaySinh, a[j].NgaySinh);
		}
	}
}
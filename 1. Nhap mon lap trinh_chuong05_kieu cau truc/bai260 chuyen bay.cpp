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
struct THOIGIAN
{
	int Gio;
	int Phut;
	int Giay;
};
struct CHUYENBAY
{
	string MaSo;
	THOIGIAN GioBay;
	NGAY NgayBay;
	string NoiDi;
	string NoiDen;
};
void Nhap(CHUYENBAY[], int&);
void Xuat(CHUYENBAY[], int);
void Nhap(NGAY&);
void Xuat(NGAY);
void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);
void Nhap(CHUYENBAY&);
void Xuat(CHUYENBAY);
int NgayToiDaThang(NGAY);
bool KtNhuan(NGAY);
NGAY NhieuChuyenBayNhat(CHUYENBAY[], int);
int DemChuyenBayTrongNgay(CHUYENBAY[], int, NGAY);
void TimChuyenBayTheoMa(CHUYENBAY[], int, string);
int main()
{
	cout << "Nhap thong tin cac chuyen bay: ";
	int n;
	CHUYENBAY a[10];
	Nhap(a, n);
	cout << "\nDanh sach cac chuyen bay:\n";
	Xuat(a, n);
	cout << "\nNgay nhieu chuyen bay nhat: ";
	Xuat(NhieuChuyenBayNhat(a, n));
	cout << "\nTim chuyen bay dua theo ma so: ";
	string Ma;
	cout << "\nNhap ma so: ";
	getline(cin, Ma);
	cout << "\nKet qua: ";
	TimChuyenBayTheoMa(a, n, Ma);
	cout << endl;
	return 1;
}
void Nhap(CHUYENBAY& a)
{
	cout << "\nThong tin CHUYEN BAY";
	cout << "\nNhap Ma chuyen bay: ";
	getline(cin, a.MaSo);
	cout << "Nhap Noi di: ";
	getline(cin, a.NoiDi);
	cout << "Nhap Noi den: ";
	getline(cin, a.NoiDen);
	Nhap(a.GioBay);
	Nhap(a.NgayBay);
}
void Xuat(CHUYENBAY a)
{
	cout << "\nThong tin CHUYEN BAY";
	cout << "\nMa chuyen bay: " << a.MaSo;
	cout << "\nGio bay: ";
	Xuat(a.GioBay);
	cout << "\nNgay bay: ";
	Xuat(a.NgayBay);
	cout << "\nNoi di: " << a.NoiDi;
	cout << "\nNoi den: " << a.NoiDen;
}
void Nhap(CHUYENBAY a[], int& n)
{
	cout << "\nNhap so luong chuyen bay: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			cin.ignore();
		Nhap(a[i]);
	}
}
void Xuat(CHUYENBAY a[], int n)
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
void Nhap(THOIGIAN& a)
{
	do
	{
		a.Gio = rand() % 24;
		a.Phut = rand() % 60;
		a.Giay = rand() % 60;
	} while (a.Gio < 0 || a.Gio > 23 || a.Phut < 0 || a.Phut > 59 || a.Giay < 0 || a.Giay > 59);
}
void Xuat(THOIGIAN h)
{
	cout << setprecision(2) << h.Gio << "h " << h.Phut << "m " << h.Giay << "s";
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
NGAY NhieuChuyenBayNhat(CHUYENBAY a[], int n)
{
	int lc = 0;
	for (int i = 1; i < n; i++)
	{
		if (DemChuyenBayTrongNgay(a, n, a[i].NgayBay) > DemChuyenBayTrongNgay(a, n, a[lc].NgayBay))
			lc = i;
	}
	cout << "(Voi so chuyen bay: " << DemChuyenBayTrongNgay(a, n, a[lc].NgayBay) << " )\n";
	return a[lc].NgayBay;
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
int DemChuyenBayTrongNgay(CHUYENBAY a[], int n, NGAY x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (SoSanh(a[i].NgayBay, x) == 0)
			dem++;
	}
	return dem;
}
void TimChuyenBayTheoMa(CHUYENBAY a[], int n, string x)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].MaSo == x)
		{
			cout << "\nChuyen so " << i;
			Xuat(a[i]);
			flag = 1;
			cout << endl;
		}
	}
	if (flag == 0)
		cout << "\nKhong tim thay chuyen bay co ma so tren";
}
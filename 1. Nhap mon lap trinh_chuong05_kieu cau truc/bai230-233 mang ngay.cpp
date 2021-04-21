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
bool KtNhuan(NGAY);
int NgayToiDaThang(NGAY);
int NgayToiDaNam(NGAY);
int SoSanh(NGAY, NGAY);
int SoThuTuTrongNam(NGAY);
long SoThuTuNgay(NGAY);
void XuatThu(NGAY);
long KhoangCach2Ngay(NGAY, NGAY);

void Nhap(NGAY[], int&);
void Xuat(NGAY[], int);
void HaiNgayGanNhat(NGAY[], int);
void HaiNgayXaNhat(NGAY[], int);

int main()
{
	NGAY a[100];
	int n;
	cout << "Bai 230: Nhap mang cac ngay: ";
	Nhap(a, n);
	cout << "Bai 231: Xuat mang cac ngay: ";
	Xuat(a, n);
	cout << "\nBai 232: Hai ngay gan nhau nhat: ";
	HaiNgayGanNhat(a, n);
	cout << "\nBai 233: Hai ngay xa nhau nhat: ";
	HaiNgayXaNhat(a, n);

	cout << endl;
	return 1;
}
void Nhap(NGAY& h)
{
	do
	{
		//cout << "\nNhap ngay: ";
		//cin >> h.ngay;
		//cout << "Nhap thang: ";
		//cin >> h.thang;
		//cout << "Nhap nam: ";
		//cin >> h.nam;
		//if (h.nam < 1 || h.thang >12 || h.thang < 1 || h.ngay > NgayToiDaThang(h) || h.nam < 1)
		//	cout << "\nNgay khong hop le. Vui long kiem tra va nhap lai!";
		h.ngay = rand() % 32;
		h.thang = rand() % 13;
		h.nam = rand() % 1500 + 1000;
	} while (h.nam < 1 || h.thang >12 || h.thang < 1 || h.ngay > NgayToiDaThang(h) || h.nam < 1);
}
void Xuat(NGAY h)
{
	cout << "\nNgay " << h.ngay << "  Thang " << h.thang << "  Nam " << h.nam;
}
bool KtNhuan(NGAY a)
{
	if ((a.nam % 4 == 0 && a.nam % 100 != 0) || a.nam % 400 == 0)
		return true;
	return false;
}
int NgayToiDaThang(NGAY a)
{
	int NgayThang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (KtNhuan(a))
		NgayThang[1] = 29;
	return NgayThang[a.thang - 1];
}
int NgayToiDaNam(NGAY a)
{
	if (KtNhuan(a))
		return 366;
	return 365;
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
int SoThuTuTrongNam(NGAY a)
{
	int stt = 0;
	for (int i = 1; i < a.thang; i++)
	{
		NGAY temp = { 1,i,a.nam };
		stt += NgayToiDaThang(temp);
	}
	return stt + a.ngay;
}
long SoThuTuNgay(NGAY a)
{
	long stt = 0;
	for (int i = 1; i < a.nam; i++)
	{
		NGAY temp = { 1, 1, i };
		if (KtNhuan(temp))
			stt += 366;
		else
			stt += 365;
	}
	for (int i = 1; i < a.thang; i++)
	{
		NGAY t = { 1, i, a.nam };
		stt += NgayToiDaThang(t);
	}
	return stt + a.ngay;
}
void XuatThu(NGAY a)
{
	long lc = SoThuTuNgay(a);
	switch (lc % 7)
	{
	case 0: cout << "\nChu Nhat";
		break;
	case 1: cout << "\nThu 2";
		break;
	case 2: cout << "\nThu 3";
		break;
	case 3: cout << "\nThu 4";
		break;
	case 4: cout << "\nThu 5";
		break;
	case 5: cout << "\nThu 6";
		break;
	case 6: cout << "\nThu 7";
		break;
	}
}
long KhoangCach2Ngay(NGAY a, NGAY b)
{
	long x = SoThuTuNgay(a);
	long y = SoThuTuNgay(b);
	return abs(x - y);
}
void Nhap(NGAY a[], int& n)
{
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		Nhap(a[i]);
	}
}
void Xuat(NGAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
	}
}
void HaiNgayGanNhat(NGAY a[], int n)
{
	long lc1 = 0;
	long lc2 = 1;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (KhoangCach2Ngay(a[i], a[j]) < KhoangCach2Ngay(a[lc1], a[lc2]))
			{
				lc1 = i;
				lc2 = j;
			}
		}
	}
	Xuat(a[lc1]);
	Xuat(a[lc2]);
}
void HaiNgayXaNhat(NGAY a[], int n)
{
	long lc1 = 0;
	long lc2 = 1;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (KhoangCach2Ngay(a[i], a[j]) > KhoangCach2Ngay(a[lc1], a[lc2]))
			{
				lc1 = i;
				lc2 = j;
			}
		}
	}
	Xuat(a[lc1]);
	Xuat(a[lc2]);
}

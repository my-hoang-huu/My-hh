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
NGAY TimNgayBietNam(int, int);
NGAY TimNgayBietStt(int);
NGAY NgayKeTiep(NGAY);
NGAY NgayKeTiepkNgay(NGAY, int);
NGAY NgayTruocDo(NGAY);
NGAY NgayTruocDokNgay(NGAY, int);

int main()
{
	NGAY m;
	cout << "Bai 172: Nhap ngay m: ";
	Nhap(m);
	cout << "\nBai 173: Ngay vua nhap: ";
	Xuat(m);
	cout << "\nBai 174: Nam cua ngay m co phai la nam nhuan khong (1 Co, 0 Khong)?  Ket qua: " << KtNhuan(m);
	cout << "\nBai 175: So ngay toi da trong thang cua ngay m?  Ket qua: " << NgayToiDaThang(m);
	cout << "\nBai 176: So ngay toi da trong nam cua ngay m?  Ket qua: " << NgayToiDaNam(m);
	cout << "\nBai 177: Tinh hop le da kiem tra o ham nhap.";
	cout << "\nBai 178: Nhap ngay n:";
	NGAY n;	
	Nhap(n);
	cout << "\nBai 178: So sanh ngay m va ngay n (quy uoc: -1: m nho hon, 1: m lon hon, 0: m bang n). Ket qua: " << SoSanh(m, n);
	cout << "\nBai 179: So thu tu ngay m trong nam: " << SoThuTuTrongNam(m);
	cout << "\nBai 180: So thu tu ngay m ke tu ngay 01/01/01: " << SoThuTuNgay(m);
	cout << "\nBai 181: Thu cua ngay m: ";
	XuatThu(m);
	cout << "\nBai 182: Khoang cach giua ngay m va ngay n: " << KhoangCach2Ngay(m, n);
	cout << "\nBai 183: Tim ngay biet nam va so thu tu ngay trong nam: ";
	int a, x;
	cout << "\nNhap nam: ";
	cin >> a;
	cout << "\nNhap so thu tu ngay trong nam: ";
	cin >> x;
	NGAY l = TimNgayBietNam(a, x);
	Xuat(l);
	cout << "\nBai 184: Tim ngay biet so thu tu ngay ke tu ngay 01/01/01: ";
	int stt;
	cout << "\nNhap so thu tu ngay: ";
	cin >> stt;
	NGAY k = TimNgayBietStt(stt);
	Xuat(k);
	cout << "\nBai 185: Ngay ke tiep ngay m: ";
	Xuat(NgayKeTiep(m));
	cout << "\nBai 186: Ngay ngay truoc ngay m: ";
	Xuat(NgayTruocDo(m));
	cout << "\nBai 187: Ngay ke tiep k ngay tinh tu ngay m: ";
	int p;
	cout << "\nNhap k: ";
	cin >> p;
	Xuat(NgayKeTiepkNgay(m, p));
	cout << "\nBai 188: Ngay truoc ngay m mot khoang k ngay: ";
	Xuat(NgayTruocDokNgay(m, p));

	cout << endl;
	return 1;
}
void Nhap(NGAY& h)
{
	do
	{
		cout << "\nNhap ngay: ";
		cin >> h.ngay;
		cout << "Nhap thang: ";
		cin >> h.thang;
		cout << "Nhap nam: ";
		cin >> h.nam;
		if (h.nam < 1 || h.thang >12 || h.thang < 1 || h.ngay > NgayToiDaThang(h) || h.nam < 1)
			cout << "\nNgay khong hop le. Vui long kiem tra va nhap lai!";
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
NGAY TimNgayBietNam(int nam, int stt)
{
	NGAY temp = { 1, 1, nam };
	for (temp.thang = 1; stt - NgayToiDaThang(temp) > 0; temp.thang++)
	{	
		stt -= NgayToiDaThang(temp);
	}
	temp.ngay = stt;
	return temp;
}
NGAY TimNgayBietStt(int stt)
{
	NGAY temp = { 1, 1, 1 };
	for (temp.nam = 1; stt - NgayToiDaNam(temp) > 0; temp.nam++)
	{
		stt -= NgayToiDaNam(temp);
	}
	for (temp.thang = 1; stt - NgayToiDaThang(temp) > 0; temp.thang++)
	{
		stt -= NgayToiDaThang(temp);
	}
	temp.ngay = stt;
	return temp;
}
NGAY NgayKeTiep(NGAY a)
{
	if (a.ngay == 1 && a.thang == 1 && a.nam == 1)
		return a;
	int stt = SoThuTuNgay(a) + 1;
	return TimNgayBietStt(stt);
}
NGAY NgayTruocDo(NGAY a)
{
	NGAY t = a;
	if (a.ngay == 1)
	{
		t.thang--;
		if (a.thang == 1)
		{
			t.thang = 12;
			t.nam--;
		}
		t.ngay = NgayToiDaThang(t);
	}
	else
	{
		t.ngay--;
	}
	return t;
}
NGAY NgayKeTiepkNgay(NGAY a, int k)
{
	if (a.ngay == 1 && a.thang == 1 && a.nam == 1)
		return a;
	int stt = SoThuTuNgay(a) + k;
	return TimNgayBietStt(stt);
}
NGAY NgayTruocDokNgay(NGAY a, int k)
{
	if (a.ngay <= k && a.thang == 1 && a.nam == 1)
	{
		a.ngay = 1;
		return a;
	}
	int stt = SoThuTuNgay(a) - k;
	return TimNgayBietStt(stt);
}
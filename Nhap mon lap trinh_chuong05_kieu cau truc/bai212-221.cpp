#include<iostream>
#include<iomanip>
using namespace std;
struct DIEM
{
	float x;
	float y;
};
struct DUONGTRON
{
	DIEM I;
	float r;
};
struct DUONGTHANG
{
	float a;
	float b;
	float c;
};
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
void Nhap(DUONGTRON[], int&);
void Xuat(DUONGTRON[], int);
float KhoangCach(DIEM, DIEM);
float KhoangCachDuongTron(DUONGTRON, DIEM);
DUONGTRON GanGocNhat(DUONGTRON[], int);
bool QuaGoc(DUONGTRON[], int);
float KhoangCach(DIEM, DUONGTHANG);
float KhoangCach(DUONGTRON, DUONGTHANG);
DUONGTRON GanOxNhat(DUONGTRON[], int);
bool TiepXucOy(DUONGTRON[], int);
int ViTriTuongDoi(DUONGTRON, DUONGTRON);
bool DoiMotCatNhau(DUONGTRON[], int);
void LkTiepXuc(DUONGTRON[], int);
int main()
{
	DUONGTRON a[100];
	int n;
	cout << "Bai 212: Nhap mang cac duong tron: ";
	Nhap(a, n);
	cout << "\nBai 213: Mang ban dau: ";
	Xuat(a, n);
	cout << "\nBai 214: Duong tron gan goc toa do nhat trong mang: ";
	Xuat(GanGocNhat(a, n));
	cout << "\nBai 215: Trong mang co duong tron di qua goc toa do khong? Ket qua: " << QuaGoc(a, n);
	cout << "\nBai 216: Duong tron gan truc Ox nhat trong mang: ";
	Xuat(GanOxNhat(a, n));
	cout << "\nBai 217: Trong mang co duong tron tiep xuc truc Oy khong? Ket qua: " << TiepXucOy(a, n);
	cout << "\nBai 218: Cac duong tron trong mang co cat nhau tung doi mot khong? Ket qua: " << DoiMotCatNhau(a, n);
	cout << "\nBai 219: Cac duong tron tiep xuc nhau trong mang: \n";
	LkTiepXuc(a, n);
	cout << endl;
	return 1;
}
void Nhap(DIEM& P)
{
	/*cout << "\nx = ";
	cin >> P.y;*/
	P.x = rand() % 21 - 10;
	/*cout << "y = ";
	cin >> P.x;*/
	P.y = rand() % 21 - 10;
}
void Nhap(DUONGTRON& O)
{
	//cout << "Nhap tam va ban kinh duong tron: ";
	//cout << "\nNhap toa do tam I: ";
	Nhap(O.I);
	/*cout << "\nNhap ban kinh r = ";
			cin >> O.r;*/
	O.r = rand() % 10;
}
void Xuat(DIEM P)
{
	cout << "(" << P.x << "," << P.y << ")";
}
void Xuat(DUONGTRON P)
{
	cout << "Tam I";
	Xuat(P.I);
	cout << " va r = " << P.r << setw(8);
}
void Nhap(DUONGTRON a[], int& n)
{
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		Nhap(a[i]);
	}
}
void Xuat(DUONGTRON a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
	}
}
float KhoangCach(DIEM a, DIEM b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
float KhoangCachDuongTron(DUONGTRON a, DIEM m)
{
	return abs(KhoangCach(a.I, m) - a.r);
}
DUONGTRON GanGocNhat(DUONGTRON a[], int n)
{
	DIEM O = { 0,0 };
	int lc = 0;
	for (int i = 1; i < n; i++)
	{
		if (KhoangCachDuongTron(a[i], O) < KhoangCachDuongTron(a[lc], O))
			lc = i;
	}
	cout<< "\nKhoang cach gan goc toa do nhat: " << KhoangCachDuongTron(a[lc], O);
	return a[lc];
}
bool QuaGoc(DUONGTRON a[], int n)
{
	DIEM O = { 0, 0 };
	for (int i = 0; i < n; i++)
	{
		if (KhoangCach(O, a[i].I) == a[i].r)
			return true;
	}
	return false;
}
float KhoangCach(DIEM m, DUONGTHANG d)
{
	float l = abs(d.a * m.x + d.b * m.y + d.c) / sqrt(d.a * d.a + d.b * d.b);
	return l;
}
DUONGTRON GanOxNhat(DUONGTRON a[], int n)
{
	DUONGTHANG Ox = { 0, 1, 0 };
	int lc = 0;
	for (int i = 1; i < n; i++)
	{
		if (KhoangCach(a[i], Ox) < KhoangCach(a[lc], Ox))
			lc = i;
	}
	cout << "\nKhoang cach gan Ox nhat: " << KhoangCach(a[lc], Ox);
	return a[lc];
}
float KhoangCach(DUONGTRON a, DUONGTHANG d)
{
	if (KhoangCach(a.I, d) - a.r < 0)
		return 0;
	return KhoangCach(a.I, d) - a.r;
}
bool TiepXucOy(DUONGTRON a[], int n)
{
	DUONGTHANG Oy = { 1, 0, 0 };
	for (int i = 0; i < n; i++)
	{
		if (KhoangCach(a[i].I, Oy) == a[i].r)
		{
			cout << "\nDuong tron thoa man: ";
			Xuat(a[i]);
			return true;
		}
	}
	return false;
}
int ViTriTuongDoi(DUONGTRON a, DUONGTRON b)
{
	if (a.I.x == b.I.x && a.I.y == b.I.y && a.r == b.r)
		return 0;
	if (KhoangCach(a.I, b.I) > a.r + b.r)
		return 1;
	if (KhoangCach(a.I, b.I) == a.r + b.r)
		return 2;
	if (KhoangCach(a.I, b.I) < a.r + b.r)
	{
		if (KhoangCach(a.I, b.I) > abs(a.r - b.r))
			return 3;
		if (KhoangCach(a.I, b.I) == abs(a.r - b.r))
			return 4;
		if (KhoangCach(a.I, b.I) < abs(a.r - b.r))
			return 5;
	}
}
bool DoiMotCatNhau(DUONGTRON a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ViTriTuongDoi(a[i], a[j]) != 3)
			{
				cout << "\nVi tri: " << ViTriTuongDoi(a[i], a[j]);
				return false;
			}
		}
	}
	return true;
}
void LkTiepXuc(DUONGTRON a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int t = ViTriTuongDoi(a[i], a[j]);
			if (t == 2 || t == 4)
			{
				Xuat(a[i]);
				cout << "voi  ";
				Xuat(a[j]);
				cout << "\n";
				flag = 1;
			}
		}
	}
	if (flag == 0)
		cout << "Khong co cap duong tron tiep xuc nhau trong mang.";
}
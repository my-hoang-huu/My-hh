#include<iostream>
#include<iomanip>
using namespace std;
struct DIEM
{
	float x;
	float y;
};
struct DUONGTHANG
{
	float a;
	float b;
	float c;
};
struct DUONGTRON
{
	DIEM I;
	float r;
};
void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCach(DIEM, DIEM);
float KhoangCachOx(DIEM, DIEM);
float KhoangCachOy(DIEM, DIEM);
float KhoangCachO(DIEM);
DIEM DoiXung(DIEM);
DIEM DoiXungOx(DIEM);
DIEM DoiXungOy(DIEM);
DIEM DoiXungPhanGiac1(DIEM);
DIEM DoiXungPhanGiac2(DIEM);
bool Trung(DIEM, DIEM);
void PhanTuThu1(DIEM);
void PhanTuThu2(DIEM);
bool PhanTuThu3(DIEM);
void PhanTuThu4(DIEM);
void Nhap(DIEM[][10], int&, int&);
void Xuat(DIEM[][10], int, int);
int PhanTuThu3(DIEM[][10], int, int);
int TanSuat(DIEM[][10], int, int, DIEM);
int KhongTrung(DIEM[][10], int, int);
bool KtThuoc(DUONGTHANG, DIEM);
int DemThuoc(DIEM[][10], int, int, DUONGTHANG);
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
int ThuocDuongTron(DIEM[][10], int, int, DUONGTRON);
DIEM DiemGanNhat(DIEM[][10], int, int, DIEM);
int main()
{
	cout << "Bai 234: Nhap ma tran cac diem trong mat phang Oxy: ";
	int m, n;
	DIEM a[100][10];
	Nhap(a, m, n);
	cout << "\nBai 235: Ma tran ban dau: \n";
	Xuat(a, m, n);
	cout << "\nBai 236: So luong diem trong mang thuoc goc phan tu thu 3: " << PhanTuThu3(a, m, n);
	DIEM x;
	cout << "\nToa do diem x: ";
	Nhap(x);
	Xuat(x);
	cout << "\nBai 237: So lan xuat hien cua diem x trong ma tran: " << TanSuat(a, m, n, x);
	cout << "\nBai 238: So luong cac diem rieng biet trong ma tran: " << KhongTrung(a, m, n);
	DUONGTHANG d;
	Nhap(d);
	cout << "\nDuong thang d: ";
	Xuat(d);
	cout << "\nBai 239: So luong cac diem thuoc duong thang d trong ma tran: " << DemThuoc(a, m, n, d);
	DUONGTRON O;
	Nhap(O);
	cout << "\nDuong tron O: ";
	Xuat(O);
	cout << "\nBai 240: So luong cac diem thuoc duong tron O trong ma tran: " << ThuocDuongTron(a, m, n, O);
	//Bai 241: KhoangCach(DUONGTHANG,DIEM) == min && KtThuoc(DUONGTHANG, DIEM) == 0
	cout << "\nDiem P: ";
	DIEM P;
	Nhap(P);
	Xuat(P);
	cout << "\nBai 242: Diem gan diem P nhat trong ma tran: ";
	Xuat(DiemGanNhat(a, m, n, P));

	cout << endl;
	return 1;
}
void Nhap(DIEM& a)
{
	/*cout << "\nnhap x :";
	cin >> a.x;
	cout << "nhap y: ";
	cin >> a.y;*/
	a.x = rand() % 11 - 5;
	a.y = rand() % 11 - 5;
}
void Xuat(DIEM a)
{
	cout << setw(5) << "(" << a.x << ";" << a.y << ")";
}
DIEM DoiXung(DIEM a)
{
	DIEM C;
	C.x = -a.x;
	C.y = -a.y;
	return C;
}
float KhoangCach(DIEM a, DIEM b)
{
	float d = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
	return d;
}
float KhoangCachOx(DIEM a, DIEM b)
{
	float d = abs(a.x - b.x);
	return d;
}
float KhoangCachOy(DIEM a, DIEM b)
{
	return abs(a.y - b.y);
}
float KhoangCachO(DIEM a)
{
	return sqrt((a.x * a.x) + (a.y * a.y));
}
DIEM DoiXungOx(DIEM a)
{
	DIEM m;
	m.x = a.x;
	m.y = -a.y;
	return m;
}
DIEM DoiXungOy(DIEM a)
{
	DIEM m;
	m.x = -a.x;
	m.y = a.y;
	return m;
}
DIEM DoiXungPhanGiac1(DIEM a)
{
	DIEM m;
	m.x = a.y;
	m.y = a.x;
	return m;
}
DIEM DoiXungPhanGiac2(DIEM a)
{
	DIEM m;
	m.x = -a.y;
	m.y = -a.x;
	return m;
}
bool Trung(DIEM a, DIEM b)
{
	if (a.x == b.x && a.y == b.y)
		return true;
	return false;
}
void PhanTuThu1(DIEM a)
{
	if (a.x > 0 && a.y > 0)
		cout << "Co";
	else
		cout << "Khong";
}
void PhanTuThu2(DIEM a)
{
	if (a.x < 0 && a.y > 0)
		cout << "Co";
	else
		cout << "Khong";
}
bool PhanTuThu3(DIEM a)
{
	if (a.x < 0 && a.y < 0)
		return true;
	return false;
}
void PhanTuThu4(DIEM a)
{
	if (a.x > 0 && a.y < 0)
		cout << "Co";
	else
		cout << "Khong";
}
void Nhap(DIEM a[][10], int& m, int& n)
{
	cout << "\nNhap so dong: ";
	cin >> m;
	cout << "\nNhap so cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Nhap(a[i][j]);
		}
	}
}
void Xuat(DIEM a[][10], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			Xuat(a[i][j]);
		}
	}
}
int PhanTuThu3(DIEM a[][10], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (PhanTuThu3(a[i][j]))
				dem++;
		}
	}
	return dem;
}
int TanSuat(DIEM a[][10], int m, int n, DIEM l)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j].x == l.x && a[i][j].y == l.y)
				dem++;
		}
	}
	return dem;
}
int KhongTrung(DIEM a[][10], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (TanSuat(a, m, n, a[i][j]) == 1)
				dem++;
		}
	}
	return dem;
}
bool KtThuoc(DUONGTHANG d, DIEM m)
{
	if (d.a * m.x + d.b * m.y + d.c == 0)
		return true;
	return false;
}
int DemThuoc(DIEM a[][10], int m, int n, DUONGTHANG d)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KtThuoc(d, a[i][j]))
				dem++;
		}
	}
	return dem;
}
void Nhap(DUONGTHANG& d)
{
	//cout << "\nNhap a: ";
	//cin >> d.a;
	//cout << "Nhap b: ";
	//cin >> d.b;
	//cout << "Nhap c: ";
	//cin >> d.c;
	d.a = rand() % 10 - 5;
	d.b = rand() % 10 - 5;
	d.c = rand() % 10 - 5;
}
void Xuat(DUONGTHANG d)
{
	cout << endl << d.a << "x + " << d.b << "y + " << d.c << " = 0";
}
void Nhap(DUONGTRON& O)
{
	//cout << "Nhap tam va ban kinh duong tron: ";
	//cout << "\nNhap toa do tam I: ";
	Nhap(O.I);
	/*cout << "\nNhap ban kinh r = ";
			cin >> O.r;*/
	O.r = rand() % 10 + 1;
}
void Xuat(DUONGTRON P)
{
	cout << "Tam I";
	Xuat(P.I);
	cout << " va r = " << P.r << setw(8);
}
int ThuocDuongTron(DIEM a[][10], int m, int n, DUONGTRON o)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KhoangCach(a[i][j], o.I) <= o.r)
				dem++;
		}
	}
	return dem;
}
DIEM DiemGanNhat(DIEM a[][10], int m, int n, DIEM p)
{
	int lc1 = -1;
	int lc2 = -1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (Trung(a[i][j], p) == 0)
			{
				lc1 = i;
				lc2 = j;
				break;
			}
		}
		if (lc1 != -1)
			break;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KhoangCach(a[i][j], p) < KhoangCach(a[lc1][lc2], p) && Trung(a[i][j], p) == 0)
			{
				lc1 = i;
				lc2 = j;
			}
		}
	}
	return a[lc1][lc2];
}
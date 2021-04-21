#include<iostream>
#include<iomanip>
#include<cmath>
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
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCachDiem(DUONGTHANG, DIEM);
bool KtThuoc(DUONGTHANG, DIEM);
bool KtTrung(DUONGTHANG, DUONGTHANG);
bool SongSong(DUONGTHANG, DUONGTHANG);
bool Cat(DUONGTHANG, DUONGTHANG);
DIEM GiaoDiem(DUONGTHANG, DUONGTHANG);
void VuongGoc(DUONGTHANG, DUONGTHANG);
void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG[], int);
bool CungSongSong(DUONGTHANG[], int);
bool CoSongSong(DUONGTHANG[], int);
bool CoTrungNhau(DUONGTHANG[], int);
bool QuaDiem(DUONGTHANG[], int, DIEM);
DUONGTHANG GanDiem(DUONGTHANG[], int, DIEM);
bool DongQuy(DUONGTHANG[], int);
int main()
{
	cout << "Bai 222:  Nhap mang duong thang: ";
	int n;
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	DUONGTHANG* a = new DUONGTHANG[n];
	Nhap(a, n);
	cout << "\nBai 223:  Mang ban dau: ";
	Xuat(a, n);
	cout << "\nBai 224:  Cac duong thang trong mang co cung song song voi nhau khong? Ket qua: " << CungSongSong(a, n);
	cout << "\nBai 225:  Co cap duong thang nao trong mang song song voi nhau khong? Ket qua: " << CoSongSong(a, n);
	cout << "\nBai 226:  Co cap duong thang nao trong mang trung voi nhau khong? Ket qua: " << CoTrungNhau(a, n);
	DIEM P;
	Nhap(P);
	cout << "\n\nDiem P: ";
	Xuat(P);
	cout << "\nBai 227:  Co duong thang nao di qua P khong? Ket qua: " << QuaDiem(a, n, P);
	DIEM M;
	do
	{
		Nhap(M);
		/*if (QuaDiem(a, n, M))
			cout << "\nM khong duoc thuoc cac duong thang trong mang. Vui long kiem tra va nhap lai.";*/
	} while (QuaDiem(a, n, M));
	cout << "\n\nDiem M: ";
	Xuat(M);
	cout << "\nBai 228:  Duong thang gan diem M nhat: ";
	Xuat(GanDiem(a, n, M));
	cout << "\nBai 229:  Co 3 duong thang nao trong mang dong quy khong? Ket qua: " << DongQuy(a, n);
	cout << endl;
	return 1;
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
void Nhap(DIEM& a)
{
	/*cout << "\nNhap x :";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;*/
	a.x = rand() % 10 - 5;
	a.y = rand() % 10 - 5;

}
void Xuat(DIEM a)
{
	cout << "(" << a.x << ";" << a.y << ")\n";
}
float KhoangCachDiem(DUONGTHANG d, DIEM m)
{
	return abs(d.a * m.x + d.b * m.y + d.c) / sqrt(d.a * d.a + d.b * d.b);
}
bool KtThuoc(DUONGTHANG d, DIEM m)
{
	if (d.a * m.x + d.b * m.y + d.c == 0)
		return true;
	return false;
}
bool KtTrung(DUONGTHANG m, DUONGTHANG n)
{
	float D = m.a * n.b - n.a * m.b;
	float Dx = m.c * n.b - n.c * m.b;
	float Dy = m.a * n.c - n.a * m.c;
	if (D == 0 && Dx == 0 && Dy == 0)
		return true;
	return false;
}
bool SongSong(DUONGTHANG m, DUONGTHANG n)
{
	float D = m.a * n.b - n.a * m.b;
	float Dx = -m.c * n.b + n.c * m.b;
	float Dy = -m.a * n.c + n.a * m.c;
	if (D == 0 && !(Dx == 0 && Dy == 0))
		return true;
	return false;
}
bool Cat(DUONGTHANG m, DUONGTHANG n)
{
	float D = m.a * n.b - n.a * m.b;
	if (D != 0)
		return true;
	return false;
}
DIEM GiaoDiem(DUONGTHANG m, DUONGTHANG n)
{
	float D = m.a * n.b - n.a * m.b;
	float Dx = -m.c * n.b + n.c * m.b;
	float Dy = -m.a * n.c + n.a * m.c;
	DIEM temp;
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}
void VuongGoc(DUONGTHANG m, DUONGTHANG n)
{
	if ((m.a * n.a + m.b * n.b) == 0)
		cout << "Co";
	else
		cout << "Khong";
}
void Nhap(DUONGTHANG a[], int& n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		Nhap(a[i]);
	}
}
void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
	}
}
bool CungSongSong(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (SongSong(a[i], a[j]) == 0)
				return false;
		}
	}
	return true;
}
bool CoSongSong(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (SongSong(a[i], a[j]))
			{
				cout << "\n\nHai duong song song: ";
				Xuat(a[i]);
				Xuat(a[j]);
				return true;
			}
		}
	}
	return true;
}
bool CoTrungNhau(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (KtTrung(a[i], a[j]))
			{
				cout << "\n\nHai duong trung nhau:";
				Xuat(a[i]);
				Xuat(a[j]);
				return true;
			}
		}
	}
	return false;
}
bool QuaDiem(DUONGTHANG a[], int n, DIEM p)
{
	for (int i = 0; i < n; i++)
	{
		if (KtThuoc(a[i], p))
		{
			//cout << "\nDuong thang chua diem da cho: ";
			//Xuat(a[i]);
			return true;
		}
	}
	return false;
}
DUONGTHANG GanDiem(DUONGTHANG a[], int n, DIEM p)
{
	int lc = 0;
	for (int i = 1; i < n; i++)
	{
		if (KhoangCachDiem(a[i], p) < KhoangCachDiem(a[lc], p))
			lc = i;
	}
	return a[lc];
}
bool DongQuy(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (Cat(a[i], a[j]) && Cat(a[i], a[k]))
				{
					DIEM p = GiaoDiem(a[i], a[j]);
					DIEM q = GiaoDiem(a[i], a[k]);
					if (p.x == q.x && p.y == q.y)
					{
						cout << "\nBa duong thang dong quy lan luot :";
						Xuat(a[i]);
						Xuat(a[j]);
						Xuat(a[k]);
						cout << "\nDiem dong quy :";
						Xuat(p);
						return true;
					}
				}
			}
		}
	}
	return false;
}
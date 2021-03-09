#include<iostream>
#include<iomanip>
using namespace std;
#define pi 3.14;
struct DIEMKHONGGIAN
{
	float x;
	float y;
	float z;
};
struct HINHCAU
{
	DIEMKHONGGIAN I;
	float r;
};
void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
void Nhap(HINHCAU&);
void Xuat(HINHCAU);
float DienTichXq(HINHCAU);
float TheTich(HINHCAU);
float KhoangCach(DIEMKHONGGIAN, DIEMKHONGGIAN);
void KiemTraThuoc(HINHCAU, DIEMKHONGGIAN);
void KiemTraHinhCau(HINHCAU, HINHCAU);


int main()
{
	HINHCAU A;
	cout << "Bai 154: Nhap Hinh cau A: ";
	Nhap(A);
	cout << "\nBai 155: Hinh cau A vua nhap co: ";
	Xuat(A);
	/*cout << "\nBai 156: Dien tich xung quanh cua Hinh cau A : " << DienTichXq(A);
	cout << "\nBai 157: The tich Hinh cau A : " << TheTich(A);
	DIEMKHONGGIAN M;
	Nhap(M);
	cout << "\nBai 158: Vi tri tuong doi giua diem M va Hinh cau A: Ket qua: ";
	KiemTraThuoc(A, M);*/
	HINHCAU B;
	cout << "\nNhap Hinh cau B: ";
	Nhap(B);
	cout << "\nBai 159: Vi tri tuong doi giua Hinh cau A va Hinh cau B: Ket qua: ";
	KiemTraHinhCau(A, B);
	cout << endl;
	return 1;
}
void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nx = ";
	cin >> P.x;
	cout << "y = ";
	cin >> P.y;
	cout << "z = ";
	cin >> P.z;
}
void Nhap(HINHCAU& O)
{
	cout << "\nNhap toa do tam I: ";
	Nhap(O.I);
	cout << "\nNhap ban kinh r = ";
	cin >> O.r;
}
void Xuat(DIEMKHONGGIAN P)
{
	cout << "(" << P.x << "," << P.y << "," << P.z << ")";
}
void Xuat(HINHCAU P)
{
	cout << "\nTam I";
	Xuat(P.I);
	cout << "\nVa ban kinh: " << P.r << endl;
}
float DienTichXq(HINHCAU o)
{
	return o.r * o.r * 4 * pi;
}
float TheTich(HINHCAU o)
{
	return o.r * o.r * o.r * 4.0 / 3 * pi;
}
float KhoangCach(DIEMKHONGGIAN a, DIEMKHONGGIAN b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z));
}
void KiemTraThuoc(HINHCAU o, DIEMKHONGGIAN m)
{
	float d = KhoangCach(m, o.I);
	if (d > o.r)
		cout << "\nDiem da cho nam ngoai hinh cau.";
	else
		cout << "\nDiem da cho thuoc hinh cau.";
}
void KiemTraHinhCau(HINHCAU a, HINHCAU b)
{
	float d = KhoangCach(a.I, b.I);
	if (d > a.r + b.r)
	{
		cout << "Hai hinh cau roi nhau.";
	}
	else
	{
		if (d == a.r + b.r)
		{
			cout << "Hai hinh cau tiep xuc ngoai";
		}
		else
		{
			if (a.r == d + b.r || b.r == d + a.r)
			{
				if (a.I.x == b.I.x && a.I.y == b.I.y && a.I.z == b.I.z)
				{
					cout << "Hai hinh cau trung nhau";
				}
				else
				{
					cout << "Hai hinh cau tiep xuc trong";
				}
			}
			else
			{
				if (d + a.r > b.r && d + b.r > a.r)
				{
					cout << "Hai hinh cau cat nhau";
				}
				else
				{
					cout << "Hai hinh cau chua trong nhau";
				}
			}
		}
	}
}

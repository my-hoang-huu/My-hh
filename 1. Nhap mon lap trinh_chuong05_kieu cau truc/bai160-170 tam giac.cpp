#include<iostream>
#include<iomanip>
using namespace std;
struct DIEM
{
	float x;
	float y;
};
struct TAMGIAC
{
	DIEM A;
	DIEM B;
	DIEM C;
};
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);
float KhoangCach(DIEM, DIEM);
bool KtTamGiac(DIEM, DIEM, DIEM);
float ChuVi(TAMGIAC);
float DienTich(TAMGIAC);
DIEM TrongTam(TAMGIAC);
DIEM MaxHoanhDo(TAMGIAC);
DIEM MinTungDo(TAMGIAC);
float TongKhoangCach(TAMGIAC, DIEM);
void PhanLoai(TAMGIAC);
float BinhPhuongKhoangCach(DIEM, DIEM);
int main()
{
	TAMGIAC a;
	cout << "Bai 161: Nhap tam giac a: ";
	Nhap(a);
	cout << "\nBai 162: Tam giac a: ";
	Xuat(a);
	DIEM A, B, C;
	cout << "\nNhap diem A: ";
	Nhap(A);
	cout << "\nNhap diem B: ";
	Nhap(B);
	cout << "\nNhap diem C: ";
	Nhap(C);
	cout << "\nBai 163: Kiem tra ba diem A, B, C co lap thanh 1 tam giac (Quy uoc 1 Co, 0 Khong). Ket qua: " << KtTamGiac(A, B, C);
	cout << "\nBai 164: Chu vi tam giac a = " << ChuVi(a);
	cout << "\nBai 165: Dien tich tam giac a = " << DienTich(a);
	DIEM G = TrongTam(a);
	cout << "\nBai 166: Trong tam tam giac a la diem G co toa do: ";
	Xuat(G);
	DIEM I = MaxHoanhDo(a);
	cout << "\nBai 167: Dinh co hoanh do lon nhat trong tam giac a co toa do: ";
	Xuat(I);
	DIEM H = MinTungDo(a);
	cout << "\nBai 168: Dinh co tung do lon nhat trong tam giac a co toa do: ";
	Xuat(H);
	DIEM K;
	cout << "\nNhap toa do diem K";
	Nhap(K);
	cout << "\nBai 169: Tong khoang cach tu diem K den ba dinh cua tam giac la: " << TongKhoangCach(a, K);
	cout << "\nBai 170: Tam giac a thuoc loai tam giac: ";
	PhanLoai(a);
	cout << endl;
	return 1;
}
void Nhap(DIEM& P)
{
	cout << "\nx = ";
	cin >> P.x;
	cout << "y = ";
	cin >> P.y;
}
void Xuat(DIEM P)
{
	cout << fixed << setprecision(2) << "(" << P.x << "; " << P.y << ")";
}
void Nhap(TAMGIAC& a)
{
	do
	{
		cout << "\nNhap toa do ba dinh: \nDinh A: ";
		Nhap(a.A);
		cout << "\nDinh B: ";
		Nhap(a.B);
		cout << "\nDinh C: ";
		Nhap(a.C);
		if (KtTamGiac(a.A, a.B, a.C) == 0)
		{
			cout << "\nBa diem da cho khong lap thanh tam giac. Vui long kiem tra va nhap lai cac dinh.";
		}
	} while (KtTamGiac(a.A, a.B, a.C) == 0);
}
void Xuat(TAMGIAC b)
{
	cout << "\nToa do ba dinh lan luot la: ";
	cout << "\nA = ";
	Xuat(b.A);
	cout << "\nB = ";
	Xuat(b.B);
	cout << "\nC = ";
	Xuat(b.C);
}
float KhoangCach(DIEM a, DIEM b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
float BinhPhuongKhoangCach(DIEM a, DIEM b)
{
	return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}
bool KtTamGiac(DIEM a, DIEM b, DIEM c)
{
	float x = KhoangCach(a, b);
	float y = KhoangCach(a, c);
	float z = KhoangCach(c, b);
	if (x >= y + z || y >= x + z || z >= y + x)
		return false;
	return true;
}
float ChuVi(TAMGIAC a)
{
	float x = KhoangCach(a.A, a.B);
	float y = KhoangCach(a.A, a.C);
	float z = KhoangCach(a.B, a.C);
	return x + y + z;
}
float DienTich(TAMGIAC a)
{
	float x = KhoangCach(a.A, a.B);
	float y = KhoangCach(a.A, a.C);
	float z = KhoangCach(a.B, a.C);
	float p = (x + y + z) / 2;
	return sqrt(p * (p - x) * (p - y) * (p - z));
}
DIEM TrongTam(TAMGIAC a)
{
	DIEM g;
	g.x = (a.A.x + a.B.x + a.C.x)/3;
	g.y = (a.A.y + a.B.y + a.C.y)/3;
	return g;
}
DIEM MaxHoanhDo(TAMGIAC a)
{
	DIEM lc;
	lc= a.A;
	if (a.B.x > lc.x)
		lc = a.B;
	if (a.C.x > lc.x)
		lc = a.C;
	return lc;
}
DIEM MinTungDo(TAMGIAC a)
{
	DIEM lc;
	lc = a.A;
	if (a.B.y < lc.y)
		lc = a.B;
	if (a.C.y < lc.y)
		lc = a.C;
	return lc;
}
float TongKhoangCach(TAMGIAC a, DIEM m)
{
	float x = KhoangCach(a.A, m);
	float y = KhoangCach(a.B, m);
	float z = KhoangCach(a.C, m);
	return x + y + z;
}
void PhanLoai(TAMGIAC a)
{
	float x = KhoangCach(a.A, a.B);
	float y = KhoangCach(a.A, a.C);
	float z = KhoangCach(a.B, a.C);
	float x2 = BinhPhuongKhoangCach(a.A, a.B);
	float y2 = BinhPhuongKhoangCach(a.A, a.C);
	float z2 = BinhPhuongKhoangCach(a.B, a.C);
	if (x == y && x == z)
		cout << "\nTam giac deu";
	else
	{
		if (x == y || x == z || y == z)
		{
			if (x2 == y2 + z2 || y2 == x2 + z2 || z2 == y2 + x2)
			{
				cout << "\nTam giac vuong can";
			}
			else
			{
				cout << "\nTam giac can";
			}
		}
		else
		{
			if (x2 == y2 + z2 || y2 == x2 + z2 || z2 == y2 + x2)
			{
				cout << "\nTam giac vuong";
			}
			else
			{
				cout << "\nTam giac thuong";
			}
		}
	}
}

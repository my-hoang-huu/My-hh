#include<iostream>
#include<iomanip>
using namespace std;
struct Bien
{
	float x;
	float y;
	float z;
};
void Nhap(Bien&);
Bien SapXep(Bien&);
void Xuat(Bien);
void KiemTra(Bien);
void KiemTraTamGiac(Bien);
struct Diem
{
	float x;
	float y;
};
void NhapDiem(Diem&, Diem&, Diem&, Diem&);
double DienTichTamGiac(Diem, Diem, Diem);
void KiemTraM(Diem, Diem, Diem, Diem);
void KiemTraABC(Diem, Diem, Diem);

int main()
{
	Bien n;
	Diem A;
	Diem B;
	Diem C;
	Diem M;
	Nhap(n);
	cout << "Bai 129: \n";
	Xuat(n);
	cout << "Bai 130: \n";
	KiemTra(n);
	cout << "Bai 133: \n";
	KiemTraTamGiac(n);
	NhapDiem(A, B, C, M);
	cout << "\nBai 131: \n";
	KiemTraABC(A, B, C);
	cout << "\nBai 132: \n";
	KiemTraM(A, B, C, M);

	system("pause");
	return 1;
}
void Nhap(Bien& x)
{
	cout << "Nhap x: ";
	cin >> x.x;
	cout << "Nhap y: ";
	cin >> x.y;
	cout << "Nhap z: ";
	cin >> x.z;
}
Bien SapXep(Bien& y)
{
	float lc;
	if (y.x > y.y)
	{
		lc = y.x;
		y.x = y.y;
		y.y = lc;
	}
	if (y.x > y.z)
	{
		lc = y.x;
		y.x = y.z;
		y.z = lc;
	}
	if (y.y > y.z)
	{
		lc = y.y;
		y.y = y.z;
		y.z = lc;
	}
	return y;
}
void Xuat(Bien z)
{
	SapXep(z);
	cout << "Gia tri cac so tang dan:";
	cout << setw(6) << z.x << setw(6) << z.y << setw(6) << z.z << endl;
}
void KiemTra(Bien x)
{
	if (x.x + x.y > x.z && x.x + x.z > x.y && x.z + x.y > x.x)
	{
		cout << "Co ton tai tam giac do dai ba canh x, y, z" << endl;
	}
	else
	{
		cout << "Khong ton tai tam giac co do dai ba canh x, y, z" << endl;
	}
}
void KiemTraTamGiac(Bien a)
{
	SapXep(a);
	if (a.x + a.y <= a.z)
	{
		cout << "Khong ton tai tam giac do dai 3 canh x, y, z" << endl;
	}
	else
	{
		if (a.x == a.y && a.x == a.z)
		{
			cout << "x, y, z la do dai ba canh cua mot tam giac deu" << endl;
		}
		else
		{
			if (a.x == a.y || a.x == a.z || a.y == a.z)
			{
				if (a.x * a.x + a.y * a.y == a.z * a.z)
				{
					cout << "x, y, z la do dai ba canh cua mot tam giac vuong can" << endl;
				}
				else
				{
					cout << "x, y, z la do dai ba canh cua mot tam giac can" << endl;
				}
			}
			else
			{
				if (a.x * a.x + a.y * a.y == a.z * a.z)
				{
					cout << "x, y, z la do dai ba canh cua mot tam giac vuong" << endl;
				}
				else
				{
					cout << "x, y, z la do dai ba canh cua mot tam giac thuong" << endl;
				}
			}
		}
	}
}
void NhapDiem(Diem& a, Diem& b, Diem& c, Diem& m)
{
	cout << "\nNhap toa do cac dinh: \n";
	cout << "toa do dinh A: " << endl;
	cout << "nhap x1: ";
	cin >> a.x;
	cout << "nhap y1: ";
	cin >> a.y;
	cout << "toa do dinh B: " << endl;
	cout << "nhap x2: ";
	cin >> b.x;
	cout << "nhap y2: ";
	cin >> b.y;
	cout << "toa do dinh C: " << endl;
	cout << "nhap x3: ";
	cin >> c.x;
	cout << "nhap y3: ";
	cin >> c.y;
	cout << "toa do dinh M: " << endl;
	cout << "nhap xm: ";
	cin >> m.x;
	cout << "nhap ym: ";
	cin >> m.y;
}
double DienTichTamGiac(Diem a, Diem b, Diem c)
{
	double Sabc = 1.0 / 2 * abs(a.x * b.y + b.x * c.y + c.x * a.y - b.x * a.y - c.x * b.y - a.x * c.y);
	return Sabc;
}
void KiemTraM(Diem a, Diem b, Diem c, Diem m)
{
	double s1 = DienTichTamGiac(a, b, c);
	double s2 = DienTichTamGiac(a, b, m);
	double s3 = DienTichTamGiac(a, m, c);
	double s4 = DienTichTamGiac(m, b, c);

	if (s1 = s2 + s3 + s4)
		cout << "Diem M nam trong tam giac ABC\n\n";
	else
		cout << "Diem M nam ngoai tam giac ABC\n\n";
}
void KiemTraABC(Diem m, Diem n, Diem o)
{
	float a = sqrt((n.x - m.x) * (n.x - m.x) + (n.y - m.y) * (n.y - m.y));
	float b = sqrt((o.x - m.x) * (o.x - m.x) + (o.y - m.y) * (o.y - m.y));
	float c = sqrt((o.x - n.x) * (o.x - n.x) + (o.y - n.y) * (o.y - n.y));
	if (abs(a - b) < c < abs(a + b))
	{
		cout << "Co ton tai tam giac voi ba dinh A, B, C" << endl;
	}
	else
	{
		cout << "Khong ton tai tam giac voi ba dinh A, B, C" << endl;
	}
}



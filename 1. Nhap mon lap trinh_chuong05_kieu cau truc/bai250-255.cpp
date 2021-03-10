#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
using namespace std;
struct SOPHUC
{
	float Thuc;
	float Ao;
};
void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Tong(SOPHUC, SOPHUC);
SOPHUC Hieu(SOPHUC, SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);
SOPHUC Thuong(SOPHUC, SOPHUC);
SOPHUC LuyThua(SOPHUC, int);

void Nhap(SOPHUC [][10], int&, int&);
void Xuat(SOPHUC [][10], int, int);
SOPHUC DuongDau(SOPHUC[][10], int, int);
SOPHUC AmCuoi(SOPHUC[][10], int, int);
bool TraiDau(SOPHUC);
bool DongTraiDau(SOPHUC[][10], int, int);
int DemDongTraiDau(SOPHUC[][10], int, int);
SOPHUC MaxThuc(SOPHUC[][10], int, int);

int main()
{
	SOPHUC a[10][10];
	int m, n;
	cout << "Bai 250: Nhap mang so thuc: ";
	Nhap(a, m, n);
	cout << "\nBai 251: Mang ban dau: ";
	Xuat(a, m, n);
	cout << "\nBai 252: So phuc dau tien trong mang co phan thuc va phan ao duong: ";
	Xuat(DuongDau(a, m, n));
	cout << "\nBai 253: So phuc cuoi cung trong mang co phan thuc va phan ao am: ";
	Xuat(AmCuoi(a, m, n));
	cout << "\nBai 254: So dong chua toan so phuc co phan thuc trai dau phan ao: " << DemDongTraiDau(a, m, n);
	cout << "\nBai 255: So phuc co phan thuc lon nhat trong ma tran: ";
	Xuat(MaxThuc(a, m, n));
	cout << endl;
	return 1;
}
void Nhap(SOPHUC& a)
{
	/*cout << "\nNhap phan thuc: ";
	cin >> a.Thuc;
	cout << "Nhap phan ao: ";
	cin >> a.Ao;*/
	a.Thuc = rand() % 21 - 10;
	a.Ao = rand() % 21 - 10;
}
void Xuat(SOPHUC a)
{
	cout << setw(8) << a.Thuc << " + " << a.Ao << "*i";
}
SOPHUC Tong(SOPHUC a, SOPHUC b)
{
	SOPHUC s;
	s.Thuc = a.Thuc + b.Thuc;
	s.Ao = a.Ao + b.Ao;
	return s;
}
SOPHUC Hieu(SOPHUC a, SOPHUC b)
{
	SOPHUC s;
	s.Thuc = a.Thuc - b.Thuc;
	s.Ao = a.Ao - b.Ao;
	return s;
}
SOPHUC Tich(SOPHUC a, SOPHUC b)
{
	SOPHUC s;
	s.Thuc = a.Thuc * b.Thuc - a.Ao * b.Ao;
	s.Ao = a.Thuc * b.Ao + a.Ao * b.Thuc;
	return s;
}
SOPHUC Thuong(SOPHUC a, SOPHUC b)
{
	SOPHUC s;
	s.Thuc = (a.Thuc * b.Thuc - a.Ao * b.Ao) / (b.Thuc * b.Thuc + b.Ao * b.Ao);
	s.Ao = a.Ao * b.Thuc - a.Thuc * b.Ao / (b.Thuc * b.Thuc + b.Ao * b.Ao);
	return s;
}
SOPHUC LuyThua(SOPHUC a, int n)
{
	SOPHUC temp = { 1, 0 };
	for (int i = 1; i <= n; i++)
	{
		temp = Tich(temp, a);
	}
	return temp;
}
void Nhap(SOPHUC a[][10], int& m, int& n)
{
	cout << "\nNhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
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
void Xuat(SOPHUC a[][10], int m, int n)
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
SOPHUC DuongDau(SOPHUC a[][10], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j].Thuc > 0 && a[i][j].Ao > 0)
				return a[i][j];
		}
	}
	return { 0, 0 };
}
SOPHUC AmCuoi(SOPHUC a[][10], int m, int n)
{
	for (int i = m - 1; i >= 0; i--)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			if (a[i][j].Thuc < 0 && a[i][j].Ao < 0)
				return a[i][j];
		}
	}
	return { 0, 0 };
}
bool TraiDau(SOPHUC a)
{
	if (a.Thuc * a.Ao < 0)
		return true;
	return false;
}
bool DongTraiDau(SOPHUC a[][10], int d, int n)
{
	for (int j = 0; j < n; j++)
	{
		if (TraiDau(a[d][j]) == 0)
			return false;
	}
	return true;
}
int DemDongTraiDau(SOPHUC a[][10], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		if (DongTraiDau(a, i, n))
			dem++;
	}
	return dem;
}
SOPHUC MaxThuc(SOPHUC a[][10], int m, int n)
{
	SOPHUC lc = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j].Thuc > lc.Thuc)
				lc = a[i][j];
		}
	}
	return lc;
}
#include<iostream>
#include<iomanip>
using namespace std;
struct SOPHUC
{
	float Thuc;
	float Ao;
};
void Nhap(SOPHUC&);
void Xuat(SOPHUC);
void Nhap(SOPHUC[], int&);
void Xuat(SOPHUC[], int);
SOPHUC Tong(SOPHUC, SOPHUC);
SOPHUC TongMang(SOPHUC[], int);
SOPHUC DuongDauTien(SOPHUC[], int);
void SapTangThuc(SOPHUC[], int);
void HoanVi(SOPHUC&, SOPHUC&);
int main()
{
	SOPHUC a[100];
	int n;
	cout << "Bai 207: Nhap mang so phuc: ";
	Nhap(a, n);
	cout << "\nBai 208: Mang ban dau: \n";
	Xuat(a, n);
	cout << "\nBai 209: Tong cac so phuc trong mang ban dau: \n";
	Xuat(TongMang(a, n));
	cout << "\nBai 210: So phuc co phan thuc va ao duong dau tien trong mang: ";
	Xuat(DuongDauTien(a, n));
	cout << "\nBai 211: Mang so phuc sau khi sap tang phan thuc: ";
	SapTangThuc(a, n);
	Xuat(a, n);

	cout << endl;
	return 1;
}
void Nhap(SOPHUC& P)
{
	/*cout << "\nThuc = "; 
	cin >> P.Thuc;*/
	P.Thuc = rand() % 201 - 100;
	/*cout << "Ao = ";
	cin >> P.Ao;*/
	P.Ao = rand() % 201 - 100;

}
void Xuat(SOPHUC P)
{
	cout << P.Thuc << " + " << P.Ao << "*i" << setw(7);
}
void Nhap(SOPHUC a[], int& n)
{
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		Nhap(a[i]);
	}
}
void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
	}
}
SOPHUC Tong(SOPHUC a, SOPHUC b)
{
	SOPHUC s;
	s.Thuc = a.Thuc + b.Thuc;
	s.Ao = a.Ao + b.Ao;
	return s;
}
SOPHUC TongMang(SOPHUC a[], int n)
{
	SOPHUC s = { 0,0 };
	for (int i = 0; i < n; i++)
	{
		s = Tong(s, a[i]);
	}
	return s;
}
SOPHUC DuongDauTien(SOPHUC a[], int n)
{
	SOPHUC lc = { -1, -1 };
	for (int i = 0; i < n; i++)
	{
		if (a[i].Thuc > 0 && a[i].Ao > 0)
		{
			return a[i];
		}
	}
	return lc;
}
void SapTangThuc(SOPHUC a[], int n)
{
	if (n == 0)
		return;
	for (int i = n - 2; i >= 0; i--)
	{
		if (a[n-1].Thuc< a[i].Thuc)
		{
			HoanVi(a[n - 1], a[i]);
		}
	}
	SapTangThuc(a, n - 1);
}
void HoanVi(SOPHUC& a, SOPHUC& b)
{
	SOPHUC temp = a;
	a = b;
	b = temp;
}


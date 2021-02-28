#include<iostream>
#include<iomanip>
using namespace std;
struct PHANSO
{
	int Tu;
	int Mau;
};
void Nhap(PHANSO&);
void Xuat(PHANSO);
void Nhap(PHANSO[], int&);
void Xuat(PHANSO[], int);
int DemPhanSoDuong(PHANSO[], int);
PHANSO LonNhat(PHANSO[], int);
int ViTriNhoNhat(PHANSO[], int);
PHANSO DuongDauTien(PHANSO[], int);
PHANSO DuongNhoNhat(PHANSO[], int);
int ViTriAmLonNhat(PHANSO[], int);
void SapTang(PHANSO[], int);
void HoanVi(PHANSO&, PHANSO&);


int main()
{
	cout << "Bai 198: Nhap mang ban dau: ";
	int n;
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	PHANSO* a = new PHANSO[n];
	Nhap(a, n);
	cout << "\nBai 199: Mang ban dau: ";
	Xuat(a, n);
	Nhap(a, n);
	cout << "\nBai 200: So luong phan so duong trong mang: " << DemPhanSoDuong(a, n);
	cout << "\nBai 201: Phan so lon nhat trong mang: ";
	Xuat(LonNhat(a, n));
	cout << "\nBai 202: Vi tri co phan so nho nhat trong mang: " << ViTriNhoNhat(a, n);
	cout << "\nBai 203: Phan so duong dau tien trong mang: ";
	Xuat(DuongDauTien(a, n));
	cout << "\nBai 204: Phan so duong nho nhat trong mang: ";
	Xuat(DuongNhoNhat(a, n));
	cout << "\nBai 205: Vi tri gia tri am lon nhat trong mang: " << ViTriAmLonNhat(a, n);
	cout << "\nBai 206: Mang a sau khi sap tang: ";
	SapTang(a, n);
	Xuat(a, n);
	cout << endl;
	return 1;
}
void Nhap(PHANSO& P)
{
	//cout << "\nNhap tu: ";
	//cin >> P.Tu;
	P.Tu = rand() % 201 - 100;
	do
	{
		/*cout << "Nhap mau: ";
		cin >> P.Mau;*/
		P.Mau = rand() % 201 - 100;
	/*	if (P.Mau == 0)
		{
			cout << "\nMau so phai khac 0. Vui long kiem tra va nhap lai!";
		}*/
	} while (P.Mau == 0);
}
void Xuat(PHANSO P)
{
	cout << P.Tu << "/" << P.Mau << setw(5);
}
void Nhap(PHANSO a[], int& n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		Nhap(a[i]);
	}
}
void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
	}
}
int DemPhanSoDuong(PHANSO a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].Tu * a[i].Mau > 0)
			dem++;
	}
	return dem;
}
PHANSO LonNhat(PHANSO a[], int n)
{
	int lc = 0;
	for (int i = 1; i < n; i++)
	{
		if ((float)a[i].Tu / a[i].Mau > (float)a[lc].Tu / a[lc].Mau)
			lc = i;
	}
	return a[lc];
}
int ViTriNhoNhat(PHANSO a[], int n)
{
	int lc = 0;
	for (int i = 1; i < n; i++)
	{
		if ((float)a[i].Tu / a[i].Mau < (float)a[lc].Tu / a[lc].Mau)
			lc = i;
	}
	return lc;
}
PHANSO DuongDauTien(PHANSO a[], int n)
{
	PHANSO temp = { 0, 1 };
	for (int i = 0; i < n; i++)
	{
		if (a[i].Tu * a[i].Mau > 0)
		{
			return a[i];
		}
	}
	return temp;
}
PHANSO DuongNhoNhat(PHANSO a[], int n)
{
	PHANSO lc = DuongDauTien(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i].Tu * a[i].Mau > 0 && (float)a[i].Tu / a[i].Mau < (float)lc.Tu / lc.Mau)
		{
			lc = a[i];
		}
	}
	if (lc.Tu == 0)
	{
		lc = { -1 / 1 };
	}
	return lc;
}
int ViTriAmLonNhat(PHANSO a[], int n)
{
	if (n == 0)
	{
		return -1;
	}
	int lc = ViTriAmLonNhat(a, n - 1);
	if (a[n-1].Tu*a[n-1].Mau > 0)
	{
		return lc;
	}
	if (lc == -1 || (float)a[n - 1].Tu / a[n - 1].Mau > (float)a[lc].Tu / a[lc].Mau)
	{
		return n - 1;
	}
}
void SapTang(PHANSO a[], int n)
{
	for (int  i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((float)a[i].Tu / a[i].Mau > (float)a[j].Tu / a[j].Mau)
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}
void HoanVi(PHANSO& a, PHANSO& b)
{
	PHANSO temp = a;
	a = b;
	b = temp;
}

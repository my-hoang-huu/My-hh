#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct PHANSO
{
	int Tu;
	int Mau;
};
void Nhap(PHANSO&);
void Xuat(PHANSO);
int UCLN(int, int);
void RutGon(PHANSO&);
PHANSO Tong(PHANSO, PHANSO);
PHANSO Hieu(PHANSO, PHANSO);
PHANSO Tich(PHANSO, PHANSO);
PHANSO Thuong(PHANSO, PHANSO);
PHANSO operator+(PHANSO, PHANSO);
PHANSO operator-(PHANSO, PHANSO);
PHANSO operator*(PHANSO, PHANSO);
PHANSO operator/(PHANSO, PHANSO);
bool CoNghia(PHANSO&);
bool ToiGian(PHANSO);
int Duong(PHANSO);
void QuyDongMau(PHANSO&, PHANSO&);
void QuyDongTu(PHANSO&, PHANSO&);
int SoSanh(PHANSO, PHANSO);

void Nhap(PHANSO[][10], int&, int&);
void Xuat(PHANSO[][10], int, int);
PHANSO LonNhat(PHANSO[][10], int, int);
int DemNhoNhat(PHANSO[][10], int, int);
PHANSO AmLonNhat(PHANSO[][10], int, int);
void SapTang(PHANSO[][10], int, int);
void HoanVi(PHANSO&, PHANSO&);
void LietKeToiGian(PHANSO[][10], int, int);
int main()
{
	cout << "Bai 243: Nhap ma tran: ";
	int m, n;
	PHANSO a[100][10];
	Nhap(a, m, n);
	cout << "\nBai 244: Ma tran ban dau: ";
	Xuat(a, m, n);
	cout << "\nBai 245: Phan so lon nhat trong ma tran: ";
	Xuat(LonNhat(a, m, n));
	cout << "\nBai 246: So luong phan so nho nhat trong ma tran: " << DemNhoNhat(a, m, n);
	cout << "\nBai 247: Phan so am lon nhat trong mang: ";
	Xuat(AmLonNhat(a, m, n));
	cout << "\nBai 248: Ma tran sau khi sap tang theo dong va cot: ";
	SapTang(a, m, n);
	Xuat(a, m, n);
	cout << "\nCac phan so toi gian trong ma tran sap xep theo thu tu tang dan: ";
	LietKeToiGian(a, m, n);
	cout << endl;
	return 1;
}
void Nhap(PHANSO& a)
{
	a.Tu = rand() % 21 - 10;
	do
	{
		a.Mau = rand() % 21 - 10;
	} while (a.Mau == 0);

}
void Xuat(PHANSO a)
{
	cout << setw(8) << a.Tu << "/" << a.Mau;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}
void RutGon(PHANSO& a)
{
	int u = UCLN(a.Tu, a.Mau);
	a.Tu = a.Tu / u;
	a.Mau = a.Mau / u;
}
PHANSO Tong(PHANSO a, PHANSO b)
{
	PHANSO s;
	s.Tu = (a.Tu * b.Mau + b.Tu * a.Mau);
	s.Mau = a.Mau * b.Mau;
	RutGon(s);
	return s;
}
PHANSO Hieu(PHANSO a, PHANSO b)
{
	PHANSO s;
	s.Tu = (a.Tu * b.Mau - b.Tu * a.Mau);
	s.Mau = a.Mau * b.Mau;
	RutGon(s);
	return s;
}
PHANSO Tich(PHANSO a, PHANSO b)
{
	PHANSO s;
	s.Tu = a.Tu * b.Tu;
	s.Mau = a.Mau * b.Mau;
	return s;
}
PHANSO Thuong(PHANSO a, PHANSO b)
{
	PHANSO s;
	s.Tu = a.Tu * b.Mau;
	s.Mau = a.Mau * b.Tu;
	return s;
}
bool CoNghia(PHANSO& a)
{
	if (a.Mau != 0)
		return true;
	return false;
}
int Duong(PHANSO a)
{
	if (a.Tu * a.Mau > 0)
		return 1;
	if (a.Tu * a.Mau < 0)
		return -1;
	else
		return 0;
}
bool ToiGian(PHANSO a)
{
	if (UCLN(a.Tu, a.Mau) == 1)
		return true;
	return false;
}
void QuyDongMau(PHANSO& a, PHANSO& b)
{
	int mc = a.Mau * b.Mau;
	a.Tu = a.Tu * b.Mau;
	b.Tu = b.Tu * a.Mau;
	a.Mau = mc;
	b.Mau = mc;
}
void QuyDongTu(PHANSO& a, PHANSO& b)
{
	int tc = a.Tu * b.Tu;
	a.Mau = a.Mau * b.Tu;
	b.Mau = b.Mau * a.Tu;
	a.Tu = tc;
	b.Tu = tc;
}
int SoSanh(PHANSO a, PHANSO b)
{
	float x = (float)a.Tu / a.Mau;
	float y = (float)b.Tu / b.Mau;
	if (x > y)
		return 1;
	if (x < y)
		return -1;
	return 0;
}
PHANSO operator+(PHANSO a, PHANSO b)
{
	PHANSO s;
	s.Tu = (a.Tu * b.Mau + b.Tu * a.Mau);
	s.Mau = a.Mau * b.Mau;
	RutGon(s);
	return s;
}
PHANSO operator-(PHANSO a, PHANSO b)
{
	PHANSO s;
	s.Tu = (a.Tu * b.Mau - b.Tu * a.Mau);
	s.Mau = a.Mau * b.Mau;
	RutGon(s);
	return s;
}
PHANSO operator*(PHANSO a, PHANSO b)
{
	PHANSO s;
	s.Tu = a.Tu * b.Tu;
	s.Mau = a.Mau * b.Mau;
	RutGon(s);
	return s;
}
PHANSO operator/(PHANSO a, PHANSO b)
{
	PHANSO s;
	s.Tu = a.Tu * b.Mau;
	s.Mau = a.Mau * b.Tu;
	RutGon(s);
	return s;
}
void Nhap(PHANSO a[][10], int& m, int& n)
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
void Xuat(PHANSO a[][10], int m, int n)
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
PHANSO LonNhat(PHANSO a[][10], int m, int n)
{
	PHANSO lc = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (SoSanh(a[i][j], lc) == 1)
			{
				lc = a[i][j];
			}
		}
	}
	return lc;
}
int DemNhoNhat(PHANSO a[][10], int m, int n)
{
	PHANSO lc = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (SoSanh(a[i][j], lc) == -1)
			{
				lc = a[i][j];
			}
		}
	}
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (SoSanh(a[i][j], lc) == 0)
			{
				/*cout << "\nPhan so: ";
				Xuat(a[i][j]);*/
				dem++;
			}
		}
	}
	return dem;
}
PHANSO AmLonNhat(PHANSO a[][10], int m, int n)
{
	PHANSO temp = { 0, 1 };
	PHANSO lc = temp;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((SoSanh(lc, temp) == 0 || SoSanh(a[i][j], lc) == 1) && a[i][j].Tu * a[i][j].Mau < 0)
			{
				lc = a[i][j];
			}
		}
	}
	return lc;
}
void SapTang(PHANSO a[][10], int m, int n)
{
	for (int k = 0; k < m*n-1; k++)
	{
		for (int l = k +1; l < m*n; l++)
		{
			if (SoSanh(a[k / n][k % n], a[l / n][l % n]) == 1)
				HoanVi(a[k / n][k % n], a[l / n][l % n]);
		}
	}

	/*PHANSO b[100];
	int k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[k++] = a[i][j];
		}
	}
	for (int i = 0; i < k - 1; i++)
	{
		for (int j = i + 1; j < k; j++)
		{
			if (SoSanh(b[i], b[j]) == 1)
				HoanVi(b[i], b[j]);
		}
	}
	k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = b[k++];
		}
	}*/
}
void HoanVi(PHANSO& a, PHANSO& b)
{
	PHANSO t = a;
	a = b;
	b = t;
}
void LietKeToiGian(PHANSO a[][10], int m, int n)
{
	SapTang(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ToiGian(a[i][j]))
				Xuat(a[i][j]);
		}
	}
}
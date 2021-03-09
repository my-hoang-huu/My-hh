#include<iostream>
#include<iomanip>
#define MAX 20
using namespace std;
struct DATHUC
{
	float a[MAX];
	int n;
};
void Nhap(DATHUC&);
void KhoiTaoDaThucRong(DATHUC&);
void Xuat(DATHUC);
void ChinhBac(DATHUC&);
DATHUC Tong(DATHUC, DATHUC);
DATHUC Hieu(DATHUC, DATHUC);
DATHUC Tich(DATHUC, DATHUC);
DATHUC DaoHamBac1(DATHUC);
float GiaTriTaiX(DATHUC, float);
void DaoHamBacK(DATHUC);

int main()
{
	DATHUC A;
	DATHUC B;
	cout << "Da thuc A: ";
	Nhap(A);
	cout << "Da thuc A vua nhap: ";
	Xuat(A);
	ChinhBac(A);
	cout << "Da thuc A Sau khi chinh bac: ";
	Xuat(A);
	cout << "\nDa thuc B: ";
	Nhap(B);
	cout << "Da thuc B vua nhap: ";
	Xuat(B);
	DATHUC C = Tong(A, B);
	cout << "\nTong da thuc A va B la da thuc: ";
	Xuat(C);
	DATHUC(D) = Hieu(A, B);
	cout << "\nHieu da thuc A va B la da thuc: ";
	Xuat(D);
	DATHUC(E) = Tich(A, B);
	cout << "\nTich da thuc A va B la da thuc: ";
	Xuat(E);
	DATHUC(F) = DaoHamBac1(A);
	cout << "\nDao ham bac 1 cua A la da thuc: ";
	Xuat(F);
	DaoHamBacK(A);
	float x;
	cout << "\nNhap gia tri x: ";
	cin >> x;
	float s = GiaTriTaiX(A, x);
	cout << "\nDao ham bac " << x << " cua da thuc A la " << s;
	return 1;
}
void KhoiTaoDaThucRong(DATHUC& f)
{
	f.n = 0;
	for (int i = 0; i < MAX; i++)
	{
		f.a[i] = 0;
	}
}
void Nhap(DATHUC& f)
{

	do
	{
		cout << "\nNhap bac da thuc: ";
		cin >> f.n;
		cout << "Nhap he so \n";
		if (f.n < 1)
		{
			cout << "\nBac cua da thuc phai lon hon 0. Xin vui long kiem tra va nhap lai!";
		}
	} while (f.n < 1);
	
	for (int i = f.n; i >= 0; i--)
	{
		cout << "a[" << i << "] = ";
		cin >> f.a[i];
	}
}
void Xuat(DATHUC f)
{
	cout << "f(x) = ";
	for (int i = f.n; i > 0; i--)
	{
		cout << f.a[i] << "x^" << i << " + ";
	}
	cout << f.a[0] << endl;
}
void ChinhBac(DATHUC& f)
{
	for (int i = f.n; i >= 0; i--)
	{
		if (f.a[i] == 0)
			f.n--;
		else
			return;
	}
}
DATHUC Tong(DATHUC a, DATHUC b)
{
	DATHUC kq;
	int min;
	if (a.n > b.n)
	{
		min = b.n;
		kq.n = a.n;
	}
	else
	{
		min = a.n;
		kq.n = b.n;
	}
	for (int i = 0; i <= kq.n; i++)
	{
		if (i <= min)
		{
			kq.a[i] = a.a[i] + b.a[i];
		}
		else
		{
			if (a.n > b.n)
			{
				kq.a[i] = a.a[i];
			}
			else
			{
				kq.a[i] = b.a[i];
			}
		}
	}
	return kq;
}
DATHUC Hieu(DATHUC a, DATHUC b)
{
	DATHUC kq;
	int min;
	if (a.n > b.n)
	{
		min = b.n;
		kq.n = a.n;
	}
	else
	{
		min = a.n;
		kq.n = b.n;
	}
	for (int i = 0; i <= kq.n; i++)
	{
		if (i <= min)
		{
			kq.a[i] = a.a[i] - b.a[i];
		}
		else
		{
			if (a.n > b.n)
			{
				kq.a[i] = a.a[i];
			}
			else
			{
				kq.a[i] = - b.a[i];
			}
		}
	}
	return kq;
}
DATHUC Tich(DATHUC a, DATHUC b)
{
	DATHUC kq;
	KhoiTaoDaThucRong(kq);
	kq.n = a.n + b.n;
	for (int i = 0; i <= a.n; i++)
	{
		for (int j = 0; j <= b.n; j++)
		{
			kq.a[i + j] += a.a[i] * b.a[j];
		}
	}
	return kq;
}
DATHUC DaoHamBac1(DATHUC f)
{
	DATHUC kq;
	kq.n = f.n - 1;
	for (int i = 1; i <= f.n; i++)
	{
		kq.a[i - 1] = i * f.a[i];
	}
	return kq;
}
void DaoHamBacK(DATHUC f)
{
	int k;
	DATHUC kq;
	do
	{
		cout << "\nNhap bac dao ham: ";
		cin >> k;
		if (k > f.n)
		{
			cout << "\nCap dao ham phai nho hon bac da thuc ban dau. Vui long kiem tra va nhap lai!";
		}
	} while (k > f.n);
	kq.n = f.n - k;
	kq = DaoHamBac1(f);
	for (int i = 2; i <= k; i++)
	{
		kq = DaoHamBac1(kq);
		cout << "\nDao ham bac " << i << " cua A la da thuc: ";
		Xuat(kq);
	}
}
float GiaTriTaiX(DATHUC f, float x)
{
	float s = 0;
	for (int i = 0; i <= f.n; i++)
	{
		s += f.a[i] * pow(x, i);
	}
	return s;
}
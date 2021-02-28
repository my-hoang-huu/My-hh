#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
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
void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);
int DemHoanhDuong(DIEM[], int);
DIEM MaxTungDo(DIEM[], int);
DIEM GanGocToaDo(DIEM[], int);
float KhoangCach(DIEM, DIEM);
void HaiDiemGanNhauNhat(DIEM[], int);
int KhongTrung(DIEM[], int);
void TamGiacDocLap(DIEM[], int);
float ChuVi(TAMGIAC);
bool KtTamGiac(DIEM, DIEM, DIEM);

int main()
{
	cout << "Bai 189: Nhap mang: ";
	int n;
	cout << "\nNhap so phan tu: ";
	cin >> n;
	DIEM* a = new DIEM[n];
	Nhap(a, n);
	cout << "Bai 190: Mang ban dau: ";
	Xuat(a, n);
	cout << "\nBai 191: So diem co hoanh do duong trong mang: " << DemHoanhDuong(a, n);
	DIEM b = MaxTungDo(a, n);
	cout << "\nBai 192: Diem co tung do lon nhat trong mang: ";
	Xuat(b);
	DIEM c = GanGocToaDo(a, n);
	cout << "\nBai 193: Diem gan goc toa do nhat trong mang: ";
	Xuat(c);
	cout << "\nBai 194: Hai diem gan nhau nhat trong mang: ";
	HaiDiemGanNhauNhat(a, n);
	cout << "\nBai 195: So phan tu rieng biet trong mang: " << KhongTrung(a, n);
	cout << "\nBai 196: Mot tam giac doc lap trong mang tao boi ba diem: ";
	TamGiacDocLap(a, n);

	cout << endl;
	return 1;
}
void Nhap(DIEM& P)
{
	//cout << "\nx = ";
	//cin >> P.y;
	P.x = rand() % 11 - 5;
	/*cout << "y = ";
	cin >> P.x;*/
	P.y = rand() % 11 - 5;
}
void Xuat(DIEM P)
{
	cout << fixed << setprecision(1) << "(" << P.x << ";" << P.y << ")";
}
void Nhap(DIEM a[], int& n)
{
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		//cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void Xuat(DIEM a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << "\na[" << i << "] = ";
		Xuat(a[i]);
	}
}
int DemHoanhDuong(DIEM a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].x>0)
		{
			dem++;
		}
	}
	return dem;
}
DIEM MaxTungDo(DIEM a[], int n)
{
	DIEM lc = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i].y > lc.y)
		{
			lc = a[i];
		}
	}
	return lc;
}
float KhoangCach(DIEM a, DIEM b)
{
	float d = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
	return d;
}
DIEM GanGocToaDo(DIEM a[], int n)
{
	DIEM o = { 0,0 };
	DIEM lc = a[0];
	for (int i = 1; i < n; i++)
	{
		if (KhoangCach(a[i], o) < KhoangCach(lc, o))
		{
			lc = a[i];
		}
	}
	return lc;
}
void HaiDiemGanNhauNhat(DIEM a[], int n)
{

	KhoangCach(a[0], a[1]);
	DIEM d1 = a[0];
	DIEM d2 = a[1];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (KhoangCach(a[i], a[j]) < KhoangCach(d1, d2))
			{
				d1 = a[i];
				d2 = a[j];
			}	
		}
	}
	Xuat(d1);
	cout << " va ";
	Xuat(d2);
}
int KhongTrung(DIEM a[], int n)
{
	int dem = 0;
	int stt;
	for (int i = 0; i < n; i++)
	{
		stt = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[i].x == a[j].x && a[i].y == a[j].y)
			{
				stt++;
			}
		}
		if (stt == 1)
			dem++;
	}
	return dem;
}
void TamGiacDocLap(DIEM a[], int n)
{
	TAMGIAC t = { a[0], a[1], a[2] };
	float lc1 = ChuVi(t);
	DIEM lc = a[2];
	for (int i = 3; i < n; i++)
	{
		t.C = a[i];
		if (ChuVi(t) < lc1 && KtTamGiac(a[0], a[1], t.C))
		{
			lc1 = ChuVi(t);
			lc = a[i];
		}
	}
	Xuat(a[0]);
	Xuat(a[1]);
	Xuat(lc);
}
float ChuVi(TAMGIAC a)
{
	float x = KhoangCach(a.A, a.B);
		float y = KhoangCach(a.A, a.C);
		float z = KhoangCach(a.B, a.C);
		return x + y + z;
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
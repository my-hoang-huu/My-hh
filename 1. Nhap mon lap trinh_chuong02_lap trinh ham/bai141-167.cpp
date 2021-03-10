#include <iostream>
#include<iomanip>
using namespace std;
void Nhapn(float&);
double KetQua141(float);
double KetQua142(float);
void KetQua143(int);
void KetQua144(int);
void KetQua145(int);
void KetQua146(int);
void KetQua147(int);
void KetQua148(int);
void Nhapab(float&, float&);
int KetQua149(float, float);
int KetQua150(float, float);
void KetQua151(int);
void KetQua152(int);
void KetQua153(int);
void KetQua154(int);
void KetQua155(int);
void KetQua156(int);
void KetQua157(int);
void KetQua158(int);
void KetQua159(int);
void KetQua160(int);
void KetQua161(int);
void KetQua162(int);
int KetQua163(int);
double KetQua164(int);
int KetQua165(int);
int KetQua166(int);
int KetQua167(int);

int main()
{
	float n, a, b;
	Nhapn(n);
	cout << "Bai 141: ";
	double kq141 = KetQua141(n);
	cout << "chu so dau tien cua so nguyen duong " << n << " la: " << kq141 << endl;
	cout << "Bai 142: ";
	double kq142 = KetQua142(n);
	cout << "chu so dao nguoc cua so nguyen duong " << n << " la: " << kq142 << endl;
	cout << "Bai 143: ";
	KetQua143(n);
	cout << "Bai 144: ";
	KetQua144(n);
	cout << "Bai 145: ";
	KetQua145(n);
	cout << "Bai 146: ";
	KetQua146(n);
	cout << "Bai 147: ";
	KetQua147(n);
	cout << "Bai 148: ";
	KetQua148(n);
	Nhapab(a, b);
	cout << "Bai 149: ";
	int kq149 = KetQua149(a, b);
	cout << "uoc chung lon nhat cua " << a << " va " << b << " la: " << kq149 << endl;
	cout << "Bai 150: ";
	int kq150 = KetQua150(a, b);
	cout << "Boi chung nho nhat cua " << a << " va " << b << " la: " << kq150 << endl;
	cout << "Bai 151: ";
	KetQua151(n);
	cout << "Bai 152: ";
	KetQua152(n);
	cout << "Bai 153: ";
	KetQua153(n);
	cout << "Bai 154: ";
	KetQua154(n);
	cout << "Bai 155: ";
	KetQua155(n);
	cout << "Bai 156: ";
	KetQua156(n);
	cout << "Bai 157: ";
	KetQua157(n);
	cout << "Bai 158: ";
	KetQua158(n);
	cout << "Bai 159: ";
	KetQua159(n);
	cout << "Bai 160: ";
	KetQua160(n);
	cout << "Bai 161: ";
	KetQua161(n);
	cout << "Bai 162: ";
	KetQua162(n);
	cout << "Bai 163: ";
	int kq163 = KetQua163(n);
	cout << "Uoc so le lon nhat cua so nguyen duong " << n << " la: " << kq163 << endl;
	cout << "Bai 164: ";
	float kq164 = KetQua164(n);
	cout << "Gia tri bieu thuc S(" << n << ") la: " << kq164 << endl;
	cout << "Bai 165: ";
	int kq165 = KetQua165(n);
	cout << "So nguyen k lon nhat thoa man 2^k < " << n << " la: " << kq165 << endl;
	cout << "Bai 166: ";
	int kq166 = KetQua166(n);
	cout << "So nguyen k nho nhat thoa man 2^k > " << n << " la: " << kq166 << endl;
	cout << "Bai 167: ";
	int kq167 = KetQua167(n);
	cout << "So nguyen k lon nhat thoa man S(k) < " << n << " la: " << kq167 << endl;
	system("pause");
	return 1;
}

void Nhapn(float& n)
{
	/*cout << "nhap x: ";
	cin >> x;*/
	cout << "nhap n: ";
	cin >> n;
}
void Nhapab(float& a, float& b)
{
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
}
double KetQua141(float n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}
double KetQua142(float n)
{
	int dn = 0, t = n, dv;

	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}
void KetQua143(int n)
{
	int s = 0, i = 1;
	while (i < n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 1;
	}
	if (s == n)
	{
		cout << n << " la so hoan thien." << endl;
	}
	else
	{
		cout << n << " la so KHONG hoan thien." << endl;
	}
}
void KetQua144(int n)
{
	int dem = 0, i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			dem = dem++;
		i = i++;
		if (dem == 3)
			break;
	}
	if (dem == 2)
	{
		cout << n << " la so nguyen to." << endl;
	}
	else
	{
		cout << n << " khong phai la so nguyen to." << endl;
	}
}
void KetQua145(int n)
{
	int flag = 0, i = 0;
	while (i <= n)
	{
		if (i * i == n)
		{
			flag = 1;
			break;
		}
		i = i++;
	}
	if (flag == 1)
	{
		cout << n << " la so chinh phuong." << endl;
	}
	else
	{
		cout << n << " khong phai la so chinh phuong." << endl;
	}
}
void KetQua146(int n)
{
	int dn = 0, t = n, dv;
	dn = KetQua142(n);
	if (n == dn)
		cout << n << " la so doi xung" << endl;
	else
		cout << n << " khong phai la so doi xung" << endl;
}
void KetQua147(int n)
{
	int t = n;
	int dv = t % 10;
	int flag = 1;
	while (t != 0 || n == 0)
	{
		dv = t % 10;
		if (dv % 2 == 0)
		{
			flag = 0;
			break;
		}
		t = t / 10;
	}
	if (flag == 1)
	{
		cout << n << " gom toan chu so le" << endl;
	}
	else
	{
		cout << n << " co chua chu so chan" << endl;
	}
}
void KetQua148(int n)
{
	int t = n;
	int dv = t % 10;
	int flag = 1;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 1)
		{
			flag = 0;
			break;
		}
		t = t / 10;
	}
	if (flag == 1)
	{
		cout << n << " gom toan chu so chan" << endl;
	}
	else
	{
		cout << n << " co chua chu so le" << endl;
	}
}
int KetQua149(float a, float b)
{
	int m = abs(a);
	int n = abs(b);
	while ((m * n) != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	int s = m + n;
	return s;
}
int KetQua150(float a, float b)
{
	int m = abs(a);
	int n = abs(b);
	while ((m * n) != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	int s = m + n;
	long kq = abs(a * b) / s;
	return kq;
}
void KetQua151(int n)
{
	int t = 1;
	int i = 0;
	int flag = 0;
	while (t <= n)
	{
		if (t == n)
		{
			cout << "So nguyen " << n << " co dang 2^" << i << endl;
			flag = 1;
			break;
		}
		t = t * 2;
		i = i + 1;
	}
	if (flag == 0)
	{
		cout << "So nguyen " << n << " khong co dang 2^k" << endl;
	}
}
void KetQua152(int n)
{
	int t = 1;
	int i = 0;
	int flag = 0;
	while (t <= n)
	{
		if (t == n)
		{
			cout << "So nguyen " << n << " co dang 3^" << i << endl;
			flag = 1;
			break;
		}
		t = t * 3;
		i = i + 1;
	}
	if (flag == 0)
	{
		cout << "So nguyen " << n << " khong co dang 3^k" << endl;
	}
}
void KetQua153(int n)
{
	int t = 1;
	int i = 0;
	int flag = 0;
	while (t <= n)
	{
		if (t == n)
		{
			cout << "So nguyen " << n << " co dang 5^" << i << endl;
			flag = 1;
			break;
		}
		t = t * 5;
		i = i + 1;
	}
	if (flag == 0)
	{
		cout << "So nguyen " << n << " khong co dang 5^k" << endl;
	}
}
void KetQua154(int n)
{
	long at = n;
	long ahh;

	if (n >= 2)
	{
		cout << "Day so mua da cua " << n << " la: " << endl;
		cout << n << endl;
		while (at != 1)
		{
			if (at % 2 == 0)
			{
				ahh = at / 2;
				cout << ahh << endl;
				at = ahh;
			}
			else
			{
				ahh = 3 * at + 1;
				cout << ahh << endl;
				at = ahh;
			}
		}
	}
	else
	{
		cout << "Khong ton tai day so mua da voi so nguyen " << n << endl;
	}
}
void KetQua155(int n)
{
	int a = 2;
	int i = 0;
	cout << "Day gia tri can tim: " << endl;
	while (i <= n)
	{
		cout << "a(" << i << ") = " << a << endl;
		i = i + 1;
		a = a * 2;
	}
}
void KetQua156(int n)
{
	int a = 1;
	int i = 0;
	cout << "Day gia tri can tim: " << endl;
	while (i <= n)
	{
		cout << "a(" << i << ") = " << a << endl;
		i = i + 1;
		a = a * i;
	}
}
void KetQua157(int n)
{
	float a = 0;
	int i = 1;
	cout << "Day gia tri can tim: " << endl;
	while (i <= n)
	{
		a = a + 1.0 / i;
		cout << "a(" << i << ") = " << a << endl;
		i = i + 1;
	}
}
void KetQua158(int n)
{
	int t = n;
	int lc = t % 10;
	int ts = n;
	int dem = 0;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
		{
			lc = dv;
		}
		t = t / 10;
	}
	while (ts != 0)
	{
		int dv = ts % 10;
		if (dv == lc)
		{
			dem++;
		}
		ts = ts / 10;
	}
	cout << "So luong chu so lon nhat cua so nguyen duong " << n << " la: " << dem << endl;
}
void KetQua159(int n)
{
	int t = n;
	int lc = t % 10;
	int ts = n;
	int dem = 0;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv < lc)
		{
			lc = dv;
		}
		t = t / 10;
	}
	while (ts != 0)
	{
		int dv = ts % 10;
		if (dv == lc)
		{
			dem++;
		}
		ts = ts / 10;
	}
	cout << "SO LUONG chu so NHO NHAT cua so nguyen duong " << n << " la: " << dem << endl;
}
void KetQua160(int n)
{
	long long t = n;
	long long ts = n;
	int dem = 0;
	while (t >= 10)
	{
		t = t / 10;
	}
	while (ts != 0)
	{
		int dv = ts % 10;
		if (dv == t)
		{
			dem++;
		}
		ts = ts / 10;
	}
	cout << "So luong chu so dau tien cua so nguyen duong " << n << " la: " << dem << endl;
}
void KetQua161(int n)
{
	int t = n;
	int flag = 1;
	int lc = t % 10;
	t = t / 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
		{
			flag = 0;
			break;
		}
		lc = dv;
		t = t / 10;
	}
	if (flag == 1)
		cout << "So nguyen duong " << n << " CO cac chu so tang dan tu trai sang phai " << endl;
	else
		cout << "Cac chu so cua so nguyen duong " << n << " KHONG tang dan tu trai sang phai " << endl;
}
void KetQua162(int n)
{
	int t = n;
	int flag = 1;
	int lc = t % 10;
	t = t / 10;
	while (t != 0)
	{
		int dv = t % 10;
		//cout << "dv = " << dv << endl;
		//cout << "lc = " << lc << endl;
		if (dv < lc)
		{
			flag = 0;
			//cout << "flag = " << flag << endl << endl;
		}
		lc = dv;
		t = t / 10;
	}
	if (flag == 1)
	{
		cout << "So nguyen duong " << n << " CO cac chu so GIAM dan tu trai sang phai " << endl;
	}
	else
	{
		cout << "Cac chu so cua so nguyen duong " << n << " KHONG GIAM dan tu trai sang phai " << endl;
	}
}
int KetQua163(int n)
{
	int t = n;
	while (t % 2 == 0)
	{
		t = t / 2;
	}
	return t;
}
double KetQua164(int n)
{
	double s = 1;
	int i = 1;
	while (i <= n)
	{
		s = 1.0 / (1 + s);
		i = i + 1;
	}
	return s;
}
int KetQua165(int n)
{
	double t = 1;
	int i = 0;
	int lc = i;
	while (t < n)
	{
		t = t * 2;
		lc = i;
		i = i + 1;
	}
	return lc;
}
int KetQua166(int n)
{
	int t = 2;
	int k = 1;
	while (t < n)
	{
		t = t * 2;
		k = k + 1;
	}
	return k;
}
int KetQua167(int n)
{
	int s = 0;
	int i = 0;
	int lc = i;
	while (s < n)
	{
		lc = i;
		i = i + 1;
		s = s + i;
	}
	return lc;
}











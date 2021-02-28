#include <iostream>
#include<iomanip>
using namespace std;
void Nhap(float&, float&, int&, int&);
int Tong68(int);
int Tong69(int, int);
int Tong70(int, int);
int Tong71(int, int);
float Tong72(int);
double Tong73(int, int);
double Tong74(int, int);
double Tong75(int, int);
double Tong76(int, int);
double Tong77(int, int);
double Tong78(int, int);
double Tong79(int);
double Tong80(int, int);
double Tong81(int, int);
double Tong82(int, int);
double Tong83(float, float);
double Tong84(float, float);
double Tong85(float, float);
double Tong86(float, float);
double Tong87(float, float);
double Tong88(float);
double Tong89(float, float);
double Tong90(float, float);
double Tong91(float, float);
double Tong92(float, float);
double Tong93(int);
double Tong94(int);
double Tong95(int);
double Tong96(int);
double Tong97(float, int);
double Tong98(int);
double Tong99(int);
double Tong100(int);

int main()
{
	float x, n;
	int n2, k;
	Nhap(x ,n, n2, k);
	int s68 = Tong68(n);
	cout << "Bai 68: Gia tri day so la: " << s68 << endl;
	int s69 = Tong69(x, n);
	cout << "Bai 69: Gia tri day so la: " << s69 << endl;
	int s70 = Tong70(x, n);
	cout << "Bai 70: Gia tri day so la: " << s70 << endl;
	int s71 = Tong71(x, n);
	cout << "Bai 71: Gia tri day so la: " << s71 << endl;
	float s72 = Tong72(n);
	cout << "Bai 72: Gia tri day so la: " << s72 << endl;
	float s73 = Tong73(x, n);
	cout << "Bai 73: Gia tri day so la: " << s73 << endl;
	float s74 = Tong74(x, n);
	cout << "Bai 74: Gia tri day so la: " << s74 << endl;
	float s75 = Tong75(x, n);
	cout << "Bai 75: Gia tri day so la: " << s75 << endl;
	float s76 = Tong76(x, n);
	cout << "Bai 76: Gia tri day so la: " << s76 << endl;
	float s77 = Tong77(n2, k);
	cout << "Bai 77: Gia tri day so S(n2,k) la: " << s77 << endl;
	float s78 = Tong78(x, n);
	cout << "Bai 78: Gia tri day so la: " << s78 << endl;
	float s79 = Tong79(n);
	cout << "Bai 79: Gia tri day so la: " << s79 << endl;
	float s80 = Tong80(x, n);
	cout << "Bai 80: Gia tri day so la: " << s80 << endl;
	float s81 = Tong81(x, n);
	cout << "Bai 81: Gia tri day so la: " << s81 << endl;
	float s82 = Tong82(x, n);
	cout << "Bai 82: Gia tri day so la: " << s82 << endl;
	float s83 = Tong83(x, n);
	cout << "Bai 83: Gia tri day so la: " << s83 << endl;
	float s84 = Tong84(x, n);
	cout << "Bai 84: Gia tri day so la: " << s84 << endl;
	float s85 = Tong85(x, n);
	cout << "Bai 85: Gia tri day so la: " << s85 << endl;
	float s86 = Tong86(x, n);
	cout << "Bai 86: Gia tri day so la: " << s86 << endl;
	float s87 = Tong87(x, n);
	cout << "Bai 87: Gia tri day so la: " << s87 << endl;
	float s88 = Tong88(n);
	cout << "Bai 88: Gia tri day so la: " << s88 << endl;
	float s89 = Tong89(x, n);
	cout << "Bai 89: Gia tri day so la: " << s89 << endl;
	float s90 = Tong90(x, n);
	cout << "Bai 90: Gia tri day so la: " << s90 << endl;
	float s91 = Tong91(x, n);
	cout << "Bai 91: Gia tri day so la: " << s91 << endl;
	float s92 = Tong92(x, n);
	cout << "Bai 92: Gia tri day so la: " << s92 << endl;
	float s93 = Tong93(n);
	cout << "Bai 93: Gia tri day so la: " << s93 << endl;
	float s94 = Tong94(n);
	cout << "Bai 94: Gia tri day so la: " << s94 << endl;
	float s95 = Tong95(n);
	cout << "Bai 95: Gia tri day so la: " << s95 << endl;
	float s96 = Tong96(n);
	cout << "Bai 96: Gia tri day so la: " << s96 << endl;
	float s97 = Tong97(x, n);
	cout << "Bai 97: Gia tri day so la: " << s97 << endl;
	float s98 = Tong98(n);
	cout << "Bai 98: Gia tri day so la: " << s98 << endl;
	float s99 = Tong99(n);
	cout << "Bai 99: Gia tri day so la: " << s99 << endl;
	float s100 = Tong100(n);
	cout << "Bai 100: Gia tri day so la: " << s100 << endl;



	return 1;
}

void Nhap(float& x, float& n, int& n2, int& k)
{
	cout << "nhap x: ";
	cin >> x;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap n2: ";
	cin >> n2;
	cout << "nhap k: ";
	cin >> k;
}
int Tong68(int n)
{
	int s = 0;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * i;
		s = s + T;
		i = i + 1;
	}
	return s;
}
int Tong69(int x, int n)
{
	int S = 0;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		S = S + T;
		i = i + 1;
	}
	return S;
}
int Tong70(int x, int n)
{
	int S = 0;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x * x;
		S = S + T;
		i = i + 1;
	}
	return S;
}
int Tong71(int x, int n)
{
	int S = x;
	int T = x;
	int i = 3;
	while (i <= 2 * n + 1)
	{
		T = T * x * x;
		S = S + T;
		i = i + 2;
	}
	return S;
}
float Tong72(int n)
{
	float S = 0;
	int M = 0;
	int i = 1;
	while (i <= n)
	{
		M = M + i;
		S = S + 1.0 / M;
		i = i + 1;
	}
	return S;
}
double Tong73(int x, int n)
{
	float S = 0;
	int T = 1;
	int M = 0;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		M = M + i;
		S = S + (float)T / M;
		i = i + 1;
	}
	return S;
}
double Tong74(int x, int n)
{
	float S = 0;
	int T = 1;
	int M = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		M = M * i;
		S = S + (float)T / M;
		i = i + 1;
	}
	return S;
}
double Tong75(int x, int n)
{
	float S = 1;
	int T = 1;
	int M = 1;
	int i = 2;
	while (i <= 2 * n)
	{
		T = T * x * x;
		M = M * (i - 1) * i;
		S = S + (float)T / M;
		i = i + 2;
	}
	return S;
}
double Tong76(int x, int n)
{
	float S = 1 + x;
	int T = x;
	int M = 1;
	int i = 3;
	while (i <= 2 * n + 1)
	{
		T = T * x * x;
		M = M * (i - 1) * i;
		S = S + (float)T / M;
		i = i + 2;
	}
	return S;
}
double Tong77(int x, int n)
{
	double S = 0;
	int i = 1;
	while (i <= x)
	{
		S = S + pow(i, n);
		i = i + 1;
	}
	return S;
}
double Tong78(int x, int n)
{
	int S = 1;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		S = S + T;
		i = i + 1;
	}
	return S;
}
double Tong79(int n)
{
	int S = 0;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * i;
		S = S + T * i;
		i = i + 1;
	}
	return S;
}
double Tong80(int x, int n)
{
	int S = 1;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		S = S + (i + 1) * T;
		i = i + 1;
	}
	return S;
}
double Tong81(int x, int n)
{
	float S = 1.0 / x;
	int M = x;
	int i = 1;
	while (i <= n)
	{
		M = M * (x + i);
		S = S + 1.0 / M;
		i = i + 1;
	}
	return S;
}
double Tong82(int x, int n)
{
	float S = 0;
	float T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * (float)sin(x);
		S = S + T;
		i = i + 1;
	}
	return S;
}
double Tong83(float x, float n)
{
	float S = 0;
	float T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		S = S + sin(T);
		i = i + 1;
	}
	return S;
}
double Tong84(float x, float n)
{
	float S = 0;
	float T = x;
	int i = 1;
	while (i <= n)
	{
		T = sin(T);
		S = S + T;
		i = i + 1;
	}
	return S;
}
double Tong85(float x, float n)
{
	float S = 0;
	float T = 1;
	int dau = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		S = S + dau * T;
		i = i + 1;
		dau = -dau;
	}
	return S;
}
double Tong86(float x, float n)
{
	float S = 0;
	float T = 1;
	int dau = -1;
	int i = 2;
	while (i <= 2 * n)
	{
		T = T * x * x;
		S = S + dau * T;
		i = i + 2;
		dau = -dau;
	}
	return S;
}
double Tong87(float x, float n)
{
	float S = x;
	float T = x;
	int dau = -1;
	int i = 3;
	while (i <= 2 * n + 1)
	{
		T = T * x * x;
		S = S + dau * T;
		i = i + 2;
		dau = -dau;
	}
	return S;
}
double Tong88(float n)
{
	float S = 0;
	int M = 0;
	int dau = 1;
	int i = 1;
	while (i <= n)
	{
		M = M + i;
		S = S + dau * 1.0 / M;
		i = i + 1;
		dau = -dau;
	}
	return S;
}
double Tong89(float x, float n)
{
	float S = 0;
	int T = 1;
	int M = 0;
	int dau = -1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		M = M + i;
		S = S + 1.0 * dau * T / M;
		i = i + 1;
		dau = -dau;
	}
	return S;
}
double Tong90(float x, float n)
{
	float S = 0;
	int T = 1;
	int M = 1;
	int dau = -1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		M = M * i;
		S = S + 1.0 * dau * T / M;
		i = i + 1;
		dau = -dau;
	}
	return S;
}
double Tong91(float x, float n)
{
	float S = -1;
	int T = 1;
	int M = 1;
	int dau = 1;
	int i = 2;
	while (i <= 2 * n)
	{
		T = T * x * x;
		M = M * i * (i - 1);
		S = S + 1.0 * dau * T / M;
		i = i + 2;
		dau = -dau;
	}
	return S;
}
double Tong92(float x, float n)
{
	float S = 1 - x;
	float T = x;
	int M = 1;
	int dau = 1;
	int i = 3;
	while (i <= 2 * n + 1)
	{
		T = T * x * x;
		M = M * i * (i - 1);
		S = S + 1.0 * dau * T / M;
		i = i + 2;
		dau = -dau;
	}
	return S;
}
double Tong93(int n)
{
	float S = 0;
	int i = 1;
	while (i <= n)
	{
		S = sqrt(2 + S);
		i = i + 1;
	}
	return S;
}
double Tong94(int n)
{
	float S = 0;
	int i = 1;
	while (i <= n)
	{
		S = sqrt(i + S);
		i = i + 1;
	}
	return S;
}
double Tong95(int n)
{
	float S = 0;
	int i = n;
	while (i >= 1)
	{
		S = sqrt(i + S);
		i = i - 1;
	}
	return S;
}
double Tong96(int n)
{
	float S = 0;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * i;
		S = sqrt(T + S);
		i = i + 1;
	}
	return S;
}
double Tong97(float x, int n)
{
	float S = 0;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		S = sqrt(T + S);
		i = i + 1;
	}
	return S;
}
double Tong98(int n)
{
	float S = 0;
	int i = 2;
	while (i <= n)
	{
		S = pow(S + i, 1.0 / i);
		i = i + 1;
	}
	return S;
}
double Tong99(int n)
{
	float S = 0;
	int i = 1;
	while (i <= n)
	{
		S = pow(S + i, 1.0 / (i + 1));
		i = i + 1;
	}
	return S;
}
double Tong100(int n)
{
	float S = 0;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * i;
		S = pow(S + T, 1.0 / (i + 1));
		i = i + 1;
	}
	return S;
}





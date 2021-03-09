#include <iostream>
#include<iomanip>
using namespace std;
void Nhap(float&, float&, float&, float&, float&, float&, float&);
void Bai133(float, float, float);
void Bai134(float, float, float);
void Bai135(int);
void Bai136(int, int);
void Bai137(float);
void Bai138(float);
void Bai139(float, float);
void Bai140(float, float, float);

int main()
{
	float x, y, z, n, a, b, c;
	Nhap(x, y, z, n, a, b, c);
	cout << "Bai 133: ";
	Bai133(x, y, z);
	cout << "Bai 134: ";
	Bai134(x, y, z);
	cout << "Bai 135: ";
	Bai135(n);
	cout << "Bai 136: ";
	Bai136(x, y);
	cout << "Bai 137: ";
	Bai137(x);
	cout << "Bai 138: ";
	Bai138(x);
	cout << "Bai 139: ";
	Bai139(a, b);
	cout << "Bai 140: ";
	Bai140(a, b, c);

	system("pause");
	return 1;
}
void Nhap(float& x, float& y, float& z, float& n, float& a, float& b, float& c)
{
	cout << "nhap x: ";
	cin >> x;
	cout << "nhap y: ";
	cin >> y;
	cout << "nhap z: ";
	cin >> z;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	cout << "nhap c: ";
	cin >> c;
}
void Bai133(float x, float y, float z)
{
	float lc;
	if (x > y)
	{
		lc = x;
		x = y;
		y = lc;
	}
	if (x > z)
	{
		lc = x;
		x = z;
		z = lc;
	}
	if (y > z)
	{
		lc = y;
		y = z;
		z = lc;
	}
	//cout << "Gia tri x, y va z theo thu tu tang dan la: " << endl;
	//cout << x << endl << y << endl << z << endl;
	if (x + y <= z)
	{
		cout << "Khong ton tai tam giac do dai 3 canh x, y, z" << endl;
	}
	else
	{
		if (x == y && x == z)
		{
			cout << "x, y, z la do dai ba canh cua mot tam giac deu" << endl;
		}
		else
		{
			if (x == y || x == z || y == z)
			{
				if (x * x + y * y == z * z)
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
				if (x * x + y * y == z * z)
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
void Bai134(float x, float y, float z)
{
	if (x <= y && y <= z)
	{
		cout << "bat dang thuc x <= y <= z dung" << endl;
	}
	else
	{
		cout << "bat dang thuc x <= y <= z sai" << endl;
	}
}
void Bai135(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
	{
		cout << "nam " << n << " la nam nhuan" << endl;
	}
	else
	{
		cout << "nam " << n << " khong la nam nhuan" << endl;
	}
}
void Bai136(int x, int y)
{
	int flag = 0;
	int i = x;
	while (i <= y)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			if (flag == 0)
			{
				cout << "Nhung nam nhuan trong doan tu nam " << x << " den nam " << y << ": " << endl;
			}
			cout << i << endl;
			flag = 1;
		}
		i = i + 1;
	}
	if (flag == 0)
	{
		cout << "Tu nam " << x << " den nam " << y << " khong co nam nhuan" << endl;
	}
}
void Bai137(float x)
{
	double s;
	if (x >= 5)
	{
		s = 2 * x * x + 5 * x + 9;
	}
	else
	{
		s = -2 * x * x + 4 * x - 9;
	}
	cout << "Gia tri ham so la: " << s << endl;
}
void Bai138(float x)
{
	double s;
	if (x >= 0)
	{
		if (x > 1)
		{
			s = 2 * x * x * x + 5 * x * x - 8 * x + 3;
		}
		else
		{
			s = 5 * x - 7;
		}
	}
	else
	{
		s = -2 * x * x * x + 6 * x + 9;
	}
	cout << "Gia tri ham so la: " << s << endl;
}
void Bai139(float a, float b)
{
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "Phuong trinh vo so nghiem" << endl;
		}
		else
		{
			cout << "phuong trinh vo nghiem" << endl;
		}
	}
	else
	{
		float x = -b / a;
		cout << "phuong trinh co 1 nghiem duy nhat: x = " << x << endl;
	}
}
void Bai140(float a, float b, float c)
{
	if (a == 0)
		Bai139(b, c);
	else
	{
		float d = b * b - 4 * a * c;
		if (d <= 0)
		{
			if (d == 0)
			{
				float x = -b / (2 * a);
				cout << "phuong trinh co nghiem kep x1 = x2 = " << x << endl;
			}
			else
			{
				cout << "phuong trinh vo nghiem " << endl;
			}
		}
		else
		{
			float x1 = (-b - sqrt(d)) / (2 * a);
			float x2 = (-b + sqrt(d)) / (2 * a);
			cout << "phuong trinh co 2 nghiem phan biet: " << endl;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
	}
}

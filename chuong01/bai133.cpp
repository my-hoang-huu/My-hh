#include<iostream>
using namespace std;
int main()
{
	cout << "nhap do dai 3 canh cua tam giac: " << endl;
	float x;
	cout << "nhap x: ";
	cin >> x;
	float y;
	cout << "nhap y: ";
	cin >> y;
	float z;
	cout << "nhap z: ";
	cin >> z;
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
			if (x==y||x==z||y==z)
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
	system("pause");
	return 1;
}

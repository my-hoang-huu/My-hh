#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	cout << "nhap c: ";
	cin >> c;
	float d = b * b - 4 * a * c;
	if (d <= 0)
	{
		if (d==0)
		{
			float x = -b / (2 * a);
			cout << "phuong trinh co nghiem kep x1 = x2 = " << x << endl;
		}
		else 
		{
			cout << "phuong trinh vo nghiem "<< endl;
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

	system("pause");
	return 1;
}

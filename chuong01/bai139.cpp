#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	//cout << "nhap c: " << endl;
	//cin >> c;
	if (a==0)
	{
		if (b==0)
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

	system("pause");
	return 1;
}

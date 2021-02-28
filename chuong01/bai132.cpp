#include<iostream>
using namespace std;

int main()
{
	float x1, y1, x2, y2, x3, y3, xm, ym;
	cout << "toa do dinh A: " << endl;
	cout << "nhap x1: ";
	cin >> x1;
	cout << "nhap y1: ";
	cin >> y1;
	cout << "toa do dinh B: " << endl;
	cout << "nhap x2: ";
	cin >> x2;
	cout << "nhap y2: ";
	cin >> y2;
	cout << "toa do dinh C: " << endl;
	cout << "nhap x3: ";
	cin >> x3;
	cout << "nhap y3: ";
	cin >> y3;
	cout << "toa do dinh M: " << endl;
	cout << "nhap xm: ";
	cin >> xm;
	cout << "nhap ym: ";
	cin >> ym;

	float Sabc = 1.0 / 2 * abs(x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3);
	float Sabm = 1.0 / 2 * abs(x1 * y2 + x2 * ym + xm * y1 - x2 * y1 - xm * y2 - x1 * ym);
	float Samc = 1.0 / 2 * abs(x1 * ym + xm * y3 + x3 * y1 - xm * y1 - x3 * ym - x1 * y3);
	float Smbc = 1.0 / 2 * abs(xm * y2 + x2 * y3 + x3 * ym - x2 * ym - x3 * y2 - xm * y3);

	if (Sabc = Sabm + Samc + Smbc)
	{
		cout << "Diem M nam trong tam giac ABC" << endl;
	}
	else
	{
		cout << "Diem M nam ngoai tam giac ABC" << endl;
	}
	system("pause");
	return 1;

}
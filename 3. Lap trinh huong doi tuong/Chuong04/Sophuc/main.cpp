#include "Sophuc.h"

int main() {
	Sophuc a, b, c;
	cout << "Nhap so phuc a va b: ";
	cin >> a >> b;
	cout << "\nSo phuc b va c vua nhap";
	cout << a << b;
	c = a + b;
	cout << "\n----\nSo sanh: ";
	if (a == b)
	{
		cout << "\nSo phuc a co modun bang so phuc b";
	}
	else
	{
		if (a > b)
		{
			cout << "\nSo phuc a co modun lon hon so phuc b";
		}
		else
		{
			cout << "\nSo phuc a co modun khong lon hon so phuc b";
		}
	}

	cout << "\n----\nTong so phuc a va b: " << c;
	Sophuc d = a - b;
	cout << "\n----\nHieu so phuc a va b: " << d;
	cout << endl;
	return 1;
}
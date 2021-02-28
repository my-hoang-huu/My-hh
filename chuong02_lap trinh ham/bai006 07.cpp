#include<iostream>
using namespace std;
float DoiF(float);
float DoiC(float);
int main()
{

	float C;
	cout << "nhap gia tri do C: ";
	cin >> C;
	float f = DoiF(C);
	cout << "Bai 006: Do F tuong ung la: " << f << endl;
	float F;
	cout << "nhap gia tri do F: ";
	cin >> F;
	float c = DoiC(F);
	cout << "Bai 007: Do C tuong ung la: " << c << endl;
}
float DoiF(float c)
{
	float f = 9.0 / 5 * c + 32;
	return f;
}
float DoiC(float f)
{
	float c = 5.0 / 9 * (f - 32);
	return c;
}
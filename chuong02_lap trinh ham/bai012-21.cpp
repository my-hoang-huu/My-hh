#include<iostream>
using namespace std;
float X6(float);
float X7(float);
float X32(float);
float X64(float);
float X9(float);
float X11(float);
float X12(float);
float X13(float);
float X14(float);
float X15(float);

int main()
{
	int x;
	cout << "nhap x: ";
	cin >> x;
	float x6 = X6(x);
	cout << "Bai 012: x^6 = " << x6 << endl;
	float x7 = X7(x);
	cout << "Bai 013: x^7 = " << x7 << endl;
	float x32 = X32(x);
	cout << "Bai 014: x^32 = " << x32 << endl;
	float x64 = X64(x);
	cout << "Bai 015: x^64 = " << x64 << endl;
	float x9 = X9(x);
	cout << "Bai 016: x^9 = " << x9 << endl;
	float x11 = X11(x);
	cout << "Bai 017: x^11 = " << x11 << endl;
	float x12 = X12(x);
	cout << "Bai 018: x^12 = " << x12 << endl;
	float x13 = X13(x);
	cout << "Bai 019: x^13 = " << x13 << endl;
	float x14 = X14(x);
	cout << "Bai 020: x^14 = " << x14 << endl;
	float x15 = X15(x);
	cout << "Bai 021: x^15 = " << x15 << endl;
	return 1;
}
float X6(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	return x6;
}
float X7(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	float x7 = x6 * x;
	return x7;
}
float X32(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x16 = x8 * x8;
	float x32 = x16 * x16;
	return x32;
}
float X64(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x16 = x8 * x8;
	float x32 = x16 * x16;
	float x64 = x32 * x32;
	return x64;
}
float X9(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x9 = x8 * x;
	return x9;
}
float X11(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x10 = x2 * x8;
	float x11 = x10 * x;
	return x11;
}
float X12(float x)
{
	float x2 = x * x;
	float x3 = x * x2;
	float x6 = x3 * x3;
	float x12 = x6 * x6;
	return x12;
}
float X13(float x)
{
	float x2 = x * x;
	float x3 = x * x2;
	float x6 = x3 * x3;
	float x12 = x6 * x6;
	float x13 = x12 * x;
	return x13;
}
float X14(float x)
{
	float x2 = x * x;
	float x3 = x * x2;
	float x6 = x3 * x3;
	float x7 = x6 * x;
	float x14 = x7 * x7;
	return x14;
}
float X15(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x16 = x8 * x8;
	float x15 = x16 / x;
	return x15;
}

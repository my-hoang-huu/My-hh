#include<iostream>
using namespace std;
void HoanVi(int, int);
void HoanVi2(int, int);
int main()
{
	int a;
	cout << "nhap a: ";
	cin >> a;
	int b;
	cout << "nhap b: ";
	cin >> b;
	HoanVi(a, b);
	HoanVi2(a, b);
	system("pause");
	return 1;
}
void HoanVi(int a, int b)
{
	int lc = a;
	a = b;
	b = lc;
	cout << "Bai 025: Gia tri a, b sau hoan vi: \n" << "a = " << a << endl << "b = " << b << endl;
}
void HoanVi2(int a, int b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Bai 026: Gia tri a, b sau hoan vi (khong dung so nguyen trung gian la): \n" << "a = " << a << endl << "b = " << b << endl;
}
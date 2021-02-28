#include<iostream>
using namespace std;
int main()
{
	float r;
	cout << "nhap ban kinh r: ";
	cin >> r;
	float v = 4 * 3.14 * r * r * r / 3;
	cout << "the tich hinh cau la: " << v << endl;
	system("pause");
	return 1;
}
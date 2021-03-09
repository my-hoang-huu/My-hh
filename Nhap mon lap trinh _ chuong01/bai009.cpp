#include<iostream>
using namespace std;
#include<math.h> /*because using sin*/
int main()
{
	int n;
	cout << "nhap so canh da giac: ";
	cin >> n;
	float r;
	cout << "nhap ban kinh r: ";
	cin >> r;
	double s = n * r * r * sin(2 * 3.14 / n) / 2;
	cout << "dien tich da giac deu " << n << " canh noi tiep duong tron ban kinh " << r << " la: " << s << endl;

	system("pause");
	return 1;

}
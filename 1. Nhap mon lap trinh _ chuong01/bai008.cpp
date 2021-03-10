#include<iostream>
using namespace std;
#include<cmath> /*because using sin*/
int main()
{
	/*double param, result;
	cout << "nhap goc: ";
	cin >> param;
	//result=sin(param*3.14/180);
	result = sin(param * 3.14159265 / 180);
	cout << "sin cua " << param << " do la: " << result<<endl;*/
	int n;
	cout << "nhap so canh da giac: ";
	cin >> n;
	float r;
	cout << "nhap ban kinh r: ";
	cin >> r;
	float p = 2 * n * r * sin(3.14 / n);
	cout << "chu vi da giac deu " << n << " canh noi tiep duong tron ban kinh " << r << " la: " << p << endl;

	system("pause");
	return 1;

}
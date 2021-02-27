#include<iostream>
using namespace std;
int main()
{
	cout << "nhap x1, y1, x2, y2"<<endl;
	int x1, x2, y1, y2;
	cout << "x1=";
	cin >> x1;

	cout << "y1=";
	cin>> y1;

	cout << "x2=";
	cin >> x2;

	cout << "y2=";
	cin >> y2;

	float d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	cout << "khoang cach giua 2 diem la: "<< d<<endl;
	system("pause");
	return 1;
}
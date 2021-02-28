#include<iostream>
using namespace std;
int main()
{
	float x;
	cout << "nhap x: ";
	cin >> x;
	float y;
	cout << "nhap y: ";
	cin >> y;
	float z;
	cout << "nhap z: ";
	cin >> z;
	if (x + y > z && x + z > y && z + y > x)
	{
		cout << "Co ton tai tam giac do dai ba canh x, y, z" << endl;
	}
	else
	{
		cout << "Khong ton tai tam giac co do dai ba canh x, y, z" << endl;
	}

	system("pause");
	return 1;
}

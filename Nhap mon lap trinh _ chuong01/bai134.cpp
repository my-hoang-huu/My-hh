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
	if (x <= y && y <= z)
	{
		cout << "bat dang thuc x <= y <= z dung" << endl;
	}
	else
	{
		cout << "bat dang thuc x <= y <= z sai" << endl;
	}
	system("pause");
	return 1;
}

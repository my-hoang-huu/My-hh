#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int flag = 0, i = 1;
	while (i < n)
	{
		if (i * i == n)
		{
			flag = 1;
			break;
		}
		i = i++;
	}
	if (flag == 1)
	{
		cout << n << " la so chinh phuong." << endl;
	}
	else
	{
		cout << n << " khong phai la so chinh phuong." << endl;
	}
	system("pause");
	return 1;

}
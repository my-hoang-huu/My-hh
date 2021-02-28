#include<iostream>
using namespace std;
int main()
{

	int x, y;
	cout << "tu nam " << endl;
	cin >> x;
	cout<< "den nam " << endl;
	cin >> y;
	int flag = 0;
	int i = x;
	while (i<=y)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			if (flag==0)
			{
				cout << "Nhung nam nhuan trong doan tu nam " << x << " den nam " << y << ": " << endl;
			}
			cout << i << endl;
			flag = 1;
		}
		i = i + 1;
	}
	if (flag == 0)
	{
		cout << "Tu nam " << x << " den nam " << y << " khong co nam nhuan" << endl;
	}
	
	system("pause");
	return 1;
}

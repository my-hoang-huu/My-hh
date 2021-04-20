#include "TestCandidate.h"

void TestCandidate::Nhap()
{
	cout << "Nhap so thi sinh: ";
	cin >> SoTS;
	thisinh = new Candidate[SoTS];
	cin.ignore();
	for (int i = 0; i < SoTS; i++)
	{
		cout << "\n--\nNhap thong tin thi sinh thu " << i + 1;
		thisinh[i].Nhap();
		cin.ignore();
	}
}

void TestCandidate::XuLy()
{
	for (int i = 0; i < SoTS; i++)
	{
		if (thisinh[i].Tong() > 15)
		{
			cout << "--\nThi sinh thu " << i + 1;
			thisinh[i].Xuat();
			cin.ignore();
			cout << "Tong diem: " << thisinh[i].Tong() << endl;
		}
	}
}
void TestCandidate::Xuat()
{
	for (int i = 0; i < SoTS; i++)
	{
		cout << "--\nThi sinh thu " << i + 1;
		thisinh[i].Xuat();
		cin.ignore();
		cout << endl;
	}
}

#pragma once
#include"PersonRh1.h"
class Quanly
{
private:
	int Soluong;
	Person** ql;
public:
	void Nhap() {
		cout << "\nNhap so luong benh nhan: ";
		cin >> Soluong;
		ql = new Person * [Soluong];
		int flag;
		for (int i = 0; i < Soluong; i++)
		{
			cout << "-----\nstt = " << i + 1;
			cout << "\nNhap so tuong ung voi loai benh nhan: 0 - Rh-     1 - Rh+	";

			while (cin >> flag && flag != 0 && flag != 1) {}
			switch (flag)
			{
			case 0: {
				ql[i] = new PersonRh0();
				ql[i]->Nhap();
				break;
			}
			case 1: {
				ql[i] = new PersonRh1();
				ql[i]->Nhap();
				break;
			}
			default:
				break;
			}
		}
	}
	void Xuat() {
		for (int i = 0; i < Soluong; i++)
		{
			cout << "\n-----\nstt: " << i + 1 << endl;
			ql[i]->Xuat();
		}
	}
	void KtTruyenmau() {
		int n;
		cout << "\nMa so nguoi nhan mau: ";
		cin >> n;
		int flag1 = 0;
		int flag2 = 0;
		for (int i = 0; i < Soluong; i++)
		{
			if (ql[i]->getMaso() == n) {
				flag1 = 1;
				cout << "\nThong tin nguoi co the cho mau: ";
				for (int j = 0; j < Soluong; j++)
				{
					if (i != j) {
						if (ql[i]->testTruyenmau(*ql[j]) == 1) {
							cout << "\n----\nstt " << j + 1;
							ql[j]->Xuat();
							flag2 = 1;
						}
					}
				}
			}
		}
		if (flag1 == 0) {
			cout << "\nMa so benh nhan khong dung!";
			return;
		}
		if (flag2 == 0) {
			cout << "\nKhong co nguoi truyen mau phu hop!";
		}
	}

};
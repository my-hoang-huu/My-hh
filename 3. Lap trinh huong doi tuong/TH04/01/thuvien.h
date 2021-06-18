#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// ---------------------------------------Class thu vien----------------------------------------
class sach
{
protected:
	string tensach, tacgia;
	int namxuatban;
	int loaisach;
public:
	sach() : tensach(), tacgia(), namxuatban(),loaisach(0) {}
	sach(string tensach, string tacgia, int namxuatban)
		: tensach(tensach), tacgia(tacgia), namxuatban(namxuatban), loaisach(0) {}
	~sach() { return; }
	
	virtual void nhap()
	{
		cout << "Nhap ten sach: "; getline(cin, tensach);
		cout << "Nhap tac gia: "; getline(cin, tacgia);
		cout << "Nhap nam xuat ban: "; cin >> namxuatban;
		cin.ignore();
	}
	virtual void xuat()
	{
		cout << "Ten sach: " << tensach << endl;
		cout << "Tac gia: " << tacgia << endl;
		cout << "Nam xuat ban: " << namxuatban << endl;
	}
	virtual int getloaisach() { return loaisach; }
};

// ---------------------------------------Class sach giao khoa----------------------------------------
class sachgiaokhoa : public sach
{
private:
	string mon, khoi; // môn học và khối lớp (A,B,C,D,...)
	int lop;
public:
	sachgiaokhoa() : sach(), mon(), khoi(), lop() { loaisach = 1; }
	sachgiaokhoa(string tensach, string tacgia, int namxuatban, string mon, string khoi, int lop)
		: sach(), mon(), khoi(), lop() {
		loaisach = 1;
	}
	~sachgiaokhoa() { return; }
	void nhap()
	{
		sach::nhap();
		cout << "Nhap mon: "; getline(cin, mon);
		cout << "Nhap khoi: "; getline(cin, khoi);
		cout << "Nhap lop: "; cin >> lop;
		cin.ignore();
	}

	void xuat()
	{
		sach::xuat();
		cout << "Mon: " << mon << endl;
		cout << "Khoi: " << khoi << endl;
		cout << "Lop: " << lop << endl;
	}
	int getloaisach() { return loaisach; }
};

// ---------------------------------------Class tieu thuyet----------------------------------------
class tieuthuyet : public sach
{
private:
	string theloai;
public:
	tieuthuyet() : theloai() { loaisach = 2; }
	tieuthuyet(string tensach, string tacgia, int namxuatban, string theloai)
		: sach(tensach, tacgia, namxuatban), theloai(theloai) { loaisach = 2; }
	~tieuthuyet() { return; }
	
	void nhap()
	{
		sach::nhap();
		cout << "Nhap loai tieu thuyet: "; getline(cin, theloai);
	}

	void xuat()
	{
		sach::xuat();
		cout << "Loai tieu thuyet: " << theloai << endl;
	}
	int getloaisach() { return loaisach; }
};

// ---------------------------------------Class tap chi----------------------------------------
class tapchi : public sach
{
private:
	string theloai;
public:
	tapchi() : sach(), theloai(theloai) { loaisach = 3; }
	tapchi(string tensach, string tacgia, int namxuatban, string theloai):
		sach(tensach, tacgia, namxuatban), theloai(theloai) {
		loaisach = 3;
	}
	~tapchi() { return; }

	void nhap()
	{
		sach::nhap();
		cout << "Nhap loai tap chi: "; getline(cin, theloai);
	}

	void xuat()
	{
		sach::xuat();
		cout << "Loai tap chi: " << theloai << endl;
	}

	int getloaisach() { return loaisach; }
};

// ---------------------------------------Class thu vien----------------------------------------
class thuvien
{
private:
	sach** tusach;
	int n; // so luong sach co trong thu vien
public:
	thuvien() { tusach = nullptr; n = 0; }
	thuvien(sach** ts, int nn){
		n = nn;
		tusach = new sach*[n];
		for (int i = 0; i < n; i++)
		{
			if (ts[i]->getloaisach() == 1)
			{
				tusach[i] = new sachgiaokhoa();
				*tusach[i] = *ts[i];
			}
			else if (ts[i]->getloaisach() == 2)
			{
				tusach[i] = new tieuthuyet();
				*tusach[i] = *ts[i];
			}
			else
			{
				tusach[i] = new tapchi();
				*tusach[i] = *ts[i];
			}
		}
	}
	thuvien(const thuvien& x) {
		n = x.n;
		tusach = new sach * [n];
		for (int i = 0; i < n; i++)
		{
			if (x.tusach[i]->getloaisach() == 1)
			{
				tusach[i] = new sachgiaokhoa();
				*tusach[i] = *x.tusach[i];
			}
			else if (x.tusach[i]->getloaisach() == 2)
			{
				tusach[i] = new tieuthuyet();
				*tusach[i] = *x.tusach[i];
			}
			else
			{
				tusach[i] = new tapchi();
				*tusach[i] = *x.tusach[i];
			}
		}
	}
	~thuvien() {
		for (int i = 0; i < n; i++)
		{
			delete tusach[i];
		}
		delete []tusach;
	}
	void nhapsach()
	{
		int choose;
		do {
			cout << "\n>>> Nhap loai sach <<<\n";
			cout << "1. Sach giao khoa.\n";
			cout << "2. Tieu thuyet.\n";
			cout << "3. Tap chi.\n";
			cout << "4. Quay lai.\n";
			while (cin >> choose && choose != 1 && choose != 2 && choose != 3 && choose != 4)
			{
				cout << "Lua chon ko hop le !!\n";
				cout << "Xin nhap lai: ";
			}
			system("cls");
			cout << "\n-----------------------------[Chuong trinh quan ly sach]-----------------------------\n";
			cin.ignore();
			switch (choose)
			{
			case 1:
				cout << "\n>> Sach giao khoa \n";
				++n;
				if (tusach == nullptr)
				{
					tusach = new sach * [n];
					tusach[n - 1] = new sachgiaokhoa();
					tusach[n - 1]->nhap();
					break;
				}
				resize(tusach, n);
				tusach[n - 1] = new sachgiaokhoa();
				tusach[n - 1]->nhap();
				break;
			case 2:
				cout << "\n>> Tieu thuyet \n";
				++n;
				if (tusach == nullptr)
				{
					tusach = new sach * [n];
					tusach[n - 1] = new tieuthuyet();
					tusach[n - 1]->nhap();
					break;
				}
				resize(tusach, n);
				tusach[n - 1] = new tieuthuyet();
				tusach[n - 1]->nhap();
				break;
			case 3:
				cout << "\n>> Tap chi \n";
				n++;
				if (tusach == nullptr)
				{
					tusach = new sach * [n];
					tusach[n - 1] = new tapchi();
					tusach[n - 1]->nhap();
					break;
				}
				resize(tusach, n);
				tusach[n - 1] = new tapchi();
				tusach[n - 1]->nhap();
				break;
			default:
				break;
			}
		} while (choose != 4);
	}

	void xuatsach()
	{
		for (int i = 0; i < n; i++)
		{
			tusach[i]->xuat();
			cout << "--------------------------------------------\n";
		}
	}

	void resize(sach**& danhsach, int n)
	{
		sach** copy = new sach * [n];
		for (int i = 0; i <= n - 2; i++)
		{
			copy[i] = danhsach[i];
		}
		delete[]danhsach;
		danhsach = copy;
	}
};
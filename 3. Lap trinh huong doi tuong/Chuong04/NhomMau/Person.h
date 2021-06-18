#pragma once
#include<iostream>
#include<string>
using namespace std;
class Person
{
protected:
	string Hoten;
	int Maso;
	// Define nhom mau:;
	//A = 1;
	//B = 2;
	//AB = 3;
	//O = 4;
	int Nhommau;
	int NhommauBo;
	int NhommauMe;
	// define Rh;
	//Rh- = 0;
	//Rh+ = 1;
	int Rh;
public:
	void Nhap() {
		cout << "\nNhap thong tin benh nhan: ";
		cout << "\nMa so benh nhan : ";
		cin >> Maso;
		cout << "Ho va ten benh nhan: ";
		cin.ignore();
		getline(cin, Hoten);
		cout << " Nhap nhom mau: \n";
		cout << "1-A";
		cout << "  2-B";
		cout << "  3-AB";
		cout << "  4-O	";
		cin >> Nhommau;
	}
	int getMaso() { return Maso; }
	void Xuat() {
		cout << "\nHo ten: " << Hoten;
		cout << "\nMa so: " << Maso;
		cout << "\nNhom mau: ";
		switch (Nhommau)
		{
		case 1:
			cout << "O";
			break;
		case 2:
			cout << "A";
			break;
		case 3:
			cout << "B";
			break;
		case 4:
			cout << "AB";
			break;
		default:
			break;
		}
		cout << "\nRh: ";
		if (Rh == 0)
			cout << "Rh-";
		else
			cout << "Rh+";
	}
	bool testDitruyen() {
		cout << "\nNhom mau bo: ";
		cin >> NhommauBo;
		cout << "\nNhom mau me: ";
		cin >> NhommauMe;
		switch (NhommauBo)
		{
		case 1: {
			switch (NhommauMe)
			{
			case 1: {
				if (Nhommau == 1 || Nhommau == 4)
					return true;

			}
			case 2: {
				if (Nhommau == 1 || Nhommau == 2 || Nhommau == 3 || Nhommau == 4)
					return true;

			}
			case 3: {
				if (Nhommau == 1 || Nhommau == 2 || Nhommau == 3)
					return true;

			}
			case 4: {
				if (Nhommau == 1 || Nhommau == 4)
					return true;

			}
			default:
				return false;

			}
		}
		case 2: {
			switch (NhommauMe)
			{
			case 1: {
				if (Nhommau == 1 || Nhommau == 2 || Nhommau == 3 || Nhommau == 4)
					return true;

			}
			case 2: {
				if (Nhommau == 2 || Nhommau == 4)
					return true;
			}
			case 3: {
				if (Nhommau == 1 || Nhommau == 2 || Nhommau == 3)
					return true;
			}
			case 4: {
				if (Nhommau == 2 || Nhommau == 4)
					return true;
			}
			default:
				return false;
			}
		}
		case 3: {
			switch (NhommauMe)
			{
			case 1: {
				if (Nhommau == 1 || Nhommau == 2 || Nhommau == 3)
					return true;
			}
			case 2: {
				if (Nhommau == 1 || Nhommau == 2 || Nhommau == 3)
					return true;
			}
			case 3: {
				if (Nhommau == 1 || Nhommau == 2 || Nhommau == 3)
					return true;
			}
			case 4: {
				if (Nhommau == 1 || Nhommau == 2)
					return true;
			}
			default:
				return false;
			}
		}
		case 4: {
			switch (NhommauMe)
			{
			case 1: {
				if (Nhommau == 1 || Nhommau == 4)
					return true;
			}
			case 2: {
				if (Nhommau == 2 || Nhommau == 4)
					return true;
			}
			case 3: {
				if (Nhommau == 1 || Nhommau == 2)
					return true;
			}
			case 4: {
				if (Nhommau == 4)
					return true;
			}
			default:
				return false;
			}
		}
		default:
			return false;
			break;
		}

	}
	int testTruyenmau(Person c) {//Nguoi c cho
		if (c.Rh == 0)
		{
			switch (c.Nhommau)
			{
			case 4: {// O-
				return 1;
			}
			case 3: {// A-
				if (Nhommau == 1 || Nhommau == 3) //A va AB
					return 1;
			}
			case 2: {// B-
				if (Nhommau == 2 || Nhommau == 3)
					return 1;
			}
			case 1: {// AB-
				if (Nhommau == 3)
					return 1;
			}
			default:
				break;
			}
		}
		if (c.Rh == 1)
		{
			if (Rh == 1)
			{
				switch (c.Nhommau)
				{
				case 4: {// O+
					return 1;
				}
				case 3: {// A+
					if (Nhommau == 1 || Nhommau == 3) //A va AB
						return 1;
				}
				case 2: {// B+
					if (Nhommau == 2 || Nhommau == 3)
						return 1;
				}
				case 1: {// AB+
					if (Nhommau == 3)
						return 1;
				}
				default:
					break;
				}
			}
			else//Rh == 0 (Rh-)
			{
				return 0;
			}
		}
		return 0;
	}
};



#pragma once
#include"Congnhan.h"
#include"Sinhvien.h"
#include<vector>
class Danhsach
{
private:
	int n;
	People** arr;
public:
	//Danhsach() {
	//	n = 0;
	//	arr = nullptr;
	//}
	~Danhsach() {
		for (int i = 0; i < n; i++)
		{
			delete[] arr[i]; // ky tu [] de xoa mang (chi dung cho mang cong nhan), do bai co ca mang va con tro don nen bao loi;
		}
		delete[] arr;
		cout << "\nHAM HUY GOI THUC HIEN!";
	}
	vector<People> MaxSalaryWorker;
	int MaxSalary;
	void Nhap() {
		cout << "\nNhap so doi tuong: ";
		cin >> n;
		arr = new People * [n];
		int flag;
		for (int i = 0; i < n; i++)
		{
			cout << "----------\nNhap vao phan tu thu " << i + 1 << "\nLua chon: ";
			cout << "\n0.Nguoi  1. Sinh vien  2. Cong nhan\n";
			while (cin >> flag && flag != 0 && flag != 1 && flag != 2)
			{
				cout << "\nChi nhap gia tri 0, 1, 2. Vui long nhap lai: ";
			}
			cin.ignore();
			switch (flag)
			{
			case 0: {
				arr[i] = new People();
				arr[i]->Nhap();
				break;
			}
			case 1: {
				arr[i] = new Sinhvien();
				arr[i]->Nhap();
				break;
			}
			case 2: {
				cout << "\nNhap so luong cong nhan: ";
				int m;
				cin >> m;
				arr[i] = new Congnhan[m];
				for (int j = 0; j < m; j++)
				{
					cout << "\nCong nhan thu " << j + 1 << " : ";
					cin.ignore();
					arr[i][j].Nhap();
				}
				for (int j = 0; j < m; j++)
				{
					MaxSalary = arr[i][j].GetLuong();
					break;
				}
				for (int j = 0; j < m; j++)
				{
					if (arr[i][j].GetLuong() >= MaxSalary)
					{
						MaxSalary = arr[i][j].GetLuong();
					}
				}
				for (int j = 0; j < m; j++)
				{
					if (arr[i][j].GetLuong() == MaxSalary)
					{
						MaxSalaryWorker.push_back(arr[i][j]);
					}
				}
				break;
			}
			default:
				break;
			}
		}
	}
	void Xuat() {
		for (int i = 0; i < n; i++)
		{
			cout << "\nThong tin nguoi thu " << i + 1 << ": ";
			arr[i]->Xuat();
		}
	}
	void XuatSV() {
		int k = 1;
		for (int i = 0; i < n; i++)
		{
			if (arr[i]->Loai == 1)
			{
				cout << "\nThong tin sinh vien " << k << ": ";
				arr[i]->Xuat();
				k++;
			}
		}
	}
	//void XuatMaxLuong() {
	//	for (int i = 0; i < n; i++)
	//	{
	//		if (arr[i]->Loai == 2)
	//		{
	//			for (int j = 0; j < socongnhan; j++)
	//			{
	//				MaxSalary = arr[i][j].GetLuong();
	//				break;
	//			}
	//		}
	//	}
	//	for (int i = 0; i < n; i++)
	//	{
	//		if (arr[i]->Loai == 2)
	//		{
	//			for (int j = 0; j < socongnhan; j++)
	//			{
	//				if (arr[i][j].GetLuong() >= MaxSalary)
	//				{
	//					MaxSalary = arr[i][j].GetLuong();
	//				}
	//			}
	//		}
	//	}
	//	for (int i = 0; i < n; i++)
	//	{
	//		if (arr[i]->Loai == 2)
	//		{
	//			for (int j = 0; j < socongnhan; j++)
	//			{
	//				if (arr[i][j].GetLuong() == MaxSalary)
	//				{
	//					arr[i][j].Xuat();
	//				}
	//			}
	//		}
	//	}
	//}
	void OutputMaxSalary() {
		for (int i = 0; i < MaxSalaryWorker.size(); i++)
		{
			cout << "\n----";
			MaxSalaryWorker[i].Xuat();
			cout << "Luong: " << MaxSalaryWorker[i].GetLuong();
		}
	}
};


#pragma once
#include <iostream>
#include "diem.h"
using namespace std;

// ---------------------------------------Class da giac----------------------------------------
class dagiac
{
protected:
	diem* dinh;
	int n;
public:
	int loai;
	dagiac();
	dagiac(const dagiac&);
	~dagiac();
	virtual void nhap();
	virtual void xuat();
	virtual void tinhtien();
	
};

// ---------------------------------------Class tu giac----------------------------------------
class tugiac : public dagiac
{
public:
	tugiac();
	tugiac(const tugiac&);
	void nhap();
	void xuat();
	void tinhtien();
};

// ---------------------------------------Class tam giac----------------------------------------
class tamgiac : public dagiac
{
public:
	tamgiac();
	tamgiac(const tamgiac&);
	void nhap();
	void xuat();
	void tinhtien();
};

// ---------------------------------------Class hinh binh hanh----------------------------------------
class hinhbinhhanh : public tugiac
{
public:
	hinhbinhhanh();
	hinhbinhhanh(const hinhbinhhanh&);
	void nhap();
	void xuat();
	void tinhtien();
	bool ishbh();
};

// ---------------------------------------Class hinh chu nhat----------------------------------------
class hinhchunhat : public hinhbinhhanh
{
public:
	hinhchunhat();
	hinhchunhat(const hinhchunhat&);
	void nhap();
	void xuat();
	void tinhtien();
	bool ischunhat();
};

// ---------------------------------------Class hinh vuong----------------------------------------
class hinhvuong : public hinhchunhat
{
public:
	hinhvuong();
	hinhvuong(const hinhvuong&);
	void nhap();
	void xuat();
	void tinhtien();
	bool isvuong();
};

// ---------------------------------------Class danh sach----------------------------------------
class danhsach
{
private:
	dagiac** list;
	int n;
public:
	danhsach();
	danhsach(const danhsach&);
	~danhsach();
	void nhapdanhsach();
	void xuatdanhsach();
	void resize();
	void tinhtien();
};
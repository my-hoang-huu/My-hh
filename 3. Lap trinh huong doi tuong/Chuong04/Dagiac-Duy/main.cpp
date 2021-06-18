#pragma once
#include "diem.h"
#include "dagiac.h"

int main()
{
	dagiac e;
	cout << "Nhap da giac e: " << endl;
	e.nhap();
	cout << "xuat cac diem da giac e: " << endl;
	e.xuat();

	return 1;
}
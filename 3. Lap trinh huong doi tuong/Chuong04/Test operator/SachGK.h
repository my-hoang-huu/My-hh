#pragma once
#include"Sach.h"
class SachGK : public Sach
{
public:
	SachGK() {
		Ten = "\nGIAO KHOA";
		cout << Ten;
	}
	~SachGK() {
		cout << "\nHUY GIAO KHOA";
	}
};


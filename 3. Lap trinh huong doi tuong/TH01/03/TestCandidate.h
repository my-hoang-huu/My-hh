#pragma once
#include "Candidate.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class TestCandidate
{
private:
	int	SoTS;
	Candidate* thisinh;
public:
	void Nhap();
	void Xuat();
	void XuLy();
};


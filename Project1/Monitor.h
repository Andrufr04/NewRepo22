#pragma once
#include<iostream>
#include <string>
using namespace std;

class Monitor
{
	string model;
public:
	Monitor();
	Monitor(const char* N);
	void Output();
};


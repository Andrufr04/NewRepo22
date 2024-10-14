#include<iostream>
#include "Monitor.h"
#include "PC.h"
using namespace std;

int main()
{
	Monitor m("AAA");

	PC pc(&m);
	pc.Output();
}
#pragma once
#include "CPU.h"
#include "RAM.h"
#include "SSD.h"
#include "Monitor.h"
#include "Mouse.h"
#include "Headphones.h"
#include "Keyboard.h"

class PC
{
	//CPU cpu;
	//RAM ram;
	//SSD ssd;

	Monitor* mon;
	//Mouse* mouse;
	//Headphones* headphones;
	//Keyboard* keyboard;
public:
	//PC();
	PC(Monitor* m);
	void Output();
};


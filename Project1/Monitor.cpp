#include "Monitor.h"

Monitor::Monitor()
{
	model = "Unk";
}

Monitor::Monitor(const char* N)
{
	model = N;
}

void Monitor::Output()
{
	cout << "Model: " << model;
}




#include "PC.h"

//PC::PC(Monitor m)
//{
//	mon(m);
//}

PC::PC(Monitor* m) : mon(m)
{
	
}

void PC::Output()
{
	cout << "Monitor: ";
	mon->Output();
	cout << endl;
}

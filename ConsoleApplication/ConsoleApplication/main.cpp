#include "MI_C.h"
#include <iostream>

void main()
{
	MI_C mic;
	C c;
	B b;
	mic.runFun(&c, fun_selector(C::funC));
	//mic.runFunB(&b, funb_selector(C::funC));
	
	int in;
	std::cin>>in;
}
#include "MI_C.h"
#include <iostream>

A::A()
{
}

A::~A()
{
}

B::B()
{
}

B::~B()
{
}

C::C()
{
}

C::~C()
{
}

void C::funC(int i)
{
	std::cout<<"func "<<i<<std::endl;
}

MI_C::MI_C()
{
}

MI_C::~MI_C()
{
}

void MI_C::runFun(A *pA, FUNA fun)
{
	(pA->*fun)(3);
}

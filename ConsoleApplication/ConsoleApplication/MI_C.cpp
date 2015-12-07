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

void C::funC(ParameterC3 p1)
{
	std::cout<<"ParameterC3's p1 = "<<p1._id<<std::endl;
}

MI_C::MI_C()
{
}

MI_C::~MI_C()
{
}

void MI_C::runFun(A *pA, FUNA fun)
{
	ParameterC1 p1;
	(pA->*fun)(p1);
}

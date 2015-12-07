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

void C::funC(ParameterC1* p1)
{
	ParameterC3 *p3 = dynamic_cast<ParameterC3*>(p1);
	std::cout<<"ParameterC3's _id = "<<p3->_id<<std::endl;
}

MI_C::MI_C()
{
}

MI_C::~MI_C()
{
}

void MI_C::runFun(A *pA, FUNA fun)
{
	ParameterC3* p3 = new ParameterC3();
	(pA->*fun)(static_cast<ParameterC1*>(p3));
	delete p3;
}

#ifndef _MI_C_
#define _MI_C_

class A;
class B;

class ParameterC1
{
public:
	ParameterC1()
	{
		_id = 1;
	}
	virtual ~ParameterC1(){}
	int _id;
};

class ParameterC2
{
public:
	ParameterC2()
	{

	}
	virtual ~ParameterC2(){}
};

class ParameterC3 : public ParameterC1, public ParameterC2
{
public:
	ParameterC3()
	{
		_id = 3;
	};
	virtual ~ParameterC3(){};
};

typedef void (A::*FUNA)(ParameterC1*);
#define fun_selector(fun) (FUNA)(&fun)

class A
{
public:
	A();
	virtual ~A();
};

class B
{
public:
	B();
	virtual ~B();

};

class C : public A, public B
{
public:
	C();
	virtual ~C();

	void funC(ParameterC1*);
};

class MI_C
{
public:
	MI_C();
	virtual ~MI_C();

	void runFun(A *, FUNA);
};

#endif
#ifndef _MI_C_
#define _MI_C_

class A;

typedef void (A::*FUNA)(int);
#define fun_selector(fun) (FUNA)(&fun)

typedef void (B::*FUNB)(int);
#define funb_selector(fun) (FUNB)(&fun)

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

	void funC(int);
};

class MI_C
{
public:
	MI_C();
	virtual ~MI_C();

	void runFun(A *, FUNA);
	void runFunB(B *, FUNB);
};

#endif
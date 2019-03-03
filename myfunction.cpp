#include "myfunction.h"
#include <cmath>


MyFunction::MyFunction(double _a, double _b, double _c, double _d)
{
	a = _a;
	b = _b;
	c = _c;
	d = _d;
}

double MyFunction::func_calc(double x)
{
	return a * sin(b*x) + c * cos(d*x);
}

MyFunction& MyFunction::operator= (const MyFunction  & op2)
{
	if (this != &op2)
	{
		a = op2.a;
		b = op2.b;
		c = op2.c;
		d = op2.d;
	}
	return *this;
}
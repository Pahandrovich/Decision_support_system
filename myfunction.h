#ifndef MYFUNCTION_H
#define MYFUNCTION_H

class MyFunction
{
	double a;
	double b;
	double c;
	double d;
public:
	MyFunction(double _a = 0, double _b = 0, double _c = 0, double _d = 0);
	double func_calc(double x);
	MyFunction& operator= (const MyFunction  & op2);
	
};

#endif

#ifndef TASKS_H
#define TASKS_H

#include "myfunction.h"
#include <cstdlib>
#include <vector>

class Base_class_method
{
protected:
	MyFunction fun;
	double r;
	double eps;
	double N;
	double a, b;
	double Gmin_x;
	double Gmin_y;
	//int flag_stop_choise;
	
	double min(double a, double b) { if (a < b) return a; else return b; }

public:
	std::vector<double> lambda;
	virtual double R(double j) = 0;

};


class method1 : public Base_class_method
{
public:
	method1(int _N, MyFunction _fun, double _r, double _eps, double _a, double _b);
	double UseMethod_N();
	double R(double i);
};

class method_piyav : public Base_class_method
{
public:
	method_piyav(int _N, MyFunction _fun, double _r, double _eps, double _a, double _b);
	double UseMethod_N();
	double R(double i);
};

#endif // TASKS_H

#ifndef TASKS_H
#define TASKS_H

#include "myfunction.h"
#include <cstdlib>
#include <vector>

class Base_class_method
{
public:
	MyFunction fun;
	double r;
	double eps;
	double N;
	double a, b;
	double Gmin_x;
	double Gmin_y;
	//int flag_stop_choise;
	
	double min(double a, double b) { if (a < b) return a; else return b; }
	double M_func(int j);
	double m_func(int j);
	virtual double R(int j) = 0;

public:
	std::vector<double> lambda;
	
	virtual double UseMethod_N() = 0;

};


class method1 : public Base_class_method
{
public:
	method1(int _N, MyFunction _fun, double _r, double _eps, double _a, double _b);
	double UseMethod_N();
	double UseMethod_EPS();
	double R(int j);
};

class method_piyav : public Base_class_method
{
protected:
	double R(int j);
public:
	method_piyav(int _N, MyFunction _fun, double _r, double _eps, double _a, double _b);
	virtual double UseMethod_N();
	double UseMethod_EPS();
	double new_point_func(int j);
};

class method_strongin : public Base_class_method
{
protected:
	double R(int j);
public:
	method_strongin(int _N, MyFunction _fun, double _r, double _eps, double _a, double _b);
	double UseMethod_N();
	double UseMethod_EPS();
	double new_point_func(int j);
};

#endif // TASKS_H

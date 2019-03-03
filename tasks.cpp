#include "tasks.h"
#include <cstdlib>
#include <algorithm>


method1::method1(int _N, MyFunction _fun, double _r, double _eps, double _a, double _b)
{
	N = _N;
	fun = _fun;
	r = _r;
	eps = _eps;
	a = _a;
	b = _b;
	Gmin_x = Gmin_y = 0;
	lambda.resize(2);
}

double method1::UseMethod_N()
{
	lambda[0] = a;
	lambda[lambda.size()-1] = b;

	if (fun.func_calc(a) < fun.func_calc(b))
	{
		Gmin_x = a;
		Gmin_y = fun.func_calc(a);
	}
	else
	{
		Gmin_x = b;
		Gmin_y = fun.func_calc(b);
	}

	double R_curr = 0.0;
	double R_max = 0.0;
	int num_of_interval = 0;
	double new_point = 0.0;

	for (int i = 2; i < N; i++)
	{
		R_max = 0;
		for (int j = 0; j < (i - 1); j++)
		{
			R_curr = R(j);
			if (R_curr > R_max)
			{
				num_of_interval = j;
				R_max = R_curr;
			}
		}
		new_point = lambda[num_of_interval] + (lambda[num_of_interval + 1] - lambda[num_of_interval]) / 2.0;
		lambda.push_back(new_point);
		std::sort(lambda.begin(), lambda.end());

		if (fun.func_calc(new_point) < Gmin_y)
		{
			Gmin_x = new_point;
			Gmin_y = fun.func_calc(new_point);
		}

	}
	return Gmin_x;
}

double method1::R(int j)
{
	return (lambda[j + 1] - lambda[j]);
}

method_piyav::method_piyav(int _N, MyFunction _fun, double _r, double _eps, double _a, double _b)
{
	N = _N;
	fun = _fun;
	r = _r;
	eps = _eps;
	a = _a;
	b = _b;
	Gmin_x = Gmin_y = 0;
	lambda.resize(2);
}

double method_piyav::UseMethod_N()
{
	lambda[0] = a;
	lambda[lambda.size() - 1] = b;

	if (fun.func_calc(a) < fun.func_calc(b))
	{
		Gmin_x = a;
		Gmin_y = fun.func_calc(a);
	}
	else
	{
		Gmin_x = b;
		Gmin_y = fun.func_calc(b);
	}

	double R_curr = 0.0;
	double R_max = 0.0;
	int num_of_interval = 0;
	double new_point = 0.0;

	for (int i = 2; i < N; i++)
	{
		R_max = 0;
		for (int j = 0; j < (i - 1); j++)
		{
			R_curr = R(j);
			if (R_curr > R_max)
			{
				num_of_interval = j;
				R_max = R_curr;
			}
		}
		new_point = new_point_func(num_of_interval);
		lambda.push_back(new_point);
		std::sort(lambda.begin(), lambda.end());

		if (fun.func_calc(new_point) < Gmin_y)
		{
			Gmin_x = new_point;
			Gmin_y = fun.func_calc(new_point);
		}

	}
	return Gmin_x;
}

double method_piyav::R(int j)
{
	double res = 0,
		m = 0,
		M = 0;
	M = M_func(j);
	m = m_func(j);

	res = 0.5*m*(lambda[j + 1] - lambda[j]) - 0.5*(fun.func_calc(lambda[j + 1]) - fun.func_calc(lambda[j]));
	return res;
}

double Base_class_method::M_func(int j)
{
	double res = 0;
	double curr = 0;
	for (int i = 0; i < lambda.size(); i++)
	{
		curr = (fun.func_calc(lambda[j + 1]) - fun.func_calc(lambda[j])) / (lambda[j + 1] - lambda[j]);
		if (curr > res) res = curr;
	}
	return res;
}

double method_piyav::new_point_func(int j)
{
	double m = m_func(j);
	return (0.5*(lambda[j + 1] - lambda[j]) - 0.5*(fun.func_calc(lambda[j + 1]) - fun.func_calc(lambda[j])) / m);
}

double Base_class_method::m_func(int j)
{
	double M = M_func(j),
		m = 0;
	if (M > 0) m = r * M;
	else m = 1;
	return m;
}

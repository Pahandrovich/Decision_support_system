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

double method1::R(double j)
{
	return (lambda[j + 1] - lambda[j]);
}

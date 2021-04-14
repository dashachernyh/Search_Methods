#pragma once
#include<vector>
#define _USE_MATH_DEFINES
#include<math.h>
#include<random>
#include<ctime>
#include<iostream>

struct Trial
{
	double x, z;
	Trial& operator = (const Trial &tr)
	{
		x = tr.x;
		z = tr.z;
		return *this;
	}
	bool operator == (const Trial &tr)
	{
		if (x == tr.x && z == tr.z) return true;
		else
			return false;
	}
};

class Method
{
	std::vector<Trial> trials;
	Trial current;
	Trial first;
	Trial second;
	Trial best;
	int best_i;
	int itr;
	int max_itr;
	double eps, r;
	double a, b, c, d;
public:
	Method(double x_0, double x_n, double _e, double _r, int _maxitr, double _a, double _b, double _c, double _d);
	double Function(double x);
	int GetTrialSize() {return static_cast<int>(trials.size());}
	Trial GetTrial(int index) { return trials[index]; }
	int GetBestIndex() { return best_i; }
	Trial GetBestTrial () { return best; }
	int GetItr() { return itr; }
	// методы
	void StronginMethod();
	void DirectMethod();
	void PiyavskyMethod();
	
};

Method::Method(double x_0, double x_n, double _e, double _r, int _maxitr, double _a, double _b, double _c, double _d)
{
	a = _a;
	b = _b;
	c = _c;
	d = _d;
	first.x = x_0;
	first.z = Function(x_0);
	second.x = x_n;
	second.z = Function(x_n);
	trials.push_back(first);
	trials.push_back(second);
	best_i = 0;
	eps = _e;
	r = _r;
	max_itr = _maxitr;
	itr = 0;
}


double Method::Function(double x)
{
	double res = a * sin(b * x) + c * cos(d * x);
	return res;
}

void Method::StronginMethod()
{
	double M, Rmax, Rpos;
	double curr_eps = second.x - first.x;
	std::vector<Trial>::iterator it = trials.begin();
	best.z = first.z;
	while (curr_eps > eps   && itr <= max_itr)
	{
		Rpos = 1;
		M = fabs((trials[1].z - trials[0].z) / (trials[1].x - trials[0].x));
		for (int i = 2; i < trials.size(); i++)
		{
			double max;
			max = fabs((trials.at(i).z - trials.at(i - 1).z) / (trials.at(i).x - trials.at(i - 1).x));
			if (max > M)
				M = max;
		}

		if (M == 0)
			M = 1;
		else
			M = r * M;
		Rmax = M * (trials[1].x - trials[0].x) + (pow((trials[1].z - trials[0].z), 2) / (M * (trials[1].x - trials[0].x))) - 2 * (trials[1].z + trials[0].z);
		for (int i = 2; i < trials.size(); i++)
		{

			double k = M * (trials[i].x - trials[i - 1].x);
			double R = k + (pow((trials[i].z - trials[i - 1].z), 2) / k) - 2 * (trials[i].z + trials[i - 1].z);

			if (R > Rmax)
			{
				Rmax = R;
				Rpos = i;
			}
		}
		curr_eps = trials[Rpos].x - trials[Rpos - 1].x;

		std::vector<Trial>::iterator it2 = trials.begin();
		for (it = trials.begin(); it - trials.begin() <= Rpos; it++) it2 = it;

		current.x = (trials[Rpos].x + trials[Rpos - 1].x) / 2 - (trials[Rpos].z - trials[Rpos - 1].z) / (2 * M);
		current.z = Function(current.x);
		trials.insert(it2, current);
		
		if (best.z > current.z)
		{
			best_i = itr;
			best.z = current.z;
			best.x = current.x;
		}
		itr++;
	}
}

void Method::DirectMethod()
{
	double M, Rmax, Rpos;
	double m = second.x;
	double n = first.x;
	double curr_eps = second.x - first.x;
	std::vector<Trial>::iterator it = trials.begin();
	Rmax = 0;
	best.z = first.z;
	while (curr_eps > eps && itr <= max_itr)
	{
		Rpos = 1;
		Rmax = trials[1].x - trials[0].x;
		for (int i = 2; i < static_cast<int> (trials.size()); i++)
		{
			double R = trials[i].x - trials[i - 1].x;
			if (Rmax < R)
			{
				Rmax = R;
				Rpos = i;
			}
		}

		if (itr == 291)
			int k = 1;

		curr_eps = trials[Rpos].x - trials[Rpos - 1].x;

		std::vector<Trial>::iterator it2 = trials.begin();
		for (it = trials.begin(); it - trials.begin() <= Rpos; it++) it2 = it;

		current.x = 0.5 * (trials[Rpos].x + trials[Rpos - 1].x);
		current.z = Function(current.x);
		trials.insert(it2, current);

		if (best.z > current.z)
		{
			best_i = itr;
			best.z = current.z;
			best.x = current.x;
		}
		itr++;
	}
}

void Method::PiyavskyMethod()
{
	double M, Rmax, Rpos;
	double curr_eps = second.x - first.x;
	std::vector<Trial>::iterator it = trials.begin();
	best.z = first.z;
	while (curr_eps > eps && itr <= max_itr)
	{
		Rpos = 1;
		M = fabs((trials[1].z - trials[0].z) / (trials[1].x - trials[0].x));
		for (int i = 2; i < static_cast<int>(trials.size()); i++)
		{
			double max;
			max = fabs((trials.at(i).z - trials.at(i - 1).z) / (trials.at(i).x - trials.at(i - 1).x));
			if (max > M)
				M = max;
		}

		if (M == 0)
			M = 1;
		else
			M = r * M;
		//характеристика интервала
		Rmax = 0.5 * M * (trials[1].x - trials[0].x) - (trials[1].z + trials[0].z) / 2;
		for (int i = 2; i < static_cast<int>(trials.size()); i++)
		{
			double R = 0.5 * M * (trials[i].x - trials[i - 1].x) - (trials[i].z + trials[i - 1].z) / 2;
			if (R > Rmax)
			{
				Rmax = R;
				Rpos = i;
			}
		}
		curr_eps = trials[Rpos].x - trials[Rpos - 1].x;

		std::vector<Trial>::iterator it2 = trials.begin();
		for (it = trials.begin(); it - trials.begin() <= Rpos; it++) it2 = it;

		current.x = (trials[Rpos].x + trials[Rpos - 1].x) / 2 - (trials[Rpos].z - trials[Rpos - 1].z) / (2 * M);
		current.z = Function(current.x);
		trials.insert(it2, current);

		if (best.z > current.z)
		{
			best_i = itr;
			best.z = current.z;
			best.x = current.x;
		}
		itr++;
	}
}
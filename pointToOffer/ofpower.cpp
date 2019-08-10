// pch.cpp: 与预编译标头对应的源文件；编译成功所必需的

#include "ofpower.h"


double Solution::Power(double base, int exponent) {
	double cnt = base;
	int Topositive=0;//转化成正数
	if (base - 0.0< Epsilon && base - 0.0 > -Epsilon)
		throw std::runtime_error("error");
	double result = 1.0;
	if (exponent < 0)
	{
		Topositive = -exponent;
	}
	else
	{
		Topositive = exponent;
	}

	while (Topositive) {
		if (Topositive & 1) {
			result *= cnt;
		}
		cnt *= cnt;
		Topositive >>= 1;
	}
	return exponent > 0 ? result : 1.0 / result;
};


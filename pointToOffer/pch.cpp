// pch.cpp: 与预编译标头对应的源文件；编译成功所必需的

#include "pch.h"
#include<math.h>

double Solution::Power(double base, int exponent) {
	double cnt=base;
	if (base < 0.0000001)
		return 1;
	double result = 1;
	while (exponent) {
		if (exponent & 1) {
			result *= cnt;
		}
		cnt*= cnt;
		exponent >>= 1;
	}
	return result;
};

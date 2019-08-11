/*给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。
     快速幂：快速算底数的n次幂
	 a^11=a^1011
	 a^11=a^(2^0+2^1+2^3)
	          =a^2^0 * a^2^1 * a^2^3
			  时间复杂度logn
	（1）位运算
	 （2）递归运算
*/

#include "ofpower.h"


double Solution::Power(double base, int exponent) {
	double cnt = base;
	int Topositive=0;//转化成正数
	if (base - 0.0< Epsilon && base - 0.0 > -Epsilon)
		throw std::runtime_error("error");
	double result = 1.0;
	if (exponent < 0)         //负数
	{
		Topositive = -exponent;
	}
	else
	{
		Topositive = exponent;
	}

	while (Topositive) {
 		if (Topositive & 1) {      //判断奇偶性 ==1
			result *= cnt;
		}
		cnt *= cnt;
		Topositive >>= 1;         //带符号右移一位，舍弃最低位
	}
	return exponent > 0 ? result : 1.0 / result;
};


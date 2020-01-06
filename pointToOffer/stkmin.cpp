#include"com.h"

/*
题目描述:
定义栈的数据结构，
请在该类型中实现一个能够得到栈中所含最小元素的minstk函数（时间复杂度应为O（1））。
*/

void Solution::push(int value) {
	stk.push(value);
	if (minstk.empty()) {
		minstk.push(value);
	}
	else if (minstk.top() >= value) {              //比最小栈栈顶元素小的value进栈
		minstk.push(value);
	}

}
void Solution::pop() {
	if (stk.top() == minstk.top())   //栈顶元素相同，同时删除栈顶元素，minstk删除最小值，top指向次小值
		minstk.pop();
	stk.pop();
}
int Solution::top() {
	return stk.top();
}
int Solution::min() {
	return minstk.top();
}
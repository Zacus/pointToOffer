#include"com.h"

/*
��Ŀ����:
����ջ�����ݽṹ��
���ڸ�������ʵ��һ���ܹ��õ�ջ��������СԪ�ص�minstk������ʱ�临�Ӷ�ӦΪO��1������
*/

void Solution::push(int value) {
	stk.push(value);
	if (minstk.empty()) {
		minstk.push(value);
	}
	else if (minstk.top() >= value) {              //����Сջջ��Ԫ��С��value��ջ
		minstk.push(value);
	}

}
void Solution::pop() {
	if (stk.top() == minstk.top())   //ջ��Ԫ����ͬ��ͬʱɾ��ջ��Ԫ�أ�minstkɾ����Сֵ��topָ���Сֵ
		minstk.pop();
	stk.pop();
}
int Solution::top() {
	return stk.top();
}
int Solution::min() {
	return minstk.top();
}
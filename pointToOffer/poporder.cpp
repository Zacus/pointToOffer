#include"com.h"

/*
题目描述:
输入两个整数序列，第一个序列表示栈的压入顺序，
请判断第二个序列是否可能为该栈的弹出顺序。
假设压入栈的所有数字均不相等。
例如序列1,2,3,4,5是某栈的压入顺序，
序列4,5,3,2,1是该压栈序列对应的一个弹出序列，
但4,3,5,1,2就不可能是该压栈序列的弹出序列。（注意：这两个序列的长度是相等的）
*/
//解题：
//将序列一的元素压入栈中，压入一个元素与序列二比较是否相等，
// 若相等，元素出栈，栈和序列二数组同时指向下一个元素
//不等，继续将序列一元素压入栈。
bool Solution::IsPopOrder(vector<int> pushV, vector<int> popV) {
	if (pushV.empty())   return false;   //判断序列为空

	stack<int> s;
	int j = 0;
	for (int i = 0; i < pushV.size(); ++i) {
		s.push(pushV[i]);
		while (!s.empty() && s.top() == popV[j]) {
			s.pop();
			j++;
		}
	}
	return s.empty();
}
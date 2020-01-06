#include"com.h"

/*
14.����һ����������������е�����k����㡣
*/
/*
ListNode*  Solution::FindKthToTail(ListNode* pListHead, unsigned int k) {
	if (!pListHead || k<0)  return nullptr;
	ListNode *fast = pListHead;
	ListNode *slow = pListHead;
	for (unsigned int i = 0; i < k; ++i) {  //��0��ʼ������ָ���k��ָ��
		if (!fast) {
			return nullptr;
		}
		fast = fast->next;
	}
	while (fast) {
		fast = fast->next;
		slow = slow->next;
	}
	return slow;
}
*/
ListNode*  Solution::FindKthToTail(ListNode* pListHead, unsigned int k) {
	
	std::stack<ListNode* > sta;
	ListNode* Ln = pListHead;
	ListNode* rtn = pListHead;
	while (Ln) {
		sta.push(Ln);
		Ln = Ln->next;
	}
	if (sta.size() < k)
		return nullptr;
	if (k == 0) 
		return nullptr;
	while (k>1 ) {
		sta.pop();
		k--;
	}
	return sta.top();
	}


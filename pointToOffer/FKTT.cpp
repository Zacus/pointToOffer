#include"ofpower.h"
/*
14.����һ����������������е�����k����㡣
*/
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
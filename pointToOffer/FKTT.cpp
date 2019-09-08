#include"ofpower.h"
/*
14.输入一个链表，输出该链表中倒数第k个结点。
*/
ListNode*  Solution::FindKthToTail(ListNode* pListHead, unsigned int k) {
	if (!pListHead || k<0)  return nullptr;
	ListNode *fast = pListHead;
	ListNode *slow = pListHead;
	for (unsigned int i = 0; i < k; ++i) {  //从0开始计数，指向第k个指针
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
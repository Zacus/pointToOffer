#include"com.h"

/*
题目描述
输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。
*/
#if 0
ListNode* Solution::Merge(ListNode* pHead1, ListNode* pHead2) {
	if (!pHead1)  return pHead2;
	if (!pHead2)  return pHead1;
	ListNode* mergeHead = nullptr;                       //mergeHead为合并后链表的头结点
	ListNode* current = nullptr;                               //始终指向合并后链表的终结点
	//ListNode* union = new ListNode(0);
	if (pHead1->val< pHead2->val) {
		mergeHead = pHead1;
		current = pHead1;
		pHead1 = pHead1->next;
	}
	else {
		mergeHead = pHead2;
		current = pHead2;
		pHead2 = pHead2->next;
	}
	while (pHead1 && pHead2) {
		if (pHead1->val < pHead2->val) {
			current->next = pHead1;
			current = current->next;
			pHead1 = pHead1->next;
		}
		else {
			current->next = pHead2;
			current = current->next;
			pHead2 = pHead2->next;
		}
	}
	if (pHead1) {
		current->next = pHead1;
	}
	if (pHead2) {
		current->next = pHead2;
	}
	return mergeHead;
}
#endif
//递归解法
ListNode* Solution::Merge(ListNode* pHead1, ListNode* pHead2) {
	if (!pHead1)  return pHead2;
	if (!pHead2)  return pHead1;
	ListNode* head1 = pHead1;
	ListNode* head2 = pHead2;

	ListNode* merge = nullptr;
		if (head1->val < head2->val) {
			merge = head1;
			merge->next = Merge(head1->next, head2);
		}
		else {
			merge = head2;
			merge->next = Merge(head1, head2->next);
		}
	return merge;
}
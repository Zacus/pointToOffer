#include"com.h"

/*
��Ŀ����
���������������������������������ϳɺ��������Ȼ������Ҫ�ϳɺ���������㵥����������
*/
#if 0
ListNode* Solution::Merge(ListNode* pHead1, ListNode* pHead2) {
	if (!pHead1)  return pHead2;
	if (!pHead2)  return pHead1;
	ListNode* mergeHead = nullptr;                       //mergeHeadΪ�ϲ��������ͷ���
	ListNode* current = nullptr;                               //ʼ��ָ��ϲ���������ս��
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
//�ݹ�ⷨ
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
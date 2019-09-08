#include"ofpower.h"
/*����һ��������ת��������������ı�ͷ��*/

ListNode* Solution::ReverseList(ListNode* pHead) {
	
	if (!pHead) return nullptr;       //�ж��Ƿ�Ϊ��
	ListNode *curr = pHead;
	ListNode *pre = nullptr;
	ListNode *later = nullptr;
	while (curr->next) {
		later = curr->next;
		curr->next = pre;
		pre = curr;
		curr = later;
	}
	curr->next = pre;
	return curr;

}
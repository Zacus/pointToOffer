#include"ofpower.h"
/*输入一个链表，反转链表后，输出新链表的表头。*/

ListNode* Solution::ReverseList(ListNode* pHead) {
	
	if (!pHead) return nullptr;       //判断是否为空
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
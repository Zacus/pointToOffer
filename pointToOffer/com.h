
#ifndef COM_H
#define COM_H


#include<vector>
#include <stdexcept>
constexpr auto Epsilon = 0.000001;

/*
 *    链表
 */
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
}; 

/*
    树
*/
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
	}
}; 

class Solution {
public:

	double Power(double base, int exponent);
	void reOrderArray(std::vector<int> &array);
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k);
	ListNode* ReverseList(ListNode* pHead);
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2);
	/*                         start                          */
	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2);
	bool isSubtree(TreeNode* pRoot1, TreeNode* pRoot2);
	/*                         end                           */
};
#endif //COM_H

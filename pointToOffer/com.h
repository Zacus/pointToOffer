
#ifndef COM_H
#define COM_H


#include<vector>
#include <stdexcept>
#include <stack>
#include <queue>
using namespace std;
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
	void Mirror(TreeNode *pRoot);
	vector<int> printMatrix(vector<vector<int> > matrix);

	/*  stack min    start                             */
	void push(int value);
	void pop();
	int top();
	int min();
	/*  stack min    end                             */

	bool IsPopOrder(vector<int> pushV, vector<int> popV);
	vector<int> PrintFromTopToBottom(TreeNode* root);
private:
	/*  stack min    start                             */
	stack<int> minstk;   //最小栈，辅助栈
	stack<int> stk;         //数据栈
	/*  stack min    end                              */
};
#endif //COM_H

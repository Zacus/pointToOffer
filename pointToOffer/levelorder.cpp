#include"com.h"
/*
题目描述
从上往下打印出二叉树的每个节点，同层节点从左至右打印。
*/
vector<int> Solution::PrintFromTopToBottom(TreeNode* root) {
	queue<TreeNode*> que;
	if (root)  que.push(root);
	TreeNode* r1;
	vector<int> vc;
	while (!que.empty()) {
		r1 = que.front();
		vc.push_back(r1->val);
		que.pop();
		if (r1->left)
			que.push(r1->left);
		if (r1->right)
			que.push(r1->right);
	}
	return vc;
}
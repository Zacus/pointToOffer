#include"com.h"
/*
��Ŀ����
�������´�ӡ����������ÿ���ڵ㣬ͬ��ڵ�������Ҵ�ӡ��
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
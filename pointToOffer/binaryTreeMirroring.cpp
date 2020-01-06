#include"com.h"


void Solution::Mirror(TreeNode *pRoot) {
	if (pRoot) {
		TreeNode* temp = pRoot->left;
		pRoot->left = pRoot->right;
		pRoot->right = temp;

		Mirror(pRoot->left);
		Mirror(pRoot->right);
	}
}
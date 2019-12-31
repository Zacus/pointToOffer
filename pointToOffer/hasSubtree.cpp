#include"com.h"
/*

输入两棵二叉树A，B，判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）
*/
bool Solution::isSubtree(TreeNode* pRoot1, TreeNode* pRoot2) {
	if (!pRoot2)  return true;    //注意：先判断root2
	if (!pRoot1) return false;
	if (pRoot1->val == pRoot2->val) {
		return isSubtree(pRoot1->left, pRoot2->left) &&
			isSubtree(pRoot1->right, pRoot2->right);
	}
	else {
		return false;
	}

}

bool Solution::HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2) {
	//if (!pRoot1) return false;
	//if (!pRoot2) return false;
	bool result = false;
	if (pRoot1 && pRoot2) {
		if (pRoot1->val == pRoot2->val) {
			result = isSubtree(pRoot1, pRoot2);
		}
		if (!result) {
			result = HasSubtree(pRoot1->left, pRoot2);
		}
		if (!result) {
			result = HasSubtree(pRoot1->right, pRoot2);
		}
	}
	return result;
}
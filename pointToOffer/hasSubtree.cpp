#include"com.h"
/*

�������ö�����A��B���ж�B�ǲ���A���ӽṹ����ps������Լ��������������һ�������ӽṹ��
*/
bool Solution::isSubtree(TreeNode* pRoot1, TreeNode* pRoot2) {
	if (!pRoot2)  return true;    //ע�⣺���ж�root2
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

#ifndef OFPOWER_H
#define OFPOWER_H


#include<vector>
#include <stdexcept>
constexpr auto Epsilon = 0.000001;
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
}; 

class Solution {
public:

	double Power(double base, int exponent);
	void reOrderArray(std::vector<int> &array);
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k);

};
#endif //OFPOWER_H

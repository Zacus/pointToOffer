#include"com.h"


/*
  * ��Ŀ����
����һ�����󣬰��մ���������˳ʱ���˳�����δ�ӡ��ÿһ�����֣�
���磬�����������4 X 4���� 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
           �����δ�ӡ������              1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.

	���⣺����leetcode���
1.�����趨�������ұ߽�
2.��������ƶ������ң���ʱ��һ����Ϊ�Ѿ�ʹ�ù��ˣ����Խ����ͼ��ɾȥ�������ڴ����о������¶����ϱ߽�
3.�ж������¶�������±߽罻���������������������������ѭ�������ش�
4.�����±߽粻�����������δ�����������������������ƶ��������������һ������ͬ��
5.����ѭ�����ϲ��裬ֱ��ĳ�����߽罻������ѭ�������ش𰸡�
*/
vector<int> Solution::printMatrix(vector<vector<int> > matrix) {
	
	vector<int> ans;
	if (matrix.empty()) return ans;
	int upper = 0;          //��ʼ���������ұ߽�
	int down = matrix.size() - 1;
	int left = 0;
	int right = matrix[0].size() - 1;
	while (true)
	{
		for (int i = left; i <= right; ++i)  ans.push_back(matrix[upper][i]);   //����
		if (++upper > down) break;        //�����趨�߽�
		for (int i = upper; i <= down; ++i) ans.push_back(matrix[i][right]);  //����
		if (--right < left) break;
		for (int i = right; i >= left; --i) ans.push_back(matrix[down][i]);     //����
		if (--down < upper) break;
		for (int i = down; i >= upper; --i) ans.push_back(matrix[i][left]);   //����
		if (++left > right) break;
	}
	return ans;
}
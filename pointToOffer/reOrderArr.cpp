#include "com.h"
/* 

   输入一个整数数组，实现一个函数来调整该数组中数字的顺序，
   使得所有奇数位于数组的前半部分，偶数位于数组的后半部分，并且
   保证奇数与奇数，偶数与偶数的相对位置不变。

   方法一：空间换时间策略
                  额外开辟数组大小的空间，遍历整数数组，将奇数的放入数组，然后在将整数的放入数组
   方法二：根据所学排序算法改写
                  稳定：冒泡排序，插入排序，归并排序
				  不稳定：快速排序，希尔排序，，简单选择排序，堆排序
				  所谓稳定性是指排序过程中，相对位置不变
  方法三：利用STL标准库 stable_partition函数  稳定性
                                            将范围中的元素分成两个不相关的子集，满足一元谓词的元素在不满足一元谓词的元素之前，
											并保留等效元素的相对位置。
                 partition   函数不稳定

                
*/
void Solution::reOrderArray(std::vector<int> &array)
{
#if 0
	std::vector<int> OrderArr;
	int j = 0;
	for (int i = 0; i < array.size; ++i) {
		if (array.at(i) % 2)
			array[j++] = array[i];
		else
			OrderArr.push_back(array[i]);
	}
	for (int i = 0; i < OrderArr.size; ++i) {
		array[j++] = OrderArr.at(i);   
	} 
#endif
//冒泡排序	
	/*for (int i = 0; i < array.size; ++i)
	{
		bool flag = false;
		for (int j = 0; j < array.size - i; ++j)
			if (array[j] % 2 == 0 && array[j + 1] % 2)
			{

				flag = true;
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		if (flag == false)
			break;
	}*/
    //插入
	//for (int i = 1; i < array.size; ++i)
	//{
	//	int temp = array[i];                 //将待插入关键字暂存在temp
	//	int j;
	//	for ( j = i - 1; j >= 0; --j)    
	//	{
	//		if (temp % 2 && array[j] % 2==0)    //如果前一个数为偶数，关键字为奇数，则前一个数组元素后移一位、
	//			array[j + 1] = array[j];                    //自身逻辑错误  对 跳出循环的条件限制理解不够
	//	}
	//	array[j+ 1] = temp; 

	//}
   //插入
	//for (int i = 1; i < array.size; ++i)
	//{
	//	int temp = array[i];                 //将待插入关键字暂存在temp
	//	int j=i-1;
	//	if (temp % 2 )
	//	{
	//		for (; j >= 0; --j)
	//		{
	//			//if (temp % 2 == 0 || array[j] % 2)   //如果待关键字是偶数直接插在数组尾部，如果遇到奇数，插在该奇数后
	//			//		break;
	//			if (array[j] % 2 == 0)    //如果前一个数为偶数，则前一个数组元素后移一位
	//				array[j + 1] = array[j];
	//		}
	//	}
	//	array[j+ 1] = temp; 

	//}
	//归并
	
	
}
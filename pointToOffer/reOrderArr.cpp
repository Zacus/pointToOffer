#include "com.h"
/* 

   ����һ���������飬ʵ��һ�����������������������ֵ�˳��
   ʹ����������λ�������ǰ�벿�֣�ż��λ������ĺ�벿�֣�����
   ��֤������������ż����ż�������λ�ò��䡣

   ����һ���ռ任ʱ�����
                  ���⿪�������С�Ŀռ䣬�����������飬�������ķ������飬Ȼ���ڽ������ķ�������
   ��������������ѧ�����㷨��д
                  �ȶ���ð�����򣬲������򣬹鲢����
				  ���ȶ�����������ϣ�����򣬣���ѡ�����򣬶�����
				  ��ν�ȶ�����ָ��������У����λ�ò���
  ������������STL��׼�� stable_partition����  �ȶ���
                                            ����Χ�е�Ԫ�طֳ���������ص��Ӽ�������һԪν�ʵ�Ԫ���ڲ�����һԪν�ʵ�Ԫ��֮ǰ��
											��������ЧԪ�ص����λ�á�
                 partition   �������ȶ�

                
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
//ð������	
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
    //����
	//for (int i = 1; i < array.size; ++i)
	//{
	//	int temp = array[i];                 //��������ؼ����ݴ���temp
	//	int j;
	//	for ( j = i - 1; j >= 0; --j)    
	//	{
	//		if (temp % 2 && array[j] % 2==0)    //���ǰһ����Ϊż�����ؼ���Ϊ��������ǰһ������Ԫ�غ���һλ��
	//			array[j + 1] = array[j];                    //�����߼�����  �� ����ѭ��������������ⲻ��
	//	}
	//	array[j+ 1] = temp; 

	//}
   //����
	//for (int i = 1; i < array.size; ++i)
	//{
	//	int temp = array[i];                 //��������ؼ����ݴ���temp
	//	int j=i-1;
	//	if (temp % 2 )
	//	{
	//		for (; j >= 0; --j)
	//		{
	//			//if (temp % 2 == 0 || array[j] % 2)   //������ؼ�����ż��ֱ�Ӳ�������β��������������������ڸ�������
	//			//		break;
	//			if (array[j] % 2 == 0)    //���ǰһ����Ϊż������ǰһ������Ԫ�غ���һλ
	//				array[j + 1] = array[j];
	//		}
	//	}
	//	array[j+ 1] = temp; 

	//}
	//�鲢
	
	
}
//һֻ����һ�ο�������1��̨�ף�Ҳ��������2���������������һ��n����̨���ܹ��ж���������
//class Solution {
//public:
//	int jumpFloor(int number) {
//		return sum(number);
//	}
//	int sum(int a)
//	{
//		if (a == 0)
//			return 0;
//		if (a == 1)
//			return 1;
//		if (a == 2)
//			return 2;
//		int one = 2; int two = 1;
//		int sum = 0;
//		for (int i = 3; i <= a; ++i)
//		{
//			sum = one + two;
//			two = one;
//			one = sum;
//		}
//		return sum;
//	}
//
//};
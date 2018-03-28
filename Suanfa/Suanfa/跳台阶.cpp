//一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法
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
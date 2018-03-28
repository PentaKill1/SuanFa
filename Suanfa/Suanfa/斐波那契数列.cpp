//class Solution {
//public:
//	int Fibonacci(int n) {
//		return sum(n);
//
//	}
//	int sum(int a)
//	{
//		if (a == 0)
//			return 0;
//		if (a == 1)
//			return 1;
//		int one = 1;
//		int two = 0;
//		int N = 0;
//		for (int i = 2; i <= a; ++i)
//		{
//			N = one + two;
//			two = one;
//			one = N;
//		}
//		return N;
//	}
//};
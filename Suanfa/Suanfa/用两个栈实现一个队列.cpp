//class Solution
//{
//
//private:
//	stack<int> stack1;
//	stack<int> stack2;
//public:
//	void push(int node) {
//		stack1.push(node);
//	}
//
//	int pop() {
//		//�Ȱ�ջA����ջB
//		while (!stack1.empty())
//		{
//			int a = stack1.top();
//			stack1.pop();
//			stack2.push(a);
//		}
//		int temp = stack2.top();
//		stack2.pop();
//		//�ٰ�ջB�黹��ջA
//		while (!stack2.empty())
//		{
//			int a = stack2.top();
//			stack1.push(a);
//			stack2.pop();
//		}
//		return temp;
//
//	}
//
//};
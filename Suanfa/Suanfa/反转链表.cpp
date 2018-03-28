///*
//struct ListNode {
//int val;
//struct ListNode *next;
//ListNode(int x) :
//val(x), next(NULL) {
//}
//};*/
//class Solution {
//public:
//	ListNode * ReverseList(ListNode* pHead) {
//		ListNode* p = pHead;
//		ListNode* q = pHead;
//		stack<int> save;
//		while (p != nullptr)
//		{
//			save.push(p->val);
//			p = p->next;
//		}
//		while (!save.empty())
//		{
//			pHead->val = save.top();
//			save.pop();
//			pHead = pHead->next;
//		}
//		return pHead;
//	}
//};
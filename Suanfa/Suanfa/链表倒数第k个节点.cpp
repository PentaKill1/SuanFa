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
//	ListNode * FindKthToTail(ListNode* pListHead, unsigned int k) {
//		if (pListHead == NULL || k == 0) return NULL;
//		ListNode* one = pListHead;
//		ListNode* two = pListHead;
//		for (int i = 0; i<k - 1; i++)
//		{
//			if (two->next) two = two->next;
//			else return NULL;
//		}
//		while (two->next != NULL)
//		{
//			two = two->next;
//			one = one->next;
//		}
//		return one;
//	}
//};
///**
//*  struct ListNode {
//*        int val;
//*        struct ListNode *next;
//*        ListNode(int x) :
//*              val(x), next(NULL) {
//*        }
//*  };
//*/
//class Solution {
//public:
//	vector<int> printListFromTailToHead(struct ListNode* head) {
//		vector<int> v;
//
//		ListNode *p = head;
//		while (p != nullptr) {
//			v.push_back(p->val);
//			p = p->next;
//		}
//		//���������������ʱ����
//		return vector<int>(v.rbegin(), v.rend());
//	}
//};
///*
//struct TreeNode {
//int val;
//struct TreeNode *left;
//struct TreeNode *right;
//TreeNode(int x) :
//val(x), left(NULL), right(NULL) {
//}
//};*/
//
//class CheckBalance {
//public:
//	bool check(TreeNode* root) {
//		int s = Getheight(root);
//		if (s == -1)
//			return false;
//		return true;
//	}
//	int Getheight(TreeNode* tree)
//	{
//		if (tree == NULL)
//			return 0;
//		int L = 1 + Getheight(tree->left);
//		int R = 1 + Getheight(tree->right);
//		if (abs(L - R)>1)
//			return -1;
//		return L>R ? L : R;
//	}
//};

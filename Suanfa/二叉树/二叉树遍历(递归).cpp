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
//class TreeToSequence {
//public:
//	vector<vector<int> > convert(TreeNode* root) {
//		vector<int> xian;
//		vector<int> zhong;
//		vector<int>  hou;
//		vector<vector<int>> data;
//		Xian(xian, root);
//		Zhong(zhong, root);
//		Hou(hou, root);
//		data.push_back(xian);
//		data.push_back(zhong);
//		data.push_back(hou);
//		return data;
//	}
//	void Xian(vector<int> &a, TreeNode* tree)
//	{
//		if (tree == NULL)
//			return;
//		a.push_back(tree->val);
//		Xian(a, tree->left);
//		Xian(a, tree->right);
//	}
//	void Zhong(vector<int> &a, TreeNode* tree)
//	{
//		if (tree == NULL)
//			return;
//		Zhong(a, tree->left);
//		a.push_back(tree->val);
//		Zhong(a, tree->right);
//	}
//	void Hou(vector<int> &a, TreeNode* tree)
//	{
//		if (tree == NULL)
//			return;
//		Hou(a, tree->left);
//		Hou(a, tree->right);
//		a.push_back(tree->val);
//	}
//};

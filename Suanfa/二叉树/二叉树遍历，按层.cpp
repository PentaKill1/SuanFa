///*
//struct TreeNode {
//int val;
//struct TreeNode *left;
//struct TreeNode *right;
//TreeNode(int x) :
//val(x), left(NULL), right(NULL) {
//}
//};*/
////思路：一个last和nlast节点，nlast节点是每一行最后一个元素，如果last节点等于nlast节点说明要换行了
////例如：首先把头节点放入，此时last=toot,头结点出栈，放入root->left.root->right让nlast=root->right,
////此时last=出栈的元素，所以说明要换行，让last=nlast。
//
//class TreePrinter {
//public:
//	vector<vector<int> > printTree(TreeNode* root) {
//		// write code here
//		queue<TreeNode*> tree;
//		vector<vector<int>> result;
//		vector<int> row;
//		TreeNode* last = root;
//		TreeNode* nlast = NULL;
//		TreeNode* Node = NULL;
//		tree.push(root);
//		while (!tree.empty())
//		{
//			Node = tree.front();//Node存放每一个出栈的元素
//			tree.pop();//出栈
//			row.push_back(Node->val);
//			if (Node->left) {
//				tree.push(Node->left);
//				nlast = Node->left;
//			}
//			if (Node->right) {
//				tree.push(Node->right);
//				nlast = Node->right;
//			}
//			if (Node == last) {
//				result.push_back(row);
//				last = nlast;
//				row.clear();
//			}
//
//		}
//		return result;
//	}
//};

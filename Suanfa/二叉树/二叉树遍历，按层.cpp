///*
//struct TreeNode {
//int val;
//struct TreeNode *left;
//struct TreeNode *right;
//TreeNode(int x) :
//val(x), left(NULL), right(NULL) {
//}
//};*/
////˼·��һ��last��nlast�ڵ㣬nlast�ڵ���ÿһ�����һ��Ԫ�أ����last�ڵ����nlast�ڵ�˵��Ҫ������
////���磺���Ȱ�ͷ�ڵ���룬��ʱlast=toot,ͷ����ջ������root->left.root->right��nlast=root->right,
////��ʱlast=��ջ��Ԫ�أ�����˵��Ҫ���У���last=nlast��
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
//			Node = tree.front();//Node���ÿһ����ջ��Ԫ��
//			tree.pop();//��ջ
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

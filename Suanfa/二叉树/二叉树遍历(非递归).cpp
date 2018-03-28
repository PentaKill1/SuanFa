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
//		vector<vector<int>> save(3);
//		save[0] = xian(root, save[0]);
//		save[1] = zhong(root, save[1]);
//		save[2] = hou(root, save[2]);
//		return save;
//	}
//	vector<int> xian(TreeNode* root, vector<int> &a)//先序遍历
//	{
//		stack<TreeNode*> p;
//		TreeNode* q;
//		p.push(root);                             //先让栈顶入栈
//		while (!p.empty())
//		{
//			a.push_back(p.top()->val);            //打印栈顶元素
//			q = p.top();
//			p.pop();
//
//			if (q->right != NULL)                     //栈顶的右节点入栈
//			{
//				p.push(q->right);
//			}
//			if (q->left != NULL)
//			{
//				p.push(q->left);                  //栈顶的做节点入栈
//			}
//		}
//		return a;
//	}
//	vector<int> zhong(TreeNode* root, vector<int> &a)
//	{
//		stack<TreeNode*> p;
//		TreeNode* q = root;
//		while (q != NULL || !p.empty())
//		{
//			if (q != NULL)    //如果做节点不是空，左节点入栈
//			{
//				p.push(q);
//				q = q->left;       //让q等于入栈的节点
//			}
//			else  //如果节点是空的，弹出栈顶节点
//			{
//				q = p.top();
//				a.push_back(q->val);
//				p.pop();
//				q = q->right;
//			}
//		}
//		return a;
//	}
//	vector<int> hou(TreeNode* root, vector<int> &a)
//	{
//		stack<TreeNode*> p;
//		stack<TreeNode*> q;
//		TreeNode* m = root;
//		p.push(root);
//		while (!p.empty())
//		{
//			m = p.top();   //第一个栈顶元素取出来
//			p.pop();     //删除栈顶元素
//			q.push(m);   //放入第二个栈中
//			if (m->left != NULL)
//			{
//				p.push(m->left);
//			}
//			if (m->right != NULL)
//			{
//				p.push(m->right);
//			}
//		}
//		int i = 0;
//		while (!q.empty())
//		{
//			m = q.top();
//			a.push_back(m->val);
//			q.pop();
//		}
//		return a;
//	}
//};

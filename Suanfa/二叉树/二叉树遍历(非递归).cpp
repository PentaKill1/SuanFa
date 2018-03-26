/*
struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};*/

class TreeToSequence {
public:
	vector<vector<int> > convert(TreeNode* root) {
		vector<vector<int>> save(3);
		save[0] = xian(root, save[0]);
		save[1] = zhong(root, save[1]);
		save[2] = hou(root, save[2]);
		return save;
	}
	vector<int> xian(TreeNode* root, vector<int> &a)//�������
	{
		stack<TreeNode*> p;
		TreeNode* q;
		p.push(root);                             //����ջ����ջ
		while (!p.empty())
		{
			a.push_back(p.top()->val);            //��ӡջ��Ԫ��
			q = p.top();
			p.pop();

			if (q->right != NULL)                     //ջ�����ҽڵ���ջ
			{
				p.push(q->right);
			}
			if (q->left != NULL)
			{
				p.push(q->left);                  //ջ�������ڵ���ջ
			}
		}
		return a;
	}
	vector<int> zhong(TreeNode* root, vector<int> &a)
	{
		stack<TreeNode*> p;
		TreeNode* q = root;
		while (q != NULL || !p.empty())
		{
			if (q != NULL)    //������ڵ㲻�ǿգ���ڵ���ջ
			{
				p.push(q);
				q = q->left;       //��q������ջ�Ľڵ�
			}
			else  //����ڵ��ǿյģ�����ջ���ڵ�
			{
				q = p.top();
				a.push_back(q->val);
				p.pop();
				q = q->right;
			}
		}
		return a;
	}
	vector<int> hou(TreeNode* root, vector<int> &a)
	{
		stack<TreeNode*> p;
		stack<TreeNode*> q;
		TreeNode* m = root;
		p.push(root);
		while (!p.empty())
		{
			m = p.top();   //��һ��ջ��Ԫ��ȡ����
			p.pop();     //ɾ��ջ��Ԫ��
			q.push(m);   //����ڶ���ջ��
			if (m->left != NULL)
			{
				p.push(m->left);
			}
			if (m->right != NULL)
			{
				p.push(m->right);
			}
		}
		int i = 0;
		while (!q.empty())
		{
			m = q.top();
			a.push_back(m->val);
			q.pop();
		}
		return a;
	}
};


struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr)
	{
	}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr)
	{
	}
	TreeNode(int x, TreeNode *left, TreeNode *right)
	    : val(x), left(left), right(right)
	{
	}
};

class Solution
{
public:
	int rangeSumBST(TreeNode *root, int low, int high)
	{
		int sum = 0;

		findSum(root, low, high, sum);
		return (sum);
	}
	void findSum(TreeNode *root, int low, int high, int &sum)
	{
		if (root->left != nullptr)
			findSum(root->left, low, high, sum);
		if (root != nullptr)
		{
			if (root->val >= low && root->val <= high)
				sum += root->val;
		}
		if (root->right != nullptr)
			findSum(root->right, low, high, sum);
	}
};

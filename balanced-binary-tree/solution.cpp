/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

typedef TreeNode * node;

int height(node x)
{
    if (x == nullptr)
        return (-1);
    else
    {
        return (std::max(height(x->left), height(x->right)) + 1);
    }    
}

void balanceFactor(node x, bool &res)
{
    int dh;
    
    if (x->left != nullptr)
        balanceFactor(x->left, res);
    if(x->right != nullptr)
        balanceFactor(x->right, res);
    if (x != nullptr)
    {
        dh = abs(height(x->left) - height(x->right));
        if (res == true && dh > 1)
            res = false;
    }
}

class Solution 
{
    public:
    bool isBalanced(TreeNode* root)
    {
        bool res;
        if (root == nullptr)
            return (true);
        res = true;
        balanceFactor(root, res);
        return (res);
    }
};

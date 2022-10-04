class Solution {
public:
    bool rec(TreeNode* root,int t,int sum)
    {
        if (root==NULL) return false;
        if (!root->left && !root->right)
        {
            sum+=root->val;
            if (sum==t) return true;
            return false;
        }
        sum+=root->val;
       bool l= rec(root->left,t,sum);
        if (l==true) return true;
        bool r= rec(root->right,t,sum);
        if (r==true) return true;
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return rec(root,targetSum,0);
    }
};

class Solution {
public:
    int min_lenth=INT_MAX;
    TreeNode* pre=nullptr;
    void transfer(TreeNode* root)
    {
        if(root==nullptr)return; 
        transfer(root->left);
        if(pre!=nullptr)
        {
            int lenth=root->val-pre->val;
            min_lenth=min(min_lenth,lenth);
        }
        pre=root;
        transfer(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
       transfer(root);
       return min_lenth;
    }
};
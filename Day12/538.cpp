class Solution {
public:
    int sum=0;
    void transfer(TreeNode* root)
    {
        if(root==nullptr)return;

        transfer(root->right);

        root->val=root->val+sum;
        sum=root->val;

        transfer(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        transfer(root);
        return root;
    }
};
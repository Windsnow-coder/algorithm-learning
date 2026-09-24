class Solution {
public:
    bool compare(TreeNode* left,TreeNode* right)
    {
        if(left==nullptr&&right==nullptr)return true;
        if(left!=nullptr&&right!=nullptr)
        {
            if(left->val==right->val)
            {
                return compare(left->left,right->right)&&compare(left->right,right->left);
            }
            else return false;
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)return true;
        return compare(root->left,root->right);
    }
};
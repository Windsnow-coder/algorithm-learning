class Solution {
public:

    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr)return nullptr;
        
        swap(root->right,root->left);

        invertTree(root->right);

        invertTree(root->left);

        return root;
        

    }
};
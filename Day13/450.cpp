class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr)return root;

        if(key==root->val)
        {
            if(root->right==nullptr&&root->left==nullptr)
            {
                return nullptr;
            }
            else if(root->right==nullptr)
            {
                return root->left;
            }
            else if(root->left==nullptr)
            {
                return root->right;
            }
            else
            {
                TreeNode* cur=root->right;
                while(cur->left!=nullptr)
                {
                    cur=cur->left;
                }
                root->val=cur->val;
                root->right=deleteNode(root->right,cur->val);
                return root;
            }
        }

        else if(key>root->val)
        {
            root->right=deleteNode(root->right,key);
            return root;
        }
        else
        {
            root->left=deleteNode(root->left,key);
            return root;
        }
    }
};
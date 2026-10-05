class Solution {
public:
    TreeNode* pre=nullptr;
    int count=0;
    int max_count=0;
    vector<int> result;
    void transfer(TreeNode* root)
    {
        if(root==nullptr)return;

        transfer(root->left);

        //记录当前节点
        if(pre==nullptr)count=1;
        else if(pre->val==root->val)count++;
        else count=1;

        if(count==max_count)
        {
            result.push_back(root->val);
        }
        else if(count>max_count)
        {
            result.clear();
            result.push_back(root->val);
            max_count=count;
        }

        pre=root;

        transfer(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        transfer(root);
        return result;
    }
};
class Solution {
public:
    TreeNode* pre=nullptr;
    /*void transfer(TreeNode* root,vector<int>& nums)
    {
        if(root==nullptr)return;
        transfer(root->left,nums);
        nums.push_back(root->val);
        transfer(root->right,nums);
    }*/
    bool isValidBST(TreeNode* root) {
        if(root==nullptr)return true;

        if(!isValidBST(root->left))return false;

        if(pre!=nullptr&&pre->val>=root->val)return false;

        else
        {
            pre=root;
        }

        return isValidBST(root->right);        
        
        /*vector<int>nums;
        transfer(root,nums);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>=nums[i])return false;
        }
        return true;*/
    }
};
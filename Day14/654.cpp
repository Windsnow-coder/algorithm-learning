class Solution {
public:
    TreeNode* Build(vector<int>& nums,int left,int right)
    {
        if(left>right)return nullptr;
        int max_index=left;
        for(int i=left;i<=right;i++)
        {
            if(nums[i]>nums[max_index])max_index=i;
        }

        TreeNode* root=new TreeNode(nums[max_index]);

        root->left=Build(nums,left,max_index-1);
        root->right=Build(nums,max_index+1,right);

        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        return Build(nums,left,right);
    }
};
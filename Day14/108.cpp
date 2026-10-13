class Solution {
public:
    TreeNode* Build(vector<int>& nums,int left,int right)
    {
        if(left>right)return nullptr;

        int mid=left+(right-left)/2;

        TreeNode* root=new TreeNode(nums[mid]);

        root->left=Build(nums,left,mid-1);
        root->right=Build(nums,mid+1,right);

        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        return Build(nums,left,right);
    }
};
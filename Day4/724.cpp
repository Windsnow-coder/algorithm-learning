class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int x:nums)
        {
            sum+=x;
        }
        if(sum-nums[0]==0)
        {
            return 0;
        }
        vector<int>pre(nums.size()+1);
        for(int i=0;i<nums.size();i++)
        {
            pre[i+1]=pre[i]+nums[i];
        }
        int index=1;
        for(;index<nums.size();index++)
        {
            if(pre[index]==sum-pre[index+1])
            {
                return index;
            }
        }
        return -1;
    }
};
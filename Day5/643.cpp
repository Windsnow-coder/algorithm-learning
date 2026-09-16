class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int total=0;
        for(int i=0;i<k;i++)
        {
            total+=nums[i];
        }
        int max_total=total;
        
        int right=k;

        for(;right<nums.size();right++)
        {
            total+=nums[right];
            total-=nums[right-k];
            max_total=max(max_total,total);
        }
        return 1.0*max_total/k;

        
    }
};
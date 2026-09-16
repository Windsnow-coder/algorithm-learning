class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int total = 0;
        int min_len = nums.size() + 1;

        for(int right = 0; right < nums.size(); right++)
        {
            total += nums[right];

            while(total >= target)
            {
                min_len = min(min_len, right - left + 1);

                total -= nums[left];
                left++;
            }
        }

        if(min_len == nums.size() + 1)
            return 0;

        return min_len;
        /*int total=nums[0];
        int left=0;
        int right=0;
        int min_len=nums.size();
        for(;right<nums.size();)
        {
            int len=0;
            if(total<target)
            {
                if(right==nums.size()-1)
                {
                    if(left==0)return 0;
                    else break;
                }
                right++;
                total+=nums[right];
                continue;
            }
            else
            {
                len=right-left+1;
                min_len=min(min_len,len);
                if(min_len==1)return 1;
                total-=nums[left];
                left++;
            }
        }
        return min_len;*/
    }
};
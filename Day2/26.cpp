class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow=0;
        int fast=0;
        for(;fast<nums.size();fast++)
        {
            if(nums[fast]!=nums[slow])
            {
                slow++;
                nums[slow]=nums[fast];
            }
        }
        return slow+1;//没要求对后面的元素，所以直接考虑用双指针（快慢指针）覆盖
        /*for(int i=0;i<nums.size()-1;)
        {
            if(nums[i]==nums[i+1])
            {
                nums.erase(nums.begin()+i+1);
            }
            else
            {
                i++;
            }
        }
        return nums.size();*/
    }
};
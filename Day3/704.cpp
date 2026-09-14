class Solution {
public:
    int search(vector<int>& nums, int target) {
        int r=nums.size()-1;
        int l=0;
        while(l<=r)//标准二分查找时，应取等号，防止漏掉一个元素
        {
            int mid=l+(r-l)/2;//防止整数溢出，不写(r+l)/2
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else if(nums[mid]>target)
            {
                r=mid-1;
            }
        }
        return -1;
    }
};
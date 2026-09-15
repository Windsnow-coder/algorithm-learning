class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>pre(nums.size()+1);
        int count=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            pre[i+1]=pre[i]+nums[i];
            count+=mp[pre[i+1]-k];
            mp[pre[i+1]]++;

        }
        return count;




        /*int count=0;
        vector<int>pre(nums.size()+1);
        for(int j=0;j<nums.size();j++)
        {
            for(int i=j;i<nums.size();i++)
            {
                pre[i+1]=pre[i]+nums[i];
                if(pre[i+1]==k)count++;
            }
            fill(pre.begin(),pre.end(),0);
        }
        return count;*/
    }
};
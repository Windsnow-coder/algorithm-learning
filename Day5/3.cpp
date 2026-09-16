class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int max_len=0;
        int left=0;
        for(int right=0;right<s.size();right++)
        {
            if(mp.count(s[right]))
            {
                left=max(left,mp[s[right]]+1);              
            }

            
            mp[s[right]]=right;
            
            int len=right-left+1;
            max_len=max(max_len,len);
        }
        return max_len;
    }
};
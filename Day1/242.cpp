class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;

        unordered_map<char,int> mp;

        for(char c:s)
        {
            mp[c]++;
        }//string本质上是数组

        /*for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }*/

        for(char c:t)
        {
            mp[c]--;
        }

        /*for(int i=0;i<t.size();i++)
        {
            if(mp.count(t[i]))mp[t[i]]--;
            else return false;
        }*/ 

        for(auto p:mp)
        {
            if(p.second!=0)return false;
        }
        /*for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]!=0)return false;

        }*/
        
        return true;
        
    }
};
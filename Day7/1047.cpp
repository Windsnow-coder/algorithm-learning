class Solution {
public:
    string removeDuplicates(string s) {
        string res;

        for(char c : s)
        {
            if(!res.empty() && res.back() == c)
            res.pop_back();

            else
            res.push_back(c);
        }

        return res;
        /*stack<char>sk;
        for(int i=0;i<s.size();i++)
        {
            if(!sk.empty())
            {
                if(sk.top()==s[i])
                {
                    sk.pop();
                    continue;
                }
                else
                sk.push(s[i]);
            }
            else
            sk.push(s[i]);
        }
        stack<char>resk;
        while(!sk.empty())
        {
            resk.push(sk.top());
            sk.pop();
        }
        string res;
        int count=resk.size();
        for(int i=0;i<count;i++)
        {
            res.insert(res.begin()+i,resk.top());
            resk.pop();
        }
        return res;*/
    }
};
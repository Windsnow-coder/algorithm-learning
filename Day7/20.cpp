class Solution {
public:
    bool isValid(string s) {
        stack<char>sk;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                sk.push(s[i]);
                continue;
            }
            if(s[i]==')')
            {
                if(sk.empty())return false;
                if(sk.top()=='(')
                {
                    sk.pop();
                    continue;
                }
                else return false;
            }
            if(s[i]=='}')
            {
                if(sk.empty())return false;
                if(sk.top()=='{')
                {
                    sk.pop();
                    continue;
                }
                else return false;
            }
            if(s[i]==']')
            {
                if(sk.empty())return false;
                if(sk.top()=='[')
                {
                    sk.pop();
                    continue;
                }
                else return false;
            }
        } 
        if(sk.empty())return true;
        else return false;  
    }
};
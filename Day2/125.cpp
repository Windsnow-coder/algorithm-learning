class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;

        while(l < r)
        {
            // 左边不是字母或数字
            if(!((s[l] >= 'a' && s[l] <= 'z') ||
                 (s[l] >= 'A' && s[l] <= 'Z') ||
                 (s[l] >= '0' && s[l] <= '9')))
            {
                l++;
                continue;
            }

            // 右边不是字母或数字
            if(!((s[r] >= 'a' && s[r] <= 'z') ||
                 (s[r] >= 'A' && s[r] <= 'Z') ||
                 (s[r] >= '0' && s[r] <= '9')))
            {
                r--;
                continue;
            }

            char left = s[l];
            char right = s[r];

            if(left >= 'A' && left <= 'Z')
                left += 32;

            if(right >= 'A' && right <= 'Z')
                right += 32;

            if(left != right)
                return false;

            l++;
            r--;
        }
        return true;
    }
};
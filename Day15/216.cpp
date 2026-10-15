class Solution {
public:
    vector<int> path;
    vector<vector<int>> result;
    void backtracking(int k,int n,int startindex)
    {
        if(path.size()==k)//终止条件
        {
            int sum=0;
            for(int x:path)
            {
                sum+=x;
            }
            if(sum==n)
            {
                result.push_back(path);
            }
            return;
        }

        for(int i=startindex;i<=9;i++)
        {
            path.push_back(i);

            backtracking(k,n,i+1);

            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        backtracking(k,n,1);
        return result;
    }
};
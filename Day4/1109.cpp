class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>diff(n);//对很多个区间进行修改要想到差分
        for(int i=0;i<bookings.size();i++)
        {
            diff[bookings[i][0]-1]+=bookings[i][2];
            if(bookings[i][1]<n)
            {
                diff[bookings[i][1]]-=bookings[i][2];
            }
        }
        for(int i=1;i<n;i++)
        {
            diff[i]+=diff[i-1];
        }
        return diff;
        /*vector<int>answer(n);
        for(int i=0;i<bookings.size();i++)
        {
            for(int j=bookings[i][0];j<=bookings[i][1];j++)
            {
                answer[j-1]+=bookings[i][2];
            }
        }
        return answer;*/
    }
};
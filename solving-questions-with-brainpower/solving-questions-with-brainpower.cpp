class Solution {
public:
    long fun(int i,vector<vector<int>>& que,vector<long>& dp){
        if(i>=que.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        long a=que[i][0]+fun(i+que[i][1]+1,que,dp);
        long b=fun(i+1,que,dp);
        return dp[i]=max(a,b);
    }
    long long mostPoints(vector<vector<int>>& que) {
        int n=que.size();
        vector<long> dp(n,-1);
        return fun(0,que,dp);
    }
};
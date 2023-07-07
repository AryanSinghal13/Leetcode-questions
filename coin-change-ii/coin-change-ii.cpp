class Solution {
public:
    int fun(vector<int>& coins,int amt,int i,vector<vector<int>>&dp)
    {
        if(i==0)
        {
            if(amt%coins[i]==0) return 1;
            else return 0;
        }
        if(dp[i][amt]!=-1) return dp[i][amt];
        int a=fun(coins,amt,i-1,dp);
        int b=0;
        if(amt>=coins[i]) b=fun(coins,amt-coins[i],i,dp);
        return dp[i][amt]=a+b;
    }
    int change(int amt, vector<int>& coins) {
        vector<vector<int>>dp(coins.size(),vector<int>(amt+1,-1));
        return fun(coins,amt,coins.size()-1,dp);
    }
};
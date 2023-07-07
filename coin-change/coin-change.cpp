class Solution {
public:
    int fun(vector<int>&coins, int amt,vector<int>&dp)
    {
        if(amt==0) return 0;
        int ans=INT_MAX;
        if(amt<0) return ans;
        if(dp[amt]!=-1) return dp[amt];
        int mini=INT_MAX;
	    for(int i=0;i<coins.size();i++)
	    {
	        int ans=fun(coins,amt-coins[i],dp);
	        if(ans!=INT_MAX)
	            mini=min(mini,ans+1);
	    }
	    dp[amt]=mini;
	    return dp[amt];
    }
    int coinChange(vector<int>& coins, int amt) {
        vector<int> dp(amt+1,-1);
        int ans=fun(coins,amt,dp);
        if(ans==INT_MAX) return -1;
        return ans; 
    }
};
class Solution {
public:
    int fun(int i,int j,vector<int>&cuts,vector<vector<int>>&dp)
    {
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int mi=INT_MAX;
        for(int k=i;k<=j;k++)
        {
            int cost=cuts[j+1]-cuts[i-1]+fun(i,k-1,cuts,dp)+fun(k+1,j,cuts,dp);
            mi=min(mi,cost);
        }
        return dp[i][j]=mi;
    }
    int minCost(int n, vector<int>& cuts) {
        int m=cuts.size();
        cuts.insert(cuts.begin(),0);
        cuts.push_back(n);
        sort(cuts.begin(),cuts.end());
        vector<vector<int>>dp(m+1,vector<int>(m+1,-1));
        return fun(1,m,cuts,dp);
    }
};
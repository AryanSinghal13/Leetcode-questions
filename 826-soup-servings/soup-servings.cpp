class Solution {
public:
    vector<vector<int>> s={{100,0},{75,25},{50,50},{25,75}};
    double fun(int a,int b,vector<vector<double>>&dp)
    {
        if(a<=0&&b<=0) return 0.5;
        if(a<=0&&b>0) return 1.0;
        if(a>0&&b<=0) return 0.0;
        if(dp[a][b]!=-1) return dp[a][b];
        double ans=0.0;
        for(auto i:s)
        {
            int x=a-i[0];
            int y=b-i[1];
            ans+=fun(x,y,dp);
        }
        return dp[a][b]=ans/4;
    }
    double soupServings(int n) {
        if (n>4800) return 1;
        vector<vector<double>>dp(n+1,vector<double>(n+1,-1.0));
        return fun(n,n,dp);
    }
};
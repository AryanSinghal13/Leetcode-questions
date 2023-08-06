int mod=1e9+7;
class Solution {
public:
    long long fun(int n,int g,int k,vector<vector<int>>&dp)
    {
        if(n==0&&g==0) return 1;
        if(n==0||g==0) return 0;
        if(dp[n][g]!=-1) return dp[n][g];
        long long x=(fun(n-1,g-1,k,dp)*n) % mod;
        long long y=(fun(n,g-1,k,dp)*max(n-k,0)) % mod;
        return dp[n][g]=(x+y)%mod;
    }
    int numMusicPlaylists(int n, int g, int k) {
        vector<vector<int>>dp(n+1,vector<int>(g+1,-1));
        return fun(n,g,k,dp);
    }
};
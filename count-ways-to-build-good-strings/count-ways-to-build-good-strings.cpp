class Solution {
public:
    int M=1e9+7;
    int fun(int low, int high, int zero, int one, vector<int>& dp,int l){
        if(l>high) return 0;
        if(dp[l]!=-1) return dp[l];
        int ans=0;
        if(l>=low && l<=high)ans=1;
        ans=(ans%M+fun(low,high,zero,one,dp,l+zero)%M)%M;//take zero
        ans=(ans%M+fun(low,high,zero,one,dp,l+one)%M)%M;//take one
        return dp[l]=ans%M;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high+1,-1);
        return fun(low,high,zero,one,dp,0);
    }
};
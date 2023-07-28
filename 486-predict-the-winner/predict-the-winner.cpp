class Solution {
public:
    int fun(vector<int>& nums,int l,int r,vector<vector<int>>&dp)
    {
        if(dp[l][r]!=-1) return dp[l][r];
        if(l==r) return nums[l];
        int x=nums[l]-fun(nums,l+1,r,dp);
        int y=nums[r]-fun(nums,l,r-1,dp);
        dp[l][r]=max(x,y);
        return dp[l][r];
    }
    bool PredictTheWinner(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n, vector<int>(n, -1));
        return fun(nums,0,n-1,dp)>=0;
    }
};
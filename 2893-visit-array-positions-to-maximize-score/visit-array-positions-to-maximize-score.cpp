class Solution {
public:
    long dp[100001][2];
    long fun(int ind,int n,vector<int>& nums, int x,bool ch)
    {
        if(ind==n) return 0;
        if(dp[ind][ch]!=-1) return dp[ind][ch];
        long maxi=0;
        bool c= ((nums[ind]%2)==0) ? false : true;
        if(c == ch){
            maxi = max(maxi,nums[ind] + fun(ind+1,n,nums,x,c));
        }
        else{
            maxi = max(maxi,(nums[ind] - x) + fun(ind+1,n,nums,x,c));
            maxi = max(maxi,fun(ind+1,n,nums,x,ch));
        }
        return dp[ind][ch] = maxi;
    }
    long long maxScore(vector<int>& nums, int x) {
        int n=nums.size();
        bool ch=false;
        if(!(nums[0]%2==0)) ch=true;
        memset(dp,-1,sizeof(dp));
        return fun(1,n,nums,x,ch)+nums[0];
    }
};
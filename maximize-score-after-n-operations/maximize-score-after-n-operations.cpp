class Solution {
public:
    int dp[1<<14];
    int Dfn(int msk, int n, vector<int> &arr){
        if(msk==((1<<n)-1)) return 0;
        else if(dp[msk]!=-1) return dp[msk];

        int cnt = __builtin_popcount(msk)/2 + 1;
        int res = -1e9;
        for(int i=0;i<n;i++){
            if(msk&(1<<i)) continue;
            for(int j=i+1;j<n;j++){
                if(msk&(1<<j)) continue;
                res = max(res, Dfn(msk|(1<<i)|(1<<j), n, arr) + __gcd(arr[i], arr[j])*cnt);
            }
        }
        return dp[msk]=res;
    }

    int maxScore(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return Dfn(0, nums.size(), nums);
    }
};
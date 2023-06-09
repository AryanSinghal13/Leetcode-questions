class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if(k==0||n>=k-1+maxPts) return 1.0;
        double ans=0.0;
        vector<double>dp(n+1);
        dp[0]=1.0;
        double wsum=dp[0];
        for(int i=1;i<=n;i++){
            dp[i]=wsum/maxPts;
            if(i<k) wsum+=dp[i];
            else ans+=dp[i];
            if(i-maxPts>=0) wsum-=dp[i-maxPts];
        }
        return ans;
    }
};
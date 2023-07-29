class Solution {
public:
    int fun(vector<int>& nums1, vector<int>& nums2,int ind,int swapp,vector<vector<int>>&dp)
    {
        if(ind==nums1.size()) return 0;
        if(dp[ind][swapp]!=-1) return dp[ind][swapp];
        int ans=1e6;
        int p1=nums1[ind-1];
        int p2=nums2[ind-1];
        if(swapp) swap(p1,p2);
        if(nums1[ind]>p1&&nums2[ind]>p2) ans=fun(nums1,nums2,ind+1,0,dp);
        if(nums1[ind]>p2&&nums2[ind]>p1) ans=min(ans,1+fun(nums1,nums2,ind+1,1,dp));
        return dp[ind][swapp]=ans;
    }
    int minSwap(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.begin(),-1);
        nums2.insert(nums2.begin(),-1);
        int n=nums1.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return fun(nums1,nums2,1,0,dp);
    }
};
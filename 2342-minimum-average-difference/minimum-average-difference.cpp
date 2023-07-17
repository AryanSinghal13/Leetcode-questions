class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        int ans=0,d=INT_MAX;
        vector<long long> pre(n,0);
        long long s=nums[0];
        pre[0]=nums[0];
        for(int i=1;i<n;i++) s+=nums[i],pre[i]=pre[i-1]+nums[i];
        vector<int> r;
        for(int i=0;i<nums.size();i++)
        {    
            long long firstSum=pre[i];
            long long lastSum=s-pre[i];
            long long diff=0;
            if((n-i-1)!= 0) diff = abs(firstSum/(i+1) - lastSum/(n-i-1));
            else diff = firstSum/(i+1) - 0;
            if(diff < d)
            {
                d = diff;
                ans = i;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int c=0,ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            while(nums[i]-nums[c]>2*k) c++;
            ans=max(ans,i-c+1);
        }
        return ans;
    }
};
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;
        int i=0,j=n-1;
        while(i<n/2)
        {
            ans+=abs(nums[i]-nums[j]);
            i++,j--;
        }
        // if(n%2==0) return ans;
        // return ans+nums[n/2];
        return ans;
    }
};
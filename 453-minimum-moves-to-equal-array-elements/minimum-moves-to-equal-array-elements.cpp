class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int mini=*min_element(nums.begin(),nums.end());
        int r=0;
        for(int i=0;i<n;i++) r+=nums[i]-mini;
        return r;
    }
};
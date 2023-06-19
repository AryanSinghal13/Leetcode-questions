class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=INT_MAX;
        for(int i=0;i<=nums.size()-2;i++)
        {
            int mini=nums[i+1]-nums[i];
            a=min(mini,a);
        }
        return a;
    }
};
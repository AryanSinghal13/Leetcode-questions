class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>a(n,0);
        int o=1,e=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2!=0)
            {
                a[o]=nums[i];
                o+=2;
            }
            else
            {
                a[e]=nums[i];
                e+=2;
            }
        }
        return a;
    }
};
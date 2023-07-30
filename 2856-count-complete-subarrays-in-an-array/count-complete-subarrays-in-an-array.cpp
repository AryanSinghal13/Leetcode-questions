class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>f;
        for(int i=0;i<n;i++) f.insert(nums[i]);
        int d=f.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            unordered_set<int> t;
            for(int j = i; j < n; j++)
            {
                t.insert(nums[j]);
                if(t.size()==d) ans++;
            }
        }
        return ans;
    }
};
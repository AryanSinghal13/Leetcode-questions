class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == n)
            return nums;
        sort(nums.begin(), nums.end());
        vector<pair<int, int>> vp;
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] != nums[i - 1])
                vp.push_back({cnt, nums[i - 1]}),
                    cnt = 1;
            else
                cnt++;
        }
        vp.push_back({cnt, nums[n - 1]});
        sort(vp.begin(), vp.end());
        vector<int> ans;
        int i = vp.size() - 1;
        while (k--)
            ans.push_back(vp[i].second),
                i--;

        return ans;
    }
};
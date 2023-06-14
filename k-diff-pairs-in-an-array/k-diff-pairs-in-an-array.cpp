class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        int ans=0;
        for(auto i:m)
        {
            if(k==0) 
            {
                if(i.second>1) ans++;
            }
            else if(m.find(i.first+k)!=m.end()) ans++;
        }
        return ans;
    }
};
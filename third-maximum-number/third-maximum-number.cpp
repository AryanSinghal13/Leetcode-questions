class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        set<int> s;
        for(int i=0;i<nums.size();i++) s.insert(nums[i]);
        if(s.size()>=3)
        {
            int th=s.size()-3;
            auto thmax=next(s.begin(),th);
            return *thmax;
        }
        return *--s.end();
    }
};
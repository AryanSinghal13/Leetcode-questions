class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        // set<int> s;
        // for(int i=0;i<nums.size();i++)
        // {
        //     s.insert(nums[i]);
        // }
        // int c=0;
        // for(int i=0;i<s.size();i++)
        // {
        //     c++;
        // }
        // if(s.count(0)) c--;
        // return c;
        set<int>s;
        for(auto x:nums)
            if(x!=0) s.insert(x);
        return s.size();
    }
};
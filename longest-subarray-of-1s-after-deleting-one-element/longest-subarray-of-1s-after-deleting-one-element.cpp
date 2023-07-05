class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mxi=0,cnt=0,t=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) t++;
            while(t>1)
            {
                if(nums[cnt]==0) t--;
                cnt++;
            }
            mxi=max(mxi,i-cnt+1-t);
        }
        if(mxi==nums.size()) return mxi-1;
        return mxi;
    }
};
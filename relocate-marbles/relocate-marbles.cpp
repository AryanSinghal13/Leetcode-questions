class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        int n=nums.size();
        vector<int> r;
        map<int,int>m;
        for(auto i:nums) m[i]=1;
        for(int i=0;i<moveFrom.size();i++)
        {
            if(m[moveFrom[i]]&&moveFrom[i]!=moveTo[i]) m[moveTo[i]]=1,m[moveFrom[i]]=0;
        }
        for(auto i:m)
        {
            if(i.second) r.push_back(i.first);
        }
        return r;
    }
};
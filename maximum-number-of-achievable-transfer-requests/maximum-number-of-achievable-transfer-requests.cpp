class Solution {
public:
    int ans=0;
    void fun(int i,vector<vector<int>>& req,int l,vector<int>&temp)
    {
        if(i==req.size())
        {
            for(auto y:temp) if(y!=0) return;
            ans=max(ans,l);
            return;
        }
        fun(i+1,req,l,temp);
        temp[req[i][0]]--;
        temp[req[i][1]]++;
        fun(i+1,req,l+1,temp);
        temp[req[i][0]]++;
        temp[req[i][1]]--;
    }
    int maximumRequests(int n, vector<vector<int>>& req) {
        vector<int> temp(n,0);
        fun(0,req,0,temp);
        return ans;
    }
};
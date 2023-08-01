class Solution {
public:
    void fun(int n,int k,int ind,vector<int> &cur,vector<vector<int>> &ans)
    {
        if(cur.size()==k){
            ans.push_back(cur);
            return;
        }
        for(int i=ind;i<=n;i++)
        {
            cur.push_back(i);
            fun(n,k,i+1,cur,ans);
            cur.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> cur;
        vector<vector<int>> ans;
        fun(n,k,1,cur,ans);
        return ans;
    }
};
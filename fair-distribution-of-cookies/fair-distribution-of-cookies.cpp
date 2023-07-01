class Solution {
public:
    int ans=INT_MAX;
    void fun(vector<int>&c,int k,vector<int>&bag,int i)
    {
        if(i==c.size()){
            int mini=INT_MIN;
            for(int i=0;i<k;i++) mini=max(mini,bag[i]);   
            ans=min(mini,ans);
            return ;
        }
        for(int j=0;j<k;j++)
        {
            bag[j]+=c[i];
            fun(c,k,bag,i+1);
            bag[j]-=c[i];
        }
    }
    int distributeCookies(vector<int>& c, int k) {
        vector<int> bag(k,0);
        fun(c,k,bag,0);
        return ans;
    }
};
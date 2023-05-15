class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long ans;
        int n=grid[0].size();
        vector<long long> pre(n,0),suf(n,0);
        for(int i=0;i<n;i++){
            if(i==0) pre[i]=grid[0][i];
            else pre[i]=pre[i-1]+grid[0][i];
        }
        for(int i=n-1;i>=0;i--){
            if(i==n-1) suf[i]=grid[1][i];
            else suf[i]=suf[i+1]+grid[1][i];
        }
        for(int i=0;i<n;i++){
            if(i==0) ans=pre[n-1]-pre[0];
            ans=min(max(pre[n-1]-pre[i],suf[0]-suf[i]),ans);
        }
        return ans;
    }
};
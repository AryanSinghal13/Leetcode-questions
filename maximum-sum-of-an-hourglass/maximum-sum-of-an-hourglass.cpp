class Solution {
public:
    int maxSum(vector<vector<int>>& g) {
        int n=g.size();
        int m=g[0].size();
        int s=0,mx=0;
        for(int i=0;i<n-2;i++){
            for(int j=0;j<m-2;j++){
                s=g[i][j]+g[i][j+1]+g[i][j+2]+g[i+1][j+1]+g[i+2][j]+g[i+2][j+1]+g[i+2][j+2]; 
                mx=max(mx,s);
            }
        }
        return mx;
    }
};
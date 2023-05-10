class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> sum(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+mat[i-1][j-1];
            }
        }
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x1 = max(0, i-k);
                int y1 = max(0, j-k);
                int x2 = min(n, i+k+1);
                int y2 = min(m, j+k+1);
                ans[i][j]=sum[x2][y2]-sum[x1][y2]-sum[x2][y1]+sum[x1][y1];
            }
        }
        return ans;
    }
};
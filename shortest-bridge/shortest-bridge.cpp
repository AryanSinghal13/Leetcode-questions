class Solution {
public:
    vector<pair<int,int>> a,b;
    void dfs(int i,int j,int n,vector<vector<int>>& grid){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]!=1) return;
        grid[i][j]=n;

        if(n==2) a.push_back({i,j});
        else b.push_back({i,j});

        dfs(i+1,j,n,grid);
        dfs(i-1,j,n,grid);
        dfs(i,j+1,n,grid);
        dfs(i,j-1,n,grid);
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int c=2;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)
                {
                    dfs(i,j,c,grid);
                    c++;
                }
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                ans=min(abs(a[i].first-b[j].first)+abs(a[i].second-b[j].second)-1,ans);
            }
        }
        return ans;
    }
};
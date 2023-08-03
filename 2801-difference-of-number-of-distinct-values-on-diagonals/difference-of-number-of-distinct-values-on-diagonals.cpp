class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> r(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                set<int> tl,br;
                for(int r = i-1, c = j-1; r >= 0&&c>= 0;r--,c--){
                    tl.insert(grid[r][c]);
                }
                for(int r = i+1, c = j+1; r<m&& c<n; r++,c++){
                    br.insert(grid[r][c]);
                }
                int a=br.size(),b=tl.size();
                r[i][j]=abs(a-b);
            }
        }
        return r;
    }
};
class Solution {
public:
    vector<vector<int>> vis;
    int totalNumberOfWays = 0;
    void dfs(int row, int col, int stepsRemaining, vector<vector<int>> &grid){
        if(row < 0 || col < 0 || row == grid.size() || col == grid[0].size()){
            return;
        }
        if(grid[row][col] == -1 || vis[row][col] == 1){
            return;
        }
        if(grid[row][col] == 2){
            if(stepsRemaining == 0){
                totalNumberOfWays++;
            }
            return;
        }
        vis[row][col] = 1;
        dfs(row - 1, col, stepsRemaining - 1, grid);
        dfs(row + 1, col, stepsRemaining - 1, grid);
        dfs(row, col - 1, stepsRemaining - 1, grid);
        dfs(row, col + 1, stepsRemaining - 1, grid);
        vis[row][col] = 0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int x = 0;
        int y = 0;
        int totalSteps = 0;
        vis.resize(m, vector<int>(n, 0));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == -1){
                    continue;
                }
                if(grid[i][j] == 1){
                    x = i;
                    y = j;
                }
                totalSteps++;
            }
        }
        dfs(x, y, totalSteps - 1, grid);
        return totalNumberOfWays;        
    }
};
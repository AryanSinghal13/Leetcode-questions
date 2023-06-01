class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        if(grid[0][0]==1||grid[m-1][n-1]==1) return -1;
        std::queue<std::vector<int>> queue;
        queue.push({0, 0, 1});
        grid[0][0] = 1;
        vector<vector<int>> dir= {
            {-1, -1}, {-1, 0}, {-1, 1},
            {0, -1},           {0, 1},
            {1, -1},  {1, 0},  {1, 1}
        };
        while (!queue.empty()) {
            auto current = queue.front();
            queue.pop();
            int row = current[0];
            int col = current[1];
            int distance = current[2];
            if (row == n - 1 && col == n - 1) {
                return distance;
            }
            for (const auto& dir : dir) {
                int newRow = row + dir[0];
                int newCol = col + dir[1];
                if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < n && grid[newRow][newCol] == 0) {
                    grid[newRow][newCol] = 1;
                    queue.push({newRow, newCol, distance + 1});
                }
            }
        }
        return -1;
    }
};
class Solution {
public:
    int dx[4]={0,0,-1,1};
    int dy[4]={1,-1,0,0};
    bool bfs(vector<vector<int>>& cells,int row,int col,int mid)
    {
        vector<vector<bool>>g(row,vector<bool>(col,0));
        for(int i=0;i<mid;i++) g[cells[i][0]-1][cells[i][1]-1]=1;
        queue<pair<int,int>>q;
        for(int c=0;c<col;c++)
        {
            if(g[0][c]==0)
            {
                q.push({0,c});
                g[0][c]=1;
            }
        }
        while(!q.empty())
        {
            auto [r,c]=q.front();
            q.pop();
            if(r==row-1) return 1;
            for(int i=0;i<4;i++)
            {
                int nr=r+dx[i];
                int nc=c+dy[i];
                if(nr<0||nr==row||nc<0||nc==col||g[nr][nc]==1) continue;
                g[nr][nc]=1;
                q.push({nr,nc});
            }
        }
        return 0;
    }
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int l=1,r=cells.size(),ans=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(bfs(cells,row,col,mid)) ans=mid,l=mid+1;
            else r=mid-1;
        }
        return ans;
    }
};
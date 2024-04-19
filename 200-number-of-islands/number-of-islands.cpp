class Solution {
public:
    bool is_valid(int i,int j,int r,int c)
    {
        if(i<r and i>=0 and j<c and j>=0)
            return true;
        return false;
    }
    void dfs(vector<vector<char>>& grid,int i,int j)
    {
        int r=grid.size(),c=grid[0].size();
        if( !is_valid(i,j,r,c) or grid[i][j]=='0' ) return ;
        grid[i][j] = '0';
        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
        dfs(grid,i + 1,j);
        dfs(grid,i,j+1);
        // int dx[] = {-1,0,1,0};
        // int dy[] = {0,-1,0,1};
        // for(int move = 0;move<4;move++)
        // {
        //     int x = i+dx[move];
        //     int y = j+dy[move];
        //     if(is_valid(x,y,r,c))
        //         dfs(grid,x,y);

        // }

    }
    int numIslands(vector<vector<char>>& grid) {
        
        int r=grid.size(),c=grid[0].size();
        int island_count = 0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j);
                    island_count++;
                }
            }
        }
        return island_count;
    }
};
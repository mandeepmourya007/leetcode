class Solution {
public:
    bool is_valid(int i,int j ,int r, int c)
    {
        if(i<r and j<c and i>=0 and j>=0)
            return true;
        return false;
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int r = grid.size(),c=grid[0].size(),ans=0;
        for(int i=0; i<r;i++)
        {

            for(int j=0;j<c;j++)
            {   
                int cl = 0;
                if(grid[i][j])
                {
                    if(i-1<0) cl++;
                    if(i+1>=r) cl++;
                    if(j-1<0) cl++;
                    if(j+1>=c) cl++;
                    if(is_valid(i-1,j,r,c) and grid[i-1][j]==0)cl++;
                    if(is_valid(i+1,j,r,c) and grid[i+1][j]==0)cl++;
                    if(is_valid(i,j-1,r,c) and grid[i][j-1]==0)cl++;
                    if(is_valid(i,j+1,r,c) and grid[i][j+1]==0)cl++;
                    ans += cl;
                    cl=0;
                }
            }
        }
        return ans;
    }
};
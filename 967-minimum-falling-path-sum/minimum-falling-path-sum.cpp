class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int r = matrix.size(),c=matrix[0].size();
        for(int i=1;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                int cur = matrix[i][j];
                int a1,a2,a3;
                a1=a2=a3=1e5;
                if(j-1>=0)
                    a1 = matrix[i-1][j-1];
                a2 = matrix[i-1][j];
                if(j+1<c)
                 a3 = matrix[i-1][j+1];
                 matrix[i][j] = cur +min(a1,min(a2,a3));
                    
            }
        }
        int ans = 1e5;
        for(int i=0;i<c;i++)
            ans = min(ans,matrix[r-1][i]);
        return ans;
    }
};
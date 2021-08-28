class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& m) {
     
        if(m.size()==0)
                return {};
        int row=m.size(),col=m[0].size();
        int i=0,j=0;
        vector<int>ans;
        long  tt=row*col;
        // long tt=9;
        while(tt--)
        {
            while(i>=0 && j<col)
            {
                ans.push_back(m[i--][j++]);
                     
            }
           i++;
            if(j>=col)
            {
                j--;
                i++;
            }
             while(j>=0 && i<row)
            {
                ans.push_back(m[i++][j--]);
                
                 
            }
          j++;
        if(i>=row)
        {
            i--;
            j++;
        }
    
            
            
        }
        
        
        return ans;
    }
};

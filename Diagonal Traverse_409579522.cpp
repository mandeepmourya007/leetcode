class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& m) {
     
        if(m.size()==0)    return {};
        
        int r=m.size();
        int c=m[0].size();
        int s=(r)*(c);
        vector<int> rs;
        int R=0,C=0;
        for(int i=0;i<s;i++)
        {
            rs.push_back(m[R][C]);
            if((R+C)%2==0)
            {

                if(R-1>=0 && C+1<c)
                        {
                    R--;C++;
                        }
                else if(R+1<r && C+1>c-1)
                        R++;
                else if( R-1<0 && C+1<c)
                    C++;
        
            }
            else
            {
                if(R+1<r  && C-1>=0)
                { C--;  R++;}
                else if(R+1>r-1 && C+1<c)
                    C++;
                else if(R+1<r && C-1<0)
                        R++;
            }
               
        }
        
        return rs;
        
    }
};


  

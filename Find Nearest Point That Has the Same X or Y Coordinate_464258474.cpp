class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
    
        int mini=INT_MAX;
        int mi=-1;
        int i=0;
        for( auto yx:  points)
        {
            if( x==yx[0]  || y==yx[1])
            {
    int smalli=abs(x-yx[0]) + abs(y-yx[1]); 
                if(smalli<mini)
                {
                    mini=smalli;
                    mi=i;
                }
            }
        i++;
        }
        
        return mi;
    }
    
};

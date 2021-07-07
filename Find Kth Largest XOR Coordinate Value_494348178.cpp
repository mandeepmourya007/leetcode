class Solution {
public:
    int kthLargestValue(vector<vector<int>>& mt, int k) {
        
        
        int n=mt.size(),m=mt[0].size();
        vector<int>v;
        v.push_back(mt[0][0]);
        for(int i=1;i<m;i++)
                {mt[0][i]^=mt[0][i-1]; v.push_back(mt[0][i]);}
        
        
        for(int i=1;i<n;i++)
       {         mt[i][0]^=mt[i-1][0];
                v.push_back(mt[i][0]);
       } 
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                // cout<<i<<j<<" "<<mt[i][j-1];

                mt[i][j]=mt[i][j] ^ mt[i-1][j] ^ mt[i][j-1]^mt[i-1][j-1];
                    v.push_back(mt[i][j]);     
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        // for( int x: v)
        //     cout<<x;
        // cout<<endl;
        return v[k-1];
        
    }
};


// 5 2 
// 1 6
    
// 5   5*2    1*5    5*2*1*6
// 5   7       4       
//     101    001       111
//     010    101       110
//            010
//            110
            

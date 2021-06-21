class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
      
        int c=0;
        // vector<int> 
           unordered_map<int,int> cd,ab;
        for(int k=0;k<C.size();k++)
                {
                    for(int l=0;l<D.size();l++ )
                    {
                      
            cd[C[k]+D[l]]++;
                    }
                    
        }

        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<B.size();j++)
            {
                        
                if(cd.find(-A[i]-B[j])!=cd.end())
                    c+=cd[-A[i]-B[j]];
            }
        }
        
    
    return c;
    }
};

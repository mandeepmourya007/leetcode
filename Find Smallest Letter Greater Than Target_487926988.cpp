class Solution {
public:
    char nextGreatestLetter(vector<char>& lt, char t) {
      
        int n=lt.size();
        int l=0,r=n-1;
        
        while(l<=r)
        {
            int m=(l+r)/2;
            
            if(lt[m]<=t) l=m+1;
                
            else r=m-1;
        }
        
        
        return lt[(l +n)%n ];
    }
};

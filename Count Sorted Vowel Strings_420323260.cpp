class Solution {
public:
    int countVowelStrings(int n) {
        int r=n;
        
         n=n+4;
        double ans=1;
        for(int i=0;i<r;i++)
        {
            
            ans=ans*(n-i);
           
            ans/=(i+1);
        }
      return ans;  
            
    }
};

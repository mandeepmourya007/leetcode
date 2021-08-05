class Solution {
public:
    
void   solve(int n,int &ans,int i)
    {
     if(n==0)
     {
         ans++;
         return ;
     }
    for(;i<5;i++)
    {
        solve(n-1,ans,i);
    }   
        
        
    }
    int countVowelStrings(int n) {
       
        int ans=0;
        solve(n,ans,0);
        return ans;
        
            
    }
};

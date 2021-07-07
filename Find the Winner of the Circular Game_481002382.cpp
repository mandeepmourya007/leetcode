class Solution {
public:
    
    int js(int n,int k)
    {
          if(n==1) return 1;
        return (findTheWinner(n-1,k)+k-1)%n +1;
        
    }
    int findTheWinner(int n, int k) {
      int ans=0;
      for(int i=1;i<=n;i++)
      {
          ans=(ans+k-1)%i+1;
      }
        
      return ans;
        
    }
};

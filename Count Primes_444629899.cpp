class Solution {
public:
    bool isprime(int n)
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
                return 0;
        }
        return 1;
    }
    int countPrimes(int n) {
        
        if(n<=1)
            return 0;
        
        int ans=0;
        for(int i=2;i<n;i++)
        {
            ans+=isprime(i);
        }
        
        return ans;
        
    }
};

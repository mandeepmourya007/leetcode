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
     int isP[n];
        for(int i=0;i<n;i++)
            isP[i]=1;
        isP[1]=0;
        isP[0]=0;
        
        for(int i=2;i<n;i++)
        {
         
            if(isP[i])
            {
                int j=i+i;
                while(j<n)
                {
                    isP[j]=0;
                    j+=i;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(isP[i])
                ans++;
        }
        
        return ans;
        
    }
};


// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
// 0 1 1 0 1    0 0                    0

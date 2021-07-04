class Solution {
public:
    bool checkPowersOfThree(int n) {
       int t=1;
        int maxi=INT_MAX;
        while(n>0)
            {
            t=1;
        while(t*3<=n && t*3<maxi)
        {
            t*=3;
            
        }
            maxi=t;
            // cout<<t<<" ";
            n-=t;
        if(t==1)
            break;
        }
        
       if(n==0)
           return 1;
        return 0;
        
    }
};

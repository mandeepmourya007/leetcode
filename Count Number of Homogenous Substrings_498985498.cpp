class Solution {
public:
    int countHomogenous(string s) {
        long long  ans=0;
        int m=1e9+7;
        int l=0,r=0;
        int n=s.size();
        while(r<n+1)
        {
           // abbcccaa
            
            if(r<n and s[r]==s[l] )
                r++;
            else 
            {
               long long  int ss=r-l;
               ans=ans%m +((ss)*(ss+1)/2)%m ;
                l=r;
                if(r==n)
                    break;
            }
            
        }
        // if(s[l]==s[r-1])
        // {
        //      long long ss=r-l;
        //         ans=ans%m +((ss)%m*((ss+1)/2)%m)%m ;
        // }
        // else ans++;
        return ans;
        
    }
};

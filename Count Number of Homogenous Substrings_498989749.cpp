class Solution {
public:
    int countHomogenous(string s) {
        long long  ans=0;
        int m=1e9+7;
        int l=0,r=0;
        int n=s.size();
        int p=s[0],c=0;
        for(char x:s)
        {
            if(x==p)
                c++;
            else 
            {   c=1;
                p=x;
                }
            ans=(ans+c)%m;
        }
        
        return ans;
        
    }
};

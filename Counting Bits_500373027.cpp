class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        
        for(int i=1;i<=n;i++)
            ans[i]=ans[i&(i-1)] +1;
        // for(int i=0;i<=n;i++)
        // {
        //     int c=0,k=i;
        //     while(k)
        //     {
        //         c++;
        //         k=k&(k-1);
        //     }
        //     ans.push_back(c);
        // }
        return ans;
    }
};

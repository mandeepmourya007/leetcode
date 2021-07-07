class Solution {
public:
    
    bool check(int fs[],int fp[])
    {
        int i=0;
        while(i<256)
        {
        //     cout<<fs[i]<<" "<<fp[i]<<" "<<i;
        // cout<<endl;
        
            if(fs[i]!=fp[i])
                return 0;
             i++;
        }
        // cout<<endl;
        return 1;
    }
    
    vector<int> findAnagrams(string s, string p) {
     
        int n=s.size();
        int m=p.size();
        if(n==0 || m==0)
            return {};
        if(n<m)
            return {};
        int frp[256],frs[256];
        for(int i=0;i<256;i++)
        { 
            frs[i]=frp[i]=0;
        }
        
        int i=0;
        for(;i<m;i++)
        { 
            frs[s[i]-'a']++;
            frp[p[i]-'a']++;
        }
        
        vector<int> ans;

        for(;i<n;i++ )
        {

 
            if(check(frs,frp))
                ans.push_back(i-m);
        frs[s[i]-'a']++;
            
        frs[s[i-m]-'a']--;
            
        }
         if(check(frs,frp))
                ans.push_back(i-m);
       
        return ans;
    }
};

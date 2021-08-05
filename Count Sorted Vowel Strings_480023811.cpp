class Solution {
public:
    int ans;
    void bs(string &s, string &o,int n,int in)
    {
        
        if(n==0)
        {
            ans++;
            return ;
        }
        
        for(int i=in;i<5;i++)
        {
            
            o.push_back(s[i]);
            n--;
            bs(s,o,n,i);
            n++;
            o.pop_back();
            
        }
        
        
        // return ans;
        
        
        
    }
    
    
    int countVowelStrings(int n) {
        ans=0;
        string s="aeiou";
        string o="";
        bs(s,o,n,0);
        return ans;
    }
};

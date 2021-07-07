class Solution {
public:
    
    void findk(string &ans,string p,int k)
    {
        if(k==1)
        {
            ans=p;
            return ;
        }
        string s="";
        for(int i=p.size()-1;i>=0;i++)
        {
            if(p[i]=='1')
                s.push_back('0');
            else
                s.push_back('1');
                
        }
        s=p+"1"+s;
        k--;
        findk(ans,s,k);
        
        }

        char findKthBit(int n, int k) {
            string ans="0";
            
              string    p="0";
        for(int i=2;i<=n;i++)
        {
                // string p=ans;
                string s;
                 for(int i=p.size()-1;i>=0;i--)
                    {
                        if(p[i]=='1')
                            s.push_back('0');
                        else
                            s.push_back('1');

                    }
                s=p+"1"+s;
                ans=s;
                p=s;
                
                

            }
            return ans[k-1];
    }
};

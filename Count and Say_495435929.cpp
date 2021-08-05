class Solution {
public:
    
    
    
    string countAndSay(int n) {
                if(n==1)
                    return "1";
               
        string n_1=countAndSay(n-1);
        int i=0;
        int k=n_1.size();
        string ans="";
        while(i<k)
        {
            int c=0;
            char t=n_1[i];
            while(t==n_1[i])
            {
                c++;i++;
            }
            ans+=to_string(c) ;
            ans.push_back(t);
        }
        return  ans;
    }
};

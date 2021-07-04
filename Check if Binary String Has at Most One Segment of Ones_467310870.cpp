class Solution {
public:
    bool checkOnesSegment(string s) {
        int f=0;
        // for(char x: s)
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            char x=s[i];
            if(x=='1')
            {
                f++;
                while(s[i]=='1')
                    i++;
            }
            if(f>1)
                return  0;
        }
        return 1;
    }
};

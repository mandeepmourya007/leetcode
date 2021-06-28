class Solution {
public:
    int maxProfit(vector<int>& p) {
     
        if(p.size()==0)
                return 0;
        int mp=0;
        int b=p[0];
        for(int i=1;i<p.size();i++)
        {
            if(p[i]>b)
                mp=max(p[i]-b,mp);
            else
                b=p[i];
        }
        return mp;
    }
};



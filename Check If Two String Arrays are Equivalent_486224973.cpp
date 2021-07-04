class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        // sort(w1.begin(),w1.end());
        // sort(w2.begin(),w2.end());
        int n=w1.size();
        int m=w2.size();
        string s1="",s2="";
        
        
        for(int i=0;i<n;i++)s1+=w1[i];
        for(int i=0;i<m;i++)s2+=w2[i];
        if(s1==s2)
            return 1;
        return 0;
    }
};

class Solution {
public:
    bool isSumEqual(string fw, string sw, string tw) {
     
        int s1=0,s2=0,s3=0;
        for(char c:fw)
            s1=s1*10 + (c-'a');
        for(char c:sw)
            s2=s2*10 + (c-'a');
        for(char c:tw)
            s3=s3*10 + (c-'a');
        return s1+s2==s3;
        
    }
};

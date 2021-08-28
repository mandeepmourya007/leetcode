class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
     
        int s1=0,s2=0;
        int n=nums1.size(),m=nums2.size();
      
        
        // if(6 * n <  m  && 6 * m <  n)
        //     return -1;

        
        for(int x:nums2)
            s2+=x;
        
        for(int x:nums1)
            s1+=x;
        int ss1=6,ss2=6;
        if(s1>s2)
            ss1=1;
        else ss2=1;
        int needed=abs(s2-s1);
        if(needed==0)
            return 0;
        vector<int> diff;
        for(int x:nums1)
            diff.push_back(abs(ss1-x));
        for(int x:nums2)
            diff.push_back(abs(ss2-x));
        
        sort(diff.begin(),diff.end(),greater<int>());
        int op=0;
        for(int x :diff)
        {
         // if(needed>=x)
             needed-=x;
            op++;
        if(needed<=0)
            return op;
        }
        // int i=0;
        // int c=0;
        
        
        return -1;
    }
};

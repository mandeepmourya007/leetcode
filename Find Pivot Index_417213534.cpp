class Solution {
public:
    int pivotIndex(vector<int>& a) {
        
         int sum=0;
        int n=a.size();
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    int t=0;
    for(int i=0;i<n;i++)
    {
        sum-=a[i];
        if(sum==t)
            return i;
        t+=a[i];
            
    }
    
    return -1;
        
    }
};

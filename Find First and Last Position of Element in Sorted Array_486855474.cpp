class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
  
        int n=arr.size();
        int l=0,r=n-1;
    int s=-1,e=-1;
    while(l<=r)
    {
        
        int m= (l +r)/2;
        if(arr[m]==x)
        {
            s=m;
            r=m-1;
        }
        else if( arr[m]<x)
            l=m+1;
        else r=m-1;
    }
    l=0,r=n-1;
    while(l<=r)
    {
        
        int m= (l +r)/2;
        if(arr[m]==x)
        {
            e=m;
            l=m+1;
        }
        else if( arr[m]<x)
            l=m+1;
        else r=m-1;
    }
    
    return {s,e};
    
    
    }
};

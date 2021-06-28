class Solution {
public:
    int maxProfit(vector<int>& a) {
        
        int net=0;
    for(int i=1;i<a.size();i++){
       if(a[i]>=a[i-1])
       net+=a[i]-a[i-1];
        
    }
    return net;
        
        
    }
};

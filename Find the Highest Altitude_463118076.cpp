class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    
        int n=gain.size();
        if(!n)
            return 0;
        int ans=max(0,gain[0]);
        for( int i=1;i<n;i++)
        {
            ans=max(ans,gain[i-1]+gain[i]);
            gain[i]+=gain[i-1];
            
        }
        
       return ans; 
    }
};

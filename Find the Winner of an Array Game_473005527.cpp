class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
        int i=0,j=1;
        int w=0;
        int n=arr.size();
        int maxi=arr[0];
        while(i<n and j<n)
        {
            
            while(j<n and arr[i]>arr[j])
            {
                w++;j++;
            maxi=max(maxi,arr[j]);
            }
            // cout<<i<<" "<<j<<'\n';
            if(w>=k)
                return arr[i];
            if(i==j)
                j++;
            maxi=max(maxi,arr[j]);
            i=j++;w=1;
      
        }
        
        return maxi;
        
    }
};

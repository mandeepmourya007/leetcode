class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        
        int n=arr.size();
        vector<int> hash(101,-1);
        for(int i=0;i<pieces.size();i++)
            hash[pieces[i][0]]=i;
        int i=0;
        
        while(i<n)
        {
            
            int j=hash[arr[i]];
            if(j==-1)return 0;
            
          int   nn=pieces[j].size();
            for(int k=0;k<nn;k++)
            {
                 if(pieces[j][k]==arr[i])     i++;
                else return 0;
                
            }
            
            
        }
        
    return 1;
    }
};

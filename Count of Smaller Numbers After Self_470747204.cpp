class Solution {
public:
    
    void merge(vector<pair<int,int>> &nums,int l,int m,int r,vector<int > &c)
    {
            vector< pair<int,int> > temp(r-l+1);
            int i=l;
            int j=m+1;
        int k=0;
        while(i<=m && j<=r)
        {
            if(nums[i].first<=nums[j].first)
            {
                c[nums[i].second]+=j-m-1;

                temp[k++]=nums[i++];
            }
            else 
            {
               temp[k++]=nums[j++];
            }
        }
        
        while(i<=m)
       { 
            c[nums[i].second]+=r-m;
           
            temp[k++]=nums[i++];
        
       } 
        while(j<=r)
            temp[k++]=nums[j++] ;
        k=0;
        for(int i=l;i<=r;i++)
            nums[i]=temp[k++];
                           
    }
    
   void  mergeSort(vector<pair<int,int>> &nums,int l,int r,vector<int> &c)
    {
        
        if(l<r)
        {
            int m=(l+r)/2;
            
            mergeSort(nums,l,m,c);
            mergeSort(nums,m+1,r,c);
            merge(nums,l,m,r,c);
            
        }
    }
    
    
    vector<int> countSmaller(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> ans(n,0);
        vector<pair<int,int>> v;
       for(int i=0;i<n;i++) v.push_back({nums[i],i});
        
        mergeSort(v,0,n-1,ans);
        for(auto a: v)
            cout<<a.first<<" ";
        return ans;
        
    }
};

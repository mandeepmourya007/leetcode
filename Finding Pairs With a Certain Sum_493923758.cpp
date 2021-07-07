class FindSumPairs {
public:
    
    map<int,int>mp1;
    map<int,int>mp2;
    vector<int> arr1,arr2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        
        
        arr1.resize(nums1.size());
        arr2.resize(nums2.size());
        for(int i=0;i<nums1.size();i++)
                mp1[nums1[i]]++,arr1[i]=nums1[i];
        
        for(int i=0;i<nums2.size();i++)
               mp2[nums2[i]]++,arr2[i]=nums2[i];
        
    }
    
    void add(int i, int val) {
                mp2[arr2[i]]--;
                arr2[i]+=val;
                mp2[arr2[i]]++;
    }
    
    int count(int t) {
        int ans=0;
        for(auto i=mp1.begin();i!=mp1.end();i++)
        {
            if(mp2.find(t-i->first)!=mp2.end())
                ans+= (i->second*mp2[t-i->first]);
        }
        return ans;
        
        
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */

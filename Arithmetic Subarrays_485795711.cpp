class Solution {
public:
    
//     bool isap(vector<int>& nums, int l,int r)
//     {
//         if(l==r)
//             return 1;
        
        
        
        
//     }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        int n=l.size();
        // vector<int>ps(n,0);
    
        vector<bool> ans;
        
        for(int g=0;g<n;g++)
        {
            
            {
               
                {
                    vector<int> t  ;//(nums.begin()+i,nums.end()+j);
                    
                     int i=l[g];
                    int  j=r[g];
                    for(int p=i;p<=j;p++)
                        t.push_back(nums[p]);
                    // cout<<i<<" "<<j<<'\n';
                    sort(t.begin(),t.end());
                    int f=1;
                    int pn=t.size();
                    int d= 0 ; //t[1]-t[0];
                    if(pn>2)
                   {
                        d=t[1]-t[0];
                        for(int p=0;p<pn-1;p++)
                    {
                        if(t[p+1] - t[p]!=d)
                           {
                            f=0;
                            break;
                    }
                        }
                    }
                    if(f) ans.push_back(1);
                    else ans.push_back(0);
                }
                
            }
        }
        
        
//         for(int i=0;i<p;i++)
//         {
            
//             ans.push_back(dp[l[i]][r[i]]);
//         }
        return ans;
        
    }
};

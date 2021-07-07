class Solution {
public:
    int findPeakElement(vector<int>& num) {
//         int n=nums.size();
//         if(n==1)
//             return 0;
//         if(nums[0]>nums[1])
//             return 0;
//         if(nums[n-1]>nums[n-2])
//             return n-1;
//         int ans=0;
//         for(int i=1;i<n-1;i++)
//         {
//                       if(nums[i-1]<nums[i] && nums[i+1]<nums[i])
//                       {
//                           ans=i;
//                           break;
//                       }
//         }
        
//         return ans;
        
//     }
        
          for(int i = 1; i < num.size(); i ++)
        {
            if(num[i] < num[i-1])
            {// <
                return i-1;
            }
        }
        return num.size()-1;
    }
        
};

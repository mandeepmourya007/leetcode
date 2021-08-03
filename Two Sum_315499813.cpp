class Solution {
    vector<int> r;
public:
    vector<int> twoSum(vector<int>& nums, int target) {
  map<int,int> m;    
        for(int  i=0;i!=nums.size();i++)
        {if(  m.find(target - nums[i]) != m.end())
            {
                r.push_back((m.find(target - nums[i]))->second);
                r.push_back(i);;
                break;
            }
            m[nums[i]]=i;
        
        
        }
        
        return r;
        }
}
        
       ;

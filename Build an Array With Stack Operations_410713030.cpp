class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
     
        int j=0;
        vector<string> ans;
        for(int i=1;1;i++)
        {
          
            if(target.size()==j)
                break;
           ans.push_back("Push");
            if(i!=target[j])
                ans.push_back("Pop");
            else j++;
        }
    
        return ans;
    }
};

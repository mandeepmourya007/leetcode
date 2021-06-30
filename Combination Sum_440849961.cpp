class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>   ret;
        vector<int>           res;
        
        dp(candidates, target, res, ret, 0);
        return ret;
    }
    
    void  dp(vector<int>& candidates, int target, vector<int> &tmpVec, vector<vector<int>> 
        &ret, int index) {
        if (target < 0)
            return;
        
        if (!target) {
            ret.push_back(tmpVec);
        }
        
        for (int i = index; i < candidates.size(); i++) {
            tmpVec.push_back(candidates[i]);
            dp(candidates, target - candidates[i], tmpVec, ret, i);
            tmpVec.pop_back();
        }
        
    }
    
};


    
    
    


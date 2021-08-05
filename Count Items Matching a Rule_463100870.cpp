class Solution {
public:
    
    int solve(vector<vector<string>>& items, int rk, string rv)
    {
        int c=0;
        
        for( auto item:items)
            if(item[rk]==rv)
                c++;
        
    return c;
    }
    
    
    
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        if(ruleKey=="type")
            return solve(items,0,ruleValue);
        
        if(ruleKey=="color")
            return solve(items,1,ruleValue);
        
        if(ruleKey=="name")
            return solve(items,2,ruleValue);
        return 0;
    }
};

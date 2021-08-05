class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map <int,int>Map;
        for( int a: arr)
            {if(Map.find(a) != Map.end())
                Map[a]++;
        else
            Map[a] = 1;
            }
        int r=0;
        for (auto i :Map)
        {
            if(Map.find(i.first +1) != Map.end())
                r+= i.second;
                
    }
        return r;
        }
        
};

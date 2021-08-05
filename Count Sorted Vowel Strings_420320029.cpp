class Solution {
public:
    int countVowelStrings(int n) {
        string s="aeiou";
        
      return ((n+4)*(n+3)*(n+2)*(n+1))/24;
            
    }
};

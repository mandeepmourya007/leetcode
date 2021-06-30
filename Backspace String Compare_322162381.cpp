class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
        int si = S.size()-1, ti = T.size()-1;
    
    int sb = 0, tb = 0;
    
    while (si >= 0 || ti >= 0) {
        if (si >= 0 && S[si] == '#') {        // increment S backspace count
            si--, sb++;
        } else if (sb) {                      // S backspace is pending
            si--, sb--;
        } else if (ti >= 0 && T[ti] == '#') { // increment T backspace count
            ti--, tb++;
        } else if (tb) {                      // T backsapce is pending
            ti--, tb--;
        } else if (si < 0 || ti < 0 || S[si] != T[ti]) {
            return false;
        } else {
            si--, ti--;
        }
    }
    
    return true;
        
        
        
    }
};

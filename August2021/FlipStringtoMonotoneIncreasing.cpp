class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n = s.length() , one = 0 , zero = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '0') 
                zero++;
            else 
                one++;
            zero = min(zero , one);
        }
        return zero;
    }
};

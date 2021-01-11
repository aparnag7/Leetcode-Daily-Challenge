class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n<2) return n;
        int ans=1;
        vector<int> last_index(256,-1);
        int start=0;
        for(int end=0;end<n;end++) {
            start = max(start , last_index[s[end]]+1);
            ans = max(ans,end-start+1);
            last_index[s[end]] = end;
        }
        return ans;
    }
};

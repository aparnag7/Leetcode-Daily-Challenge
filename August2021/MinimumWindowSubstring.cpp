class Solution {
public:
    string minWindow(string s, string t) {
        if(s==t)
            return s;
        if(t.length()>s.length())
            return "";
        unordered_map<char,int> tfreq , sfreq;        
        for(char c : t)
            tfreq[c]++;
        
        int left = 0 , len = INT_MAX ,right = 0 , n = s.length(), count=0;
        string ans = "";
        while(right<n){
            char c = s[right];
            if(tfreq.find(c)!=tfreq.end()){
                sfreq[c]++;                                        
                if(sfreq[c]<=tfreq[c])
                    count++;
            }            
            if(count>=t.length()){
                while(tfreq.find(s[left]) == tfreq.end() || sfreq[s[left]] > tfreq[s[left]]){
                    sfreq[s[left]]--;
                    left++;
                }
                if(len > right-left+1) {
                    len = right-left+1;
                    ans = s.substr(left,len);
                }                
            }
            right++;
        }
        return ans;
    }
};

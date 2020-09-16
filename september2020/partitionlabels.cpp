class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> part;
        int first[26];
        int last[26];
        for(int i=0;i<s.length();i++) {
            last[s[i]-'a'] = i;
        }
        int i=0;
        while(i<s.length()) {
            int end = last[s[i]-'a'];
            int j=i;
            while(j!=end) {
                end =max(end , last[s[j++]-'a']);
            }
         part.push_back(j-i+1); 
         i=j+1;
        }
        return part;
    }
};

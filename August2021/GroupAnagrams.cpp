class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(string st : strs){
            string t = st;
            sort(t.begin() , t.end()); 
            mp[t].push_back(st);
        }
        vector<vector<string>> result;
        for(auto m : mp) {
            result.push_back(m.second);
        }
        return result;
    }
};

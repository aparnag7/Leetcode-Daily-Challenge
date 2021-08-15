class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        int n = arr.size();
        map<int,int> mp;
        for(int a : arr)
            mp[a]++;
        
        vector<int> keys ; 
        for(auto m : mp) 
            keys.push_back(m.first);
        sort(keys.begin() , keys.end(), [](int i,int j){
            return abs(i)<abs(j);
        }); 
        for(int x : keys) {
            if(mp[x] > mp[2*x])
                return 0;
            mp[2*x] -= mp[x];
        }
        
        return 1;
    }
};

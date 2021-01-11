class Solution {
public:
    int ans=0;
    
    void backtrack(vector<bool> &visited,int pos,int n) {
        if(pos>n) ans++;
        for(int i=1;i<=n;i++) {
            if(!visited[i] && (pos%i==0 || i%pos==0))  {
                visited[i]=true;
                backtrack(visited,pos+1,n);
                visited[i]=false;
            }
        }
    }
    int countArrangement(int n) {
        vector<bool> visited(n+1,false);
        backtrack(visited,1,n);
        return ans;
    }
};

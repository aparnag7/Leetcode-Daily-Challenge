class Solution {
public:
    
    bool ispal(string &s , int left , int right){        
        while(left<right){
            if(s[left]!=s[right])
                return 0;
            left++;
            right--;
        }
        return 1;
    }
    
    int solve(string &s , vector<vector<int>>& dp, int i , int j){
        if(i>=j)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        if(ispal(s,i,j)){
            dp[i][j] = 0; 
            return dp[i][j];
        }
        int ans = INT_MAX;
        for(int k=i;k<=j;k++){
            if(ispal(s,i,k)) {
                ans = min(ans , 1+solve(s,dp,k+1,j));
            }   
        }        
        return dp[i][j] = ans;
    }
    
    int minCut(string s) {
        int n = s.length();
        if(n==1 || ispal(s , 0 ,n-1))
            return 0;
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return solve(s , dp , 0 ,  n-1);
    }
}; 

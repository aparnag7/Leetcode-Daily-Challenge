class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        int m = num1.length() , n = num2.length(); 
        int carry = 0 ; 
        reverse(num1.begin() , num1.end());
        reverse(num2.begin() , num2.end()); 
        int i = 0 , j = 0 ,sum=0;
        while(i<m && j<n){
            int sum = carry + (num1[i]-'0') + (num2[j]-'0'); 
            carry = sum/10;
            sum %= 10; 
            ans += (sum+'0');
            i++;
            j++;
        }
        while(i<m){
            sum = carry + (num1[i]-'0');
            i++;
            carry = sum/10;
            sum %= 10; 
            ans += (sum+'0');
        }
        while(j<n){
            sum = carry + (num2[j]-'0');
            j++;
            carry = sum/10;
            sum %= 10; 
            ans += (sum+'0');
        }
        if(carry) {
            ans += (carry+'0');
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};

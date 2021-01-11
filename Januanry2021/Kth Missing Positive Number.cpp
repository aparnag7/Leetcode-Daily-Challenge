class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int x;
        int n=arr.size();
        if(n<1) return 1;
        for(int i=1,j=0;i<arr[n-1];i++)
        {
            if(arr[j]==i) j++;
                else k--;
            if(k==0) return i;
        }
        return arr[n-1] + k;
    }
};

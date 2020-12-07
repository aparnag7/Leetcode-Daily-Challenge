/*Left to right ---> top right to bottom right ---> bottom right to bottom left ---> bottom left to top left
the curr variable is used to denote how many times it takes to fill the matrix while we do the above 4 operations in each iteration 
In the given example 1-8 can be filled in  iteration with curr=0 and 9 is filled in the net iteration where curr = 1
Hence curr is from 0 to (n+1)/2 - 1 {(3+1) /2 - 1 = 2-1 = 1} 

*/
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
     vector<vector<int>> matrix(n,vector<int>(n));
     int val =1;
     int curr = 0;
     for(curr=0;curr<(n+1)/2;curr++) {
         
         for(int j=curr;j<=n-curr-1;j++)
             matrix[curr][j] = val++;
         
         for(int i=curr+1;i<= n-curr-1;i++)
             matrix[i][n-curr-1] = val++;
         
         for(int j=n-curr-2;j>=curr;j--) 
             matrix[n-curr-1][j] = val++;
         
         for(int i=n-curr-2;i>curr;i--)
             matrix[i][curr] = val++;         
         
     }
        return matrix;
    }
};

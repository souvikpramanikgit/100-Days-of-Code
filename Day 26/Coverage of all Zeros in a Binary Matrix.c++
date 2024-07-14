// Link => https://www.geeksforgeeks.org/problems/coverage-of-all-zeros-in-a-binary-matrix4024/1

class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        int row=matrix.size(), col= matrix[0].size();
        int ans =0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0) {
                    if(i>0) {
                        if(matrix[i-1][j]==1) ans++;
                    }
                    if(j>0){
                        if(matrix[i][j-1]==1) ans++;
                    }
                    if(j<col-1){
                        if(matrix[i][j+1]==1) ans++;
                    }
                    if(i<row-1){
                        if(matrix[i+1][j]==1) ans++;
                    }
                }
            }
        }
        return ans;
    }
};

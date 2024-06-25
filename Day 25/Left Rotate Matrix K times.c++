// Link => https://www.geeksforgeeks.org/problems/left-rotate-matrix-k-times2351/1

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        int n = mat[0].size();
        vector<vector<int>>ans(mat.size(),vector<int>(n,-1));
        k=k%n;
        if(k==n)return mat;
        for(int i=0;i<mat.size();i++){
            for(int j=0; j<n;j++){
                if(j-k<0){
                    ans[i][n-k+j]=mat[i][j];
                }
                else{
                    ans[i][j-k]=mat[i][j];
                }
            }
        }
        return ans;
    }
};

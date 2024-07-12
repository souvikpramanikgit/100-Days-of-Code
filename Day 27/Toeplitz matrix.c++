// Link => https://www.geeksforgeeks.org/problems/toeplitz-matrix/1

bool isToeplitz(vector<vector<int>>& mat) {
    // code here
    int n=mat.size();
    int m=mat[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            int a=i-1;
            int b=j-1;
            if(a>=0 && b>=0){
                if(mat[i][j]!=mat[a][b]){
                    return false;
                }
            }
        }
    }
    return true;
}

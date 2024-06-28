// Link => https://geeksforgeeks.org/problems/the-palindrome-pattern3900/1

class Solution {
  public:

    string pattern(vector<vector<int>> &arr) {
        // Code Here
        int n = arr.size();
        bool isDone = true;
        
        // Check row symmetry
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n/2; j++){
                if(arr[i][j] != arr[i][n-j-1]){
                    isDone = false;
                    break;
                }
            }
            if(isDone){
                return to_string(i) + " R";
            }
            isDone = true;
        }
        
        // Check column symmetry
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n/2; j++){
                if(arr[j][i] != arr[n-j-1][i]){
                    isDone = false;
                    break;
                }
            }
            if(isDone){
                return to_string(i) + " C";
            }
            isDone = true;
        }
        return "-1";
    }
};

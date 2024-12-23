// Link => https://www.geeksforgeeks.org/problems/mobile-numeric-keypad5456/1

class Solution {
  public:
    long long getCount(int n) {
        
        vector<long long int>dp(10);
    
        for (int j = 0; j < 10; ++j) {
            dp[j] = 1;
        }
    
        vector<vector<int>> vec(10);
        vec[0] = {0, 8};
        vec[1] = {1, 2, 4};
        vec[2] = {1, 2, 3, 5};
        vec[3] = {2, 3, 6};
        vec[4] = {1, 4, 5, 7};
        vec[5] = {2, 4, 5, 6, 8};
        vec[6] = {3, 5, 6, 9};
        vec[7] = {4, 7, 8};
        vec[8] = {0, 5, 7, 8, 9};
        vec[9] = {6, 8, 9};
    
    
        for (int i = 2; i <= n; ++i) {
        vector<long long int>curr(10,0);
            for (int j = 0; j < 10; ++j) {
                for (int prev : vec[j]) {
                    curr[j] += dp[prev];
                }
            }
            dp=curr;
        }
        long long sum = 0;
        for (int i = 0; i < 10; ++i) {
            sum += dp[i];
        }
    return sum;
    }
};

// Link => https://www.geeksforgeeks.org/problems/maximum-occured-integer4602/1

class Solution {
  public:
    int maxOccured(int n, int l[], int r[], int maxx) {

        // Your code here
        vector<int> dp(maxx + 2, 0);
        for (int i = 0; i < n; i++) 
        {
            dp[l[i]]++;
            dp[r[i] + 1]--;
        }
        int freq= 0;
        int res = 0;
        int maxfreq= 0;
        for (int i = 0; i <= maxx; i++) {
            freq+= dp[i];
            if (freq> maxfreq) 
            {
                maxfreq= freq;
                res = i;
            }
        }
        return res;
    }
};

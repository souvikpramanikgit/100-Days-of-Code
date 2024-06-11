// Link => https://www.geeksforgeeks.org/problems/maximum-tip-calculator2631/1

class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // code here
        vector<pair<int, int>> diff;
        for (int i = 0; i < n; ++i)
            diff.push_back({abs(arr[i] - brr[i]), i});
        sort(diff.begin(), diff.end(), greater<pair<int, int>>());
        long long tot = 0;
        for (int i = 0; i < n; ++i) {
            int idx = diff[i].second;

            if ((arr[idx] >= brr[idx] && x > 0) || y == 0) {
                tot += arr[idx];
                --x;
            } else {
                tot += brr[idx];
                --y;
            }
        }
        return tot;
    }
};

// Link => https://www.geeksforgeeks.org/problems/max-sum-in-the-configuration/1

class Solution {
  public:
    long long max_sum(int a[], int n) {
        // Your code here
        long totalSum = 0;
        for (int i = 0; i < n; ++i) {
            totalSum += a[i];
        }
        
        long currentValue = 0;
        for (int i = 0; i < n; ++i) {
            currentValue += (long) i * a[i];
        }
        
        long maxSum = currentValue;
        for (int i = 1; i < n; ++i) {
            currentValue = currentValue + totalSum - (long) n * a[n - i];
            maxSum = max(maxSum, currentValue);
        }
        return maxSum;
    }
};

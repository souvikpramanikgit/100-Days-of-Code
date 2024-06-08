// Link => https://leetcode.com/problems/continuous-subarray-sum/description/?envType=daily-question&envId=2024-06-08

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> remaindersFound;
        int currSum = 0;
        remaindersFound[0] = -1;

        for (int i = 0; i < nums.size(); i++) {
            currSum += nums[i];
            int remainder = currSum % k;

            if (remaindersFound.find(remainder) != remaindersFound.end()) {
                if (i - remaindersFound[remainder] >= 2) {
                    return true;
                }
            } else {
                remaindersFound[remainder] = i;
            }
        }
        return false;
    }
};

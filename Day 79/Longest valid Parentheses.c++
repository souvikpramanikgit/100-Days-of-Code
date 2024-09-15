// Link => https://www.geeksforgeeks.org/problems/longest-valid-parentheses5657/1

class Solution {
  public:
    int maxLength(string str) {
        // code here
        int n=str.size();
        stack<int> stk;
        stk.push(-1);
        int maxLen=0;
        
        for(int i=0;i<n;i++){
            if (str[i] == '(') {
                stk.push(i);
            } 
            else {
                stk.pop();

                if (!stk.empty()) {
                    maxLen = max(maxLen, i - stk.top());
                } else {
                    stk.push(i);
                }
            }
        }
        return maxLen;
    }
};

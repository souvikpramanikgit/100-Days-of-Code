// Link => https://www.geeksforgeeks.org/problems/rectangles-in-a-circle0457/1

class Solution {
  public:
    int rectanglesInCircle(int r) {
        // code here
        int cnt = 0;
        for(int i = 1; i <= 2*r; i++) {
            int lo = 1, hi = 2*r;
            int ans = 0;
            while( lo <= hi) {
                int mid = (lo + hi) / 2;
                if( mid*mid + i * i <= 4*r*r) {
                    ans = mid;
                    lo = mid + 1;
                } 
                else hi = mid - 1;
            }
            cnt += ans;
        }
        return cnt;
    }
};

// Link => https://www.geeksforgeeks.org/problems/summed-matrix5834/1

class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        if(n*2<q) return 0;
        
        return n-abs(n+1-q);
        
    }
};

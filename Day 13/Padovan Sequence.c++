// Link => https://www.geeksforgeeks.org/problems/padovan-sequence2855/1

class Solution {
  public:
    int padovanSequence(int n) {
        // code here.
        int a[n+1];
        int m=1e9+7;
        a[0]=a[1]=a[2]=1;
        for(int i=3;i<=n;i++){
            a[i]=(a[i-2]+a[i-3])%m;
        }
        return a[n]%m;
    }
};

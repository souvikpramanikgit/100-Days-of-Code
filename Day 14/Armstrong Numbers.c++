// Link => https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        
        int num=n;
        int add=0;
        while(n!=0){
            int rem=n%10;
            add+=pow(div,3);
            n=n/10;
        }
        return store==add ? "true":"false";
    }
};

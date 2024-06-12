// Link => https://www.geeksforgeeks.org/problems/count-numbers-containing-43022/1

class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int count=0;
        for(int i=0;i<=n;i++){
            int x=i;
            while(x>0){
                int d= x % 10;
                if(d==4) {
                    count++;
                    break;
                }    
                else
                x=x/10;
            }
        }
        return count;
    }
};

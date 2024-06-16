// Link => https://www.geeksforgeeks.org/problems/sum-of-prime4751/1

class Solution {
    bool isPrime(int k){
        if(k == 3) return 1;
        
        if(k%2 == 0 || k%3 == 0) return 0;
        
        for(int i=5;i*i<=k;i+=6){
            if(k%i == 0 || k%(i+2)==0) return 0;
        }
        return 1;
    }
  public:
    vector<int> getPrimes(int n) {
        // code here
        vector<int>vec;
        if(n>=2) vec.push_back(2);
        
        for(int i=3;i<=n;i++){
            if(isPrime(i)) vec.push_back(i);
        }

        int i=0, j = vec.size()-1;
        while(i<=j){
            if(vec[i]+vec[j] == n) return {vec[i], vec[j]};
            if(vec[i]+vec[j] < n) i++;
            else j--;
        }
        return {-1,-1};
    }
};

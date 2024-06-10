// Link => https://www.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1

class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        // code here
        unordered_map<char,int>mp, lp;
        
        for(int i=0; i<n; i++){
            char c = nuts[i];
            //cout<<c<<endl;
            mp[c] ++;
        }
        for(int i=0; i<n; i++){
            char c = bolts[i];
            lp[c] ++;
        }
        
        char ans[] = { '!','#','$','%','&','*','?','@','^' };
        
        
        char res[n] ;
        int k = 0;
        
        for(int i=0; i<9; i++){
            if(mp.find(ans[i]) != mp.end() and lp.find(ans[i]) != lp.end()){
                res[k++] = ans[i];
            }
        }
        
        for(int i=0; i<n; i++){
            nuts[i] = res[i];
            bolts[i] = res[i];
        }
    }
};

// Link => https://www.geeksforgeeks.org/problems/print-bracket-number4058/1

class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        
        vector<int> result;
        
        stack<int> temp;
        
        int tempOpen=0;
        
        for(int i=0 ; i<str.size() ; i++)
         {
             if(str[i]=='(')
              {
                  tempOpen++;
                  result.push_back(tempOpen);
                  temp.push(tempOpen);
              }
              else if(str[i]==')')
               {
                   result.push_back(temp.top());
                   temp.pop();
                   
               }
         }
         return result;
    }
};

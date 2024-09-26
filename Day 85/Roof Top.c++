// Link => https://www.geeksforgeeks.org/problems/roof-top-1587115621/1

class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        int count=0;
        int maxi=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                count++;
            }
            else{
                count=0;
            }
            maxi=max(count,maxi);
        }
        return maxi;
    }
};

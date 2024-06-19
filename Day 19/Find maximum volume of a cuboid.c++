// Link => https://www.geeksforgeeks.org/problems/magical-box5306/1

class Solution {
  public:
    double maxVolume(double perimeter, double area) {
        // code here
        double len=((perimeter/2)-sqrt((perimeter*perimeter)/4-6*area))/6;
        
        return len*len*(perimeter/4-2*len);
    }
};

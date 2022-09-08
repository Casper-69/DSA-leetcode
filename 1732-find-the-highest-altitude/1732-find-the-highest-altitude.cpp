class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0, n = gain.size(), max_alt = INT_MIN;
        
        for(int i = 0; i < n; i++) {
            
            sum = sum + gain[i];
            max_alt = max(max_alt, sum);
            
        }
        
        if(max_alt<0)
            return 0;
        else
            return max_alt;
        
    }
};
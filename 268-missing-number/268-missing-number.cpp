class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(), sum = 0;
        
        for ( int i = 0; i <= n; i++) {
            sum = sum + i;
        }
        
        for(int i = 0; i < n; i++) {
            sum = sum - nums[i];
        }
        
        return sum;
    }
};
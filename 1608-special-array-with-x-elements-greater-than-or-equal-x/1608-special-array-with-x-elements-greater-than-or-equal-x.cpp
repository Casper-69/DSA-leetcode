class Solution {
public:
    int specialArray(vector<int>& nums) {

        int k = 0;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++) {
            
            if(i == 0) {
                k = n - i;
                
                if(nums[i] >= k){
                    return k;
                }
            }
            
            else {
                
                if(nums[i] == nums[i-1]) {
                    continue;
                }
                
                else {
                    k = n - i;
                    if(nums[i] >= k && nums[i-1] < k) {
                        return k;
                    }
                }
            }
        }
        
        return -1;
        
    }
};
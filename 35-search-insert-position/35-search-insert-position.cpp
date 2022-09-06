class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int mid = start + (end - start)/2;
        
        while(start <= end) {
            mid = start + (end - start)/2;
            
            if(nums[mid] == target) {
                return mid;
            }
            
            if(nums[mid] < target) {
                start = mid + 1;
            }
            
            if(nums[mid] > target) {
                end = mid - 1;
            }
        }
        
        return start;
        
    }
};
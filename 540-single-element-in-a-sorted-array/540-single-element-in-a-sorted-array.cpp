class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int start = 0, end = nums.size() - 2;
        int mid = start + (end - start)/2;
        
        while(start <= end) {
            
            mid = start + (end - start)/2;
            if(mid == 0) {
                if(nums[mid] == nums[mid+1]) {
                    start = mid + 1;
                }
                else {
                    return nums[mid];
                }
            }
            
            if(mid%2 == 0) {
                if(nums[mid] == nums[mid+1]) {
                    start = mid + 1;
                }
                else if (nums[mid] == nums[mid-1]) {
                    end = mid - 1;
                }
                else {
                    return nums[mid];
                }
            }
            
            if(mid%2 != 0) {
                if(nums[mid] == nums[mid+1]) {
                    end = mid - 1;
                }
                else if(nums[mid] == nums[mid-1]) {
                    start = mid + 1;
                }
                else {
                    return nums[mid];
                }
            }
        }
        
        return nums[start];
        
    }
};
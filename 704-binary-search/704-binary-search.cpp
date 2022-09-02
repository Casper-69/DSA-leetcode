class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end  = nums.size()-1;
        int mid = start + (end - start)/2;
        
        while(start <= end) {
            mid = start + (end - start)/2;
            if(target == nums[mid])
                return mid;
            if(target > nums[mid])
                start = mid + 1;
            else 
                end = mid - 1;
        }
        
        return -1;
    }
};
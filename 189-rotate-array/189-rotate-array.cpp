class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        if(n == 1)
            return;
        
        k = k % n;
        
        swap(nums, n-k, n-1);
        swap(nums, 0, n-k-1);
        swap(nums, 0, n - 1);
        
    }
    
    vector <int> swap(vector<int>& nums, int start, int end) {
        while(start <= end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start ++;
            end--;
        }
        
        return nums;
    }
};
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int ans = 0, start = 0, n = arr.size(), end = n-1;
        int mid = start + (end-start)/2;
        
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) {
                ans++;
            }
            
            else {
                start = 0, end = n - 1;
            
            while(start <= end) {
                mid = start + (end-start)/2;
                if(arr[i]*2 < arr[mid]) {
                     end = mid - 1;
                }
                else if(arr[i]*2 > arr[mid]) {
                     start = mid + 1;
                }
                else if(arr[i]*2 == arr[mid]) {
                     return true;
                }
            }
                
            }
            
        }
        
        if(ans > 1) {
            return true;
        }
        else 
            return false;
    }
};
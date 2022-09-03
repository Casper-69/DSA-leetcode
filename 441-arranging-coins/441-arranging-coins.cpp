class Solution {
public:
    int arrangeCoins(int n) {
        int i = 1, k = 0;
        
        while(n > 0) {
            n = n - i;
            i++;
            if(n >= 0) 
                k++;
        }
        return k;
    }
};
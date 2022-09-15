class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = 0, col = grid[0].size()-1, k = 0;
        
        while(row < grid.size() && col >= 0) {
            
            if(grid[row][col] < 0) {
                col--;
                k = k + grid.size() - row;
            }
            
            else {
                row++;
            }
        }
        
        return k;
        
    }
};
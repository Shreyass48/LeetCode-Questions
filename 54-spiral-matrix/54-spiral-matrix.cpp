class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        // counter
        int count = 0;
        // Total elements in matrix
        int total = row*col;
        
        // Indexes
        int strtRow = 0;
        int strtCol = 0;
        int endRow = row - 1;
        int endCol = col - 1;
        
        while(count < total)
        {
            // startRow print
            for(int i = strtCol; count < total && i <= endCol; i++)
            {
                ans.push_back(matrix[strtRow][i]);
                count++;
            }
            strtRow++;
            
            //EndCol print
            for(int i = strtRow; count < total && i <= endRow; i++)
            {
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            
            //EndRow Print
            for(int i = endCol; count < total && i >= strtCol; i--)
            {
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            
            // startCol print
            for(int i = endRow; count < total && i >= strtRow; i--)
            {
                ans.push_back(matrix[i][strtCol]);
                count++;
            }
            strtCol++;
 
        }
        
        return ans;
    }
};
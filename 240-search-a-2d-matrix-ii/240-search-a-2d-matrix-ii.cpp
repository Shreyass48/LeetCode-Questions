class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int i = 0;
        int j = cols - 1;
        
        // i checks for rows && j cheaks for col
        while(i < rows && j >= 0)
        {
            if(matrix[i][j] == target)
                return true;
            else if(matrix[i][j] > target)
                 j--;
            else
                i++;
                
        }
        
        return false;
        
//          for(int i = 0; i < matrix.size(); i++)
//         {
//             for(int j = 0; j < matrix[i].size(); j++)
//             {
//                 if(matrix[i][j] == target)
//                 {
//                     return true;
//                 }
//             }
//         }
        
//         return false;
        
    }
};
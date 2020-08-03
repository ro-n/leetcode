// 2020-08-04 00:00:42

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        if (matrix == null || matrix.length == 0
            || matrix[0] == null || matrix[0].length == 0) {
                return false;
            }      
        int m = matrix.length, n = matrix[0].length;
        int i = 0, j = n - 1;
        while (i <= m - 1 && j >= 0) {
            if (target < matrix[i][j]) --j;
            else if (target > matrix[i][j]) ++i;
            else return true;
        }
        return false;
    }
}
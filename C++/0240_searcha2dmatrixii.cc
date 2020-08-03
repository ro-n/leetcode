// 2020-08-04 01:34:45

#include <vector>

using std::vector;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        if (matrix.size() == 0 || matrix[0].size() == 0)
            return false;
        int i = 0, j = matrix[0].size() - 1;
        while (i <= matrix.size() - 1 && j >= 0)
        {
            if (target > matrix[i][j])
                i += 1;
            else if (target < matrix[i][j])
                j -= 1;
            else
                return true;
        }
        return false;
    }
};

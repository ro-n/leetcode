# 2020-08-04 00:03:20

class Solution:
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        if matrix is None or len(matrix) == 0 \
                or matrix[0] is None or len(matrix[0]) == 0:
            return False
        i = 0
        j = len(matrix[0]) - 1
        while i <= len(matrix) - 1 and j >= 0:
            if target > matrix[i][j]:
                i += 1
            elif target < matrix[i][j]:
                j -= 1
            else:
                return True
        return False

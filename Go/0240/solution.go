// 2020-08-04 16:27:27

func searchMatrix(matrix [][]int, target int) bool {
	if matrix == nil || len(matrix) == 0 ||
		matrix[0] == nil || len(matrix[0]) == 0 {
		return false
	}
	for i, j := 0, len(matrix[0])-1; i <= len(matrix)-1 && j >= 0; {
		if target > matrix[i][j] {
			i++
		} else if target < matrix[i][j] {
			j--
		} else {
			return true
		}
	}
	return false
}

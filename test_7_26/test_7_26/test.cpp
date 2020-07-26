bool searchMatrix(vector<vector<int>>& matrix, int target) {

	if (matrix.empty())
		return false;

	int row = 0;
	int col = matrix[0].size() - 1;
	while (row<matrix.size() && col >= 0)
	{
		if (matrix[row][col] == target)
			return true;
		if (target>matrix[row][col])
			row++;
		else
			col--;
	}
	return false;
}
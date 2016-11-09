bool isValidSudoku(char** board, int boardRowSize, int boardColSize) {
	int i, j, c;
	bool row[9][9], col[9][9], block[9][9];
	memset(row, 0, sizeof(row));
	memset(col, 0, sizeof(col));
	memset(block, 0, sizeof(block));
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if(board[i][j] != '.'){
				c = board[i][j] - '1';
				if (row[i][c] || col[j][c] || block[i / 3 * 3 + j / 3][c]) return false;
				else row[i][c] = col[j][c] = block[i / 3 * 3 + j / 3][c] = true;
			}
		}
	}
	return true;
}
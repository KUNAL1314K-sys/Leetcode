int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int rows = gridSize;
    int cols = gridColSize[0];

    int i = rows - 1;
    int j = 0;
    int count = 0;

    while (i >= 0 && j < cols) {
        if (grid[i][j] < 0) {
            count += cols - j;
            i--;
        } else {
            j++;
        }
    }

    return count;
}

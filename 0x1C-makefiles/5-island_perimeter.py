#!/usr/bin/python3

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.

    Args:
        grid: A list of list of integers representing the island.

    Returns:
        The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                
                if i > 0 and grid[i - 1][j] == 1:  # Check top cell
                    perimeter -= 1
                if i < rows - 1 and grid[i + 1][j] == 1:  # Check bottom cell
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:  # Check left cell
                    perimeter -= 1
                if j < cols - 1 and grid[i][j + 1] == 1:  # Check right cell
                    perimeter -= 1

    return perimeter

# Test the function
if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))


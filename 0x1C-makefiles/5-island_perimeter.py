#!/usr/bin/python3
"""Implement island perimeter."""


def island_perimeter(grid):
    """Compute island perimeter for a given grid.

    Args:
        grid (int[][]): Array of array of integers.
        0 indicates water, 1 indicates land.

    Returns:
        int: perimeter of island
    """
    if not grid:
        return 0

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # Initial perimeter assuming all sides are exposed
                perimeter += 4

                # Check neighboring cells to subtract shared sides
                if row > 0 and grid[row - 1][col] == 1:
                    # Subtract top side (shared between two adjacent cells)
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    # Subtract left side (shared between two adjacent cells)
                    perimeter -= 2

    return perimeter

#!/usr/bin/python3
"""return perimeter of the island"""


def island_perimeter(grid):
    """return perimeter of my island"""

    if grid is None or isinstance(grid, list) is False:
        return count
    row_len = len(grid[0])
    count = 0
    for i in range(4):
        for j in range(row_len):
            if grid[i][j] is 1 and count < 100:
                count = check_per(count, i, j, grid)
    return count


def check_per(count, i, j, grid):
    """check square perimeter"""
    try:
        if grid[i][j-1] is 0:
            count += 1
    except Exception:
        count += 1
    try:
        if grid[i][j+1] is 0:
            count += 1
    except Exception:
        count += 1
    try:
        if grid[i-1][j] is 0:
            count += 1
    except Exception:
        count += 1
    try:
        if grid[i+1][j] is 0:
            count += 1
    except Exception:
        count += 1
    return count

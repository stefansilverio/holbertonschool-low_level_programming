#!/usr/bin/python3
"""return perimeter of the island"""


def island_perimeter(grid):
    """return perimeter of my island"""
    row_len = len(grid[0])
    count = 0

    if grid is None or isinstance(grid, list) not True:
        return count
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

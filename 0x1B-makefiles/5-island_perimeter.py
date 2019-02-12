#!/usr/bin/python3
"""return perimeter of the island"""


def island_perimeter(grid):
    """return perimeter of my island"""

    if grid is None or len(grid) == 0:
        return 0
    if type(grid) != list:
        return 0
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] is 1:
                count = check_per(count, i, j, grid)
    if (count == 1):
        return 4
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

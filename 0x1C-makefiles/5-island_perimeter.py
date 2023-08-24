#!/usr/bin/python3
"""
module for island_perimeter
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    perimter = 0
    for i, row in enumerate(grid):
        for j, column in enumerate(row):
            if column == 1:
                perimter += countwater(grid, column, i, j)
    return perimter


def count_waters(grid, column, i, j):
    """
    counts the water around the land
    """
    u = 0
    d = 0
    ku = 0
    kd = 0
    count = 0
    if i <= 0 and j <= 0:
        count += 2
        ku = 1
    if i >= len(grid) - 1 and j >= len(grid[i]) - 1:
        count += 2
        d = 1
    if j <= 0 and i >= len(grid) - 1:
        count += 2
        kd = 1
    if i <= 0 and j >= len(grid[i]) - 1:
        count += 2
        u = 1

    """up is i - 1, j"""
    if (ku == 0 and u == 0) and (i <= 0 or grid[i - 1][j] == 0):
        count += 1

    """down is i + 1, j"""
    if (kd == 0 and d == 0) and (
        i >= len(grid) - 1 or grid[i + 1][j] == 0
    ):
        count += 1

    """right is  i, j + 1"""
    if (d == 0 and u == 0) and (
        j >= len(grid[i]) - 1 or grid[i][j + 1] == 0
    ):
        count += 1

    """left is  i, j - 1"""
    if (kd == 0 and ku == 0) and (j <= 0 or grid[i][j - 1] == 0):
        count += 1

    return count

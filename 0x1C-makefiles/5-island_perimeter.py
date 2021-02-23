#!/usr/bin/python3
"""Module with island perimeter function"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    perimeter = 0
    for row_num, row in enumerate(grid):
        for count, value in enumerate(row):
            if value == 1:
                if row[count - 1] == 0:
                    perimeter += 1
                if row[count + 1] == 0:
                    perimeter += 1
                if grid[row_num - 1][count] == 0:
                    perimeter += 1
                if grid[row_num + 1][count] == 0:
                    perimeter += 1
    return perimeter

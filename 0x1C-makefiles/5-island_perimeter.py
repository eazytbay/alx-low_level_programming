#!/usr/bin/python3
"""
This function returns the island's  perimeter as described in grid:
    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water,
    and there is one island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t
    connected to the water around the island).
"""


def island_perimeter(grid):
    """
    A function that returns the perimeter of the island described in grid
    """
    perimeter = 0
    for y in range(len(grid)):
        for x in range(len(grid[0])):
            if grid[y][x] == 1:
                perimeter += 4
                if y > 0:
                    if grid[y - 1][x] != 0:
                        perimeter -= 1
                if y < len(grid) - 1:
                    if grid[y + 1][x] != 0:
                        perimeter -= 1
                if x > 0:
                    if grid[y][x - 1] != 0:
                        perimeter -= 1
                if x < len(grid[0]) - 1:
                    if grid[y][x + 1] != 0:
                        perimeter -= 1
    return perimeter

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
    width = 0
    length = 0
    pred_list = []
    if len(grid[0]) > 100:
        return
        if len(grid) > 100:
            return
    for x in range(len(grid)):
        pred_list.append(grid[x].count(1))
        if pred_list[x] > 0:
            length += 1
    width = max(pred_list)
    for x in pred_list:
        if x != width and x > 1:
            return (length + width) * 2 + 4
    return (length + width) * 2

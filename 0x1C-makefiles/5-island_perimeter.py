#!/usr/bin/python3
""" A function def island_perimeter(grid)"""


def island_perimeter(grid):
    """ returns the perimeter of the island in grid."""
    height = len(grid)
    width = len(grid[0])
    edge = 0
    size = 0

    for n in range(height):
        for m in range(width):
            if grid[n][m] == 1:
                size += 1
                if (m > 0 and grid[n][m - 1] == 1):
                    edge += 1
                if (n > 0 and grid[n - 1][m] == 1):
                    edge += 1
    return ((size * 4) - (edge * 2))

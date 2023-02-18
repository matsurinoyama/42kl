#include <unistd.h>
#include <stdlib.h>

#define SIZE 4
#define MAX_VALUE 4

// Function to write the solution grid to stdout
void printGrid(int grid[][SIZE]) {
    char buffer[2];
    int row = 0;
    int col;
    while (row < SIZE) {
        col = 0;
        while (col < SIZE) {
            buffer[0] = grid[row][col] + '0';
            buffer[1] = ' ';
            write(STDOUT_FILENO, buffer, 2);
            col++;
        }
        write(STDOUT_FILENO, "\n", 1);
        row++;
    }
}

// Function to check if a value is present in a row
int checkRow(int grid[][SIZE], int row, int value) {
    int col = 0;
    while (col < SIZE) {
        if (grid[row][col] == value) {
            return 1;
        }
        col++;
    }
    return 0;
}

// Function to check if a value is present in a column
int checkCol(int grid[][SIZE], int col, int value) {
    int row = 0;
    while (row < SIZE) {
        if (grid[row][col] == value) {
            return 1;
        }
        row++;
    }
    return 0;
}

// Function to check if a value is present in a given region
int checkRegion(int grid[][SIZE], int rowStart, int colStart, int value) {
    int row = rowStart;
    while (row < rowStart + 2) {
        int col = colStart;
        while (col < colStart + 2) {
            if (grid[row][col] == value) {
                return 1;
            }
            col++;
        }
        row++;
    }
    return 0;
}

// Function to check if a value can be placed in a given cell
int checkCell(int grid[][SIZE], int row, int col, int value) {
    return !checkRow(grid, row, value) && !checkCol(grid, col, value) && !checkRegion(grid, row - row % 2, col - col % 2, value);
}

// Function to find the next empty cell in the grid
int findEmptyCell(int grid[][SIZE], int *row, int *col) {
    *row = 0;
    while (*row < SIZE) {
        *col = 0;
        while (*col < SIZE) {
            if (grid[*row][*col] == 0) {
                return 1;
            }
            *col += 1;
        }
        *row += 1;
    }
    return 0;
}

// Function to solve the Skyscraper puzzle using backtracking
int solvePuzzle(int grid[][SIZE]) {
    int row, col;
    if (!findEmptyCell(grid, &row, &col)) {
        return 1; // All cells are filled, puzzle solved
    }
    int value = 1;
    while (value <= MAX_VALUE) {
        if (checkCell(grid, row, col, value)) {
            grid[row][col] = value; // Tentatively place the value in the cell
            if (solvePuzzle(grid)) {
                return 1; // The puzzle is solved
            }
            grid[row][col] = 0; // If the value doesn't lead to a solution, reset the cell and try the next value
        }
        value++;
    }
    return 

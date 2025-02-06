#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "p83.c"

int main() {
    char board[3][3];
    char currentPlayer = 'X';
    int row, col;

    // Test case 1: Initialize the game board and check if it is empty
    initializeBoard(board);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            assert(board[i][j] == ' ');
        }
    }

    // Test case 2: Make a move and check if the board is updated correctly
    row = 1; col = 1; currentPlayer = 'X';
    makeMove(board, row, col, currentPlayer);
    assert(board[row][col] == 'X');

    // Test case 3: Check if the game is over after a move has been made
    row = 0; col = 2; currentPlayer = 'O';
    makeMove(board, row, col, currentPlayer);
    assert(isGameOver(board));

    // Test case 4: Check if the game is not over when there are still moves left to be made
    initializeBoard(board);
    assert(!isGameOver(board));

    return 0;
}